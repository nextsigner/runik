import QtQuick
import QtQuick.Window
import QtQuick3D

Item {
    id: root

    View3D {
        id: view3D
        width: 500//parent ? parent.width : 0;
        height: 800//parent ? parent.height : 0
        //anchors.fill: parent

        environment: SceneEnvironment {
            clearColor: "#141824"
            backgroundMode: SceneEnvironment.Color
            antialiasingMode: SceneEnvironment.MSAA
            antialiasingQuality: SceneEnvironment.Medium
        }

        PerspectiveCamera {
            id: camera
            position: Qt.vector3d(0, 120, 420)
            eulerRotation.x: -15
            clipNear: 10
            clipFar: 2000
        }

        DirectionalLight {
            eulerRotation.x: -35
            eulerRotation.y: 45
            brightness: 1.2
            castsShadow: false
        }

        Node {
            id: pivot3D
            position: Qt.vector3d(0, 0, 0)

            Model {
                source: "#Cube"
                x: -90
                scale: Qt.vector3d(1.1, 1.1, 1.1)
                materials: PrincipledMaterial {
                    baseColor: "#4ea8de"
                    roughness: 0.35
                    metalness: 0.1
                }
            }

            Model {
                source: "#Sphere"
                x: 90
                scale: Qt.vector3d(1.1, 1.1, 1.1)
                materials: PrincipledMaterial {
                    baseColor: "#f4a261"
                    roughness: 0.3
                    metalness: 0.15
                }
            }

            NumberAnimation on eulerRotation.y {
                from: 0
                to: 360
                duration: 6000
                loops: Animation.Infinite
                running: root.visible
            }
        }
    }

    Component.onCompleted: {
        console.log("Escena3D.qml inicializada correctamente")
    }

    Component.onDestruction: {
        console.log("Escena3D.qml destruida")
    }
}