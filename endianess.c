
#include<stdio.h>

typedef unsigned int uint32_t; 
typedef unsigned char uint8_t;

typedef enum
{
    FALSE=0,
    TRUE,
}BOOL;
#if 0
BOOL is_little_endian()
{
    uint32_t num = 1;
    uint8_t byte;

    byte = *((uint8_t*) &num);

    return (byte==1? TRUE:FALSE);

}
#endif

BOOL is_little_endian()
{
    uint32_t num = 0x12345678;;
    uint8_t *byte;

    byte = (uint8_t*)&num;

    return((*byte)==(num&0xFF)? TRUE:FALSE);
}

uint32_t swap_endianess(uint32_t num)
{
    int val;
    val = (num&0xFFFF0000)>>16u | (num&0x0000FFFF) <<16u;
    printf("%x\n", val);
    val = (val&0xFF00FF00)>>8u  | (val&0x00FF00FF) <<8u;
    printf("%x\n", val);

    return val;
}

int main()
{
    int num=0x12345678;
    
    printf("%d\n", is_little_endian());

    printf("%x", swap_endianess(num));
}