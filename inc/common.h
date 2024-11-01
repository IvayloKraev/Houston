#ifndef HOUSTON_COMMON_H
#define HOUSTON_COMMON_H

#include "FreeRTOSConfig.h"
#include <stdint.h>

#define tskNORMAL_PRIORITY 1
#define tskCRUCIAL_PRIORITY ((configMAX_PRIORITIES - 1) | portPRIVILEGE_BIT)

typedef enum {
    huston_OK,
    huston_ERR,
    huston_WARN
} huston_RESULT;

inline uint8_t houston_common_mapToUint8(unsigned int min, unsigned int max, unsigned int val) {
    return min == max ? 0 : (uint8_t) (((val < min ? min : (val > max ? max : val)) - min) * 255 / (max - min));
}

#endif
