import QtQuick
import QtQuick.Controls
import QtCore

Window {
    id: app
    width: 640
    height: 480
    visible: true
    title: "Runik"
    color: apps.backgroundColor
    property int fs: width*0.035
    Settings{
        id: apps
        property color backgroundColor: 'black'
        property color fontColor: 'white'
        property string uIdApp: ''
    }
    Rectangle{
        id: xApp
        color: 'transparent'
        anchors.fill: parent
        Column{
            spacing: app.fs*0.5
            anchors.centerIn: parent
            Text{
                id: labelAppId
                text: "App ID:"
                font.pixelSize: app.fs
                color: apps.fontColor
            }
            TextInput{
                id: tiAppId
                width: app.width-app.fs
                height: app.fs*1.2
                font.pixelSize: app.fs
                color: apps.fontColor
                Rectangle{
                    width: parent.width+app.fs*0.1
                    height: parent.height+app.fs*0.1
                    color: 'transparent'
                    border.width: 1
                    border.color: apps.fontColor
                    anchors.centerIn: parent
                }
            }
            Button{
                text: "Cargar"
                font.pixelSize: app.fs
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Text{
                id: statusText
                text: "App ID:"
                font.pixelSize: app.fs
                color: apps.fontColor
            }

        }
    }

    // Component.onCompleted: {
    //     getAppsList()
    // }

    Component.onCompleted: {
        // Retardamos la llamada 1.5 segundos
        timer.restart()
    }

    Timer {
        id: timer
        interval: 5000
        repeat: false
        onTriggered: getAppsList()
    }

    Shortcut{
        sequence: 'Esc'
        onActivated: Qt.quit()
    }

    function getAppsList(){
        let d = new Date(Date.now())
        var targetUrl='https://raw.githubusercontent.com/nextsigner/nextsigner.github.io/main/runik/apps.txt?r='+d.getTime()

        statusText.text = "Cargando...";

        // Llamada a la función JS
        fetchAppsList(targetUrl, function(success, data) {
            if (success) {
                //textArea.text = data;
                statusText.text = "¡Archivo cargado con éxito!";
                statusText.text+='\n'+data
            } else {
                statusText.text = data; // Muestra el mensaje de error
            }
        });
    }


    function fetchAppsList(url, callback) {
        var xhr = new XMLHttpRequest();
        xhr.open("GET", url);
        xhr.onreadystatechange = function() {
            if (xhr.readyState === XMLHttpRequest.DONE) {
                if (xhr.status === 200) {
                    // Éxito: pasamos el texto al callback
                    callback(true, xhr.responseText);
                } else {
                    // Error en la petición (ej. 404, 500)
                    callback(false, "Error al cargar el archivo. Código: " + xhr.status);
                }
            }
        }
        xhr.send();
    }
}
