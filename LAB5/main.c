
#include <xc.h>

extern unsigned int divide(unsigned int a,unsigned int b);


void main(void) {
    volatile unsigned int res = divide( 37, 13);
    volatile unsigned char REMAINDER = res % 256; 
    volatile unsigned char QUOTIENT = res / 256;
    while(1);
    return;
}
