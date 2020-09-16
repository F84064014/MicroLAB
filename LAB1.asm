LIST p=18f4520
#include<p18f4520.inc>
   CONFIG OSC = INTIO67
   CONFIG WDT = OFF
   org 0x00
   
initial:
    clrf WREG
    clrf TRISD
    clrf TRISC
    
start:
    movlw 0x10
    movff WREG, TRISD
    clrf WREG
    goto loop

incr:
    addwf TRISD, 0
    
loop:
    decfsz TRISD, 1
    goto incr
    
end
    



