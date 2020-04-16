#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include "blake256.h"

int main(void)
{
    printf("start\n");
    uint8_t r[32];
    uint8_t m[512];
    for (size_t i = 0; i < 512; i++) {
        m[i] = i;
    }
    blake256_hash(r, m, 0);

    return 0;
}
