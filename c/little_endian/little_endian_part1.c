#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t a = 0x12345678;
    uint8_t *p;
    p = (uint8_t *)&a;
    printf("%08X", *p);

    return 0;
}
