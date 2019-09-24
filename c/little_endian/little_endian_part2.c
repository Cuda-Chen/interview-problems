#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t a = 0x12345678;
    uint32_t *p;
    p = &a;
    p = p + 1;
    printf("%08X", p);
  
    return 0;
}
