#include <iostream>
using namespace std;

#include "UartDriver.h"

// Globale Instanz, aber nur sichtbar in dieser Datei

//static UartDriver uart1;

void UartDriver::init() {
    // Init code
    
}

void UartDriver::send() {
    // HAL_UART_Transmit etc.
    cout << "UartDriver_SentMessage!" << endl;
}
UartDriver::UartDriver() {
    // Konstruktor
    cout << "UartDriver_Kunstuktor" << endl;
}

