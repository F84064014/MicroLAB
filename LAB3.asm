LIST p=18f4520
#include<p18f4520.inc>
   CONFIG OSC = INTIO67
   CONFIG WDT = OFF
   org 0x00
   
initial:
    clrf WREG
    clrf LATA
    clrf LATB
    
start1:
    movlw 0x20
    iorlw 0x61
    movff WREG, LATA
    
    movlw 0xA4
    andlw 0x61
    movff WREG, LATB
    
start2:
    clrf WREG
    clrf TRISC
    clrf TRISD
    clrf TRISB
    clrf TRISA
    clrf TRISE
    
    ; TRISA = TRISB * TRISC
    movlw 0x0D
    movff WREG, TRISB
    movlw 0x0E
    movff WREG, TRISC
    
    ; count = 4
    movlw 0x0F
    movff WREG, TRISD
    
    ; TRISB left shift 4 bits -> WREG
    ; WREG = TRISB<<4
    rlncf TRISB, 0, 0
    rlncf WREG, 0, 0
    rlncf WREG, 0, 0
    rlncf WREG, 0, 0
    
loop:
    ; count--
    rrncf TRISD, 1, 0
    bcf TRISD, 7, 0 ; set the 7th bit 0
    bz ter
 add:
    ; TRISC right shift
    rrcf TRISC, 1, 0
    bcf TRISC, 7, 0
    
    ; If TRISE<7> (overflow in addwf happened)
    ;	TRISC<7> = 1 
    ; clear TRISE
    btfsc TRISE, 7, 0
    bsf TRISC, 7, 0
    bcf TRISE, 7, 0
    
    ; If the Carry (the shifted bit in TRISC) is zero
    ;    go loop
    ; else
    ;    TRISC += (TRISB<<4)
    bnc loop
    addwf TRISC, 1, 0
    
    ; If Carry (TRISC+=(TRISB<<4) in last step overflow)
    ; set TRISE 1
    bcf TRISE, 7, 0
    bnc nc
    bsf TRISE, 7, 0
nc:

    
    ; count--
    rrncf TRISD, 1, 0
    bcf TRISD, 7, 0
    
    ; If count != 0
    ;	go add
    ; else
    ;	finished
    bnz add
    
ter:

    ; TRISA = (TRISC >> 1)
    rrcf TRISC, 0, 0
    bcf WREG, 7, 0
    
    ; final overflow checking
    btfsc TRISE, 7, 0
    bsf WREG, 7, 0
    
    movff WREG, TRISA
    
end
