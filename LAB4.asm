LIST p=18f4520
#include<p18f4520.inc>
   CONFIG OSC = INTIO67
   CONFIG WDT = OFF
   org 0x00
   
Initial:
    movlf macro L, F ;macro equals to paste the code section
	lfsr FSR0, F
	movlw L
	movwf INDF0
	endm
	
    addfff macro F0, F1, Fres
	lfsr FSR0, F0
	lfsr FSR1, F1
	lfsr FSR2, Fres
	movf INDF0, 0, 0 ; movf f, d, a (if d=0 save to WREG, else to f)
	addwf INDF1, 0, 0
	movwf INDF2
	endm
   
start:

    movlf 0x00, 0x00
    movlf 0x01, 0x01
    
    movlw 0x01
    movff WREG, TRISA
        
    lfsr FSR0, 0x00
    lfsr FSR1, 0x01
    lfsr FSR2, 0x02
    
    movlw 0x05
    rcall fib
    addfff 0x00, 0x06, 0x12
    rcall finish

fib:
    movff WREG, LATD
    
    ;addfff FSR0, FSR1, FSR2
    movf INDF0, 0, 0 ; movf f, d, a (if d=0 save to WREG, else to f)
    addwf INDF1, 0, 0
    movwf INDF2
    
    movf POSTINC0, 1, 0
    movf POSTINC1, 1, 0
    movf POSTINC2, 1, 0
    movff LATD, WREG
    decfsz WREG, 0, 0
    rcall fib
    endfib:
	return
    
finish:    
    end   
