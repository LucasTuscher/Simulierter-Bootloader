#include <iostream>
#include <thread>
#include <chrono>

// Simulierte Anwendung
void startApplication() {
    std::cout << "Anwendung wird gestartet..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Anwendung läuft!" << std::endl;
}

// Simulierter Bootloader
void bootloader() {
    std::cout << "Bootloader gestartet..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Prüfen, ob ein "Firmware"-Update vorhanden ist
    bool updateVorhanden = false;

    if (updateVorhanden) {
        std::cout << "⬇Update gefunden. Wird installiert..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "Update abgeschlossen!" << std::endl;
    } else {
        std::cout << "Kein Update gefunden." << std::endl;
    }

    // Anwendung starten
    startApplication();
}

int main() {
    bootloader();
    return 0;
}
