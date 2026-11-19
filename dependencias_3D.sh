#!/usr/bin/env bash
# ==============================================================================
# Script de preparacion de entorno para compilar Runik (Qt 6.11.0 + Android)
# Entorno objetivo: Ubuntu 22.04 LTS
# ==============================================================================

set -euo pipefail

echo "=== Actualizando indices de paquetes APT ==="
sudo apt update

echo "=== Instalando herramientas base de compilacion C/C++, CMake y Ninja ==="
sudo apt install -y \
    build-essential \
    cmake \
    ninja-build \
    pkg-config \
    git \
    unzip \
    zip \
    curl \
    file

echo "=== Instalando OpenJDK 17 (requerido para tooling Android en Qt 6) ==="
sudo apt install -y openjdk-17-jdk

echo "=== Instalando dependencias de Qt / X11 / OpenGL / Multimedia / SQLite / SSL ==="
sudo apt install -y \
    libgl1-mesa-dev \
    libglu1-mesa-dev \
    libegl1-mesa-dev \
    libgles2-mesa-dev \
    libvulkan-dev \
    vulkan-tools \
    libxkbcommon-dev \
    libxkbcommon-x11-dev \
    libxcb-cursor0 \
    libxcb-icccm4 \
    libxcb-image0 \
    libxcb-keysyms1 \
    libxcb-randr0 \
    libxcb-render-util0 \
    libxcb-shape0 \
    libxcb-sync1 \
    libxcb-xfixes0 \
    libxcb-xinerama0 \
    libxcb-xinput0 \
    libssl-dev \
    libsqlite3-dev \
    zlib1g-dev

echo "=== Instalando utilidades ADB / Android platform-tools del sistema (opcional) ==="
sudo apt install -y android-sdk-platform-tools || true

echo ""
echo "=============================================================================="
echo "Instalacion APT completada."
echo "Verifica y ajusta estos puntos clave en tu nuevo Ubuntu 22.04:"
echo "  1. Java 17 activo por defecto:  java -version  (usar sudo update-alternatives --config java si hace falta)"
echo "  2. Qt 6.11.0 + QtQuick3D instalados (incluyendo Android arm64-v8a / Qt Creator)"
echo "  3. Android SDK + NDK r27d configurados en Qt Creator -> Preferencias -> Kits"
echo "  4. En el .pro para Android 15/16 (paginas de 16 KB), mantener:"
echo "     android { QMAKE_LFLAGS += -Wl,-z,max-page-size=16384 -Wl,-z,common-page-size=16384 }"
echo "=============================================================================="
