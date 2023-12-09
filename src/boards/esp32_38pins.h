#ifndef boards_definitions
#include "boards_def.h"
#endif

const String image = "http://192.168.1.90/images/esp32_38pins.png";

//GPIO List and position on the image
BoardGPIO gpios[] = {
    {35, 31.5, 6.2},
    {32, 36.5, 6.2},
    {33, 41, 6.2},
    {34, 27, 6.2},
    {36, 18, 6.2},
    {39, 22.5, 6.2},
    {25, 45.5, 6.2},
    {26, 50.3, 6.2},
    {27, 55, 6.2},
    {14, 59.5, 6.2},
    {12, 64, 6.2},
    {13, 73.2, 6.2},
    {9, 78, 6.2},
    {10, 82.5, 6.2},
    {11, 87, 6.2},

    {23, 13, 93.5},
    {22, 18, 93.5},
    {1, 22.5, 93.5},
    {3, 27, 93.5},
    {21, 32, 93.5},
    {19, 41, 93.5},
    {18, 45.5, 93.5},
    {5, 50.3, 93.5},
    {17, 55, 93.5},
    {16, 59.5, 93.5},
    {4, 64, 93.5},
    {0, 68.5, 93.5},
    {2, 73.2, 93.5},
    {15, 78, 93.5},
    {8, 82.5, 93.5},
    {7, 87, 93.5},
    {6, 91.5, 93.5},
};
const int numGpios = sizeof(gpios) / sizeof(gpios[0]);

ESPBoard esp32_38pins(gpios, numGpios, image,"ESP32-38pins",1.2);
