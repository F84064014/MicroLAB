LIST p=18f4520
#include<p18f4520.inc>
   CONFIG OSC = INTIO67
   CONFIG WDT = OFF
   org 0x00
   
initial:
    clrf WREG
    clrf TRISD
    clrf TRISC

    lfsr FSR0, 0x100 ;Move literal to FSRx
    movlw 0x00
loop1:
    movwf INDF0 ;use FSR0 as address
    addlw 1 ;add literal and WREG
    btfss POSTINC0, 3 ;if bit <3> in register POSTINC0 is 1 => next instruction skipped
    goto loop1

initial2:
    clrf WREG
    lfsr FSR0, 0x100
    lfsr FSR1, 0x110
    movlw 0x00
    
loop2:
    addwf INDF0, 0
    movwf POSTINC1
    btfss POSTINC0, 3
    goto loop2


end
