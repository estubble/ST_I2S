#include "StmI2sPeripheralPins.h"

// =====
// Note: Commented lines are alternative possibilities which are not used per default.
//       If you change them, you will have also to modify the corresponding xxx_api.c file
//       for pwmout, analogin, analogout, ...
// =====

//*** I2S ***

const PinMap PinMap_I2S_DATA[] = {
    {PE_6, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // == SPI MOSI
    {NC,    NC,    0}
};

const PinMap PinMap_I2S_SCLK[] = {
    {PE_2, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // == SPI SCK
    {NC,    NC,    0}
};

const PinMap PinMap_I2S_WSEL[] = {
    {PE_11, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)}, // == SPI NSS
    {NC,    NC,    0}
};

const PinMap PinMap_I2S_FDPX[] = {
    {PE_5, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_I2S2ext)}, // == SPI MISO
    {NC,    NC,    0}
};

const PinMap PinMap_I2S_MCLK[] = {
    {PD_12, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},  // Arduino D9
    {NC,    NC,    0}
};
