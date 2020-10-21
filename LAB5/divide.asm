    #include "xc.inc"

    GLOBAL _divide
    
    PSECT mytext , local , class = CODE , reloc = 2
 
 divident set LATA
 divisor set LATB
 quotient set 0x005
 remainder set 0x006
 
 cnt set 0x007
 n equ 0x08
 
 _divide:
    movff 0x001,divident
    movff 0x003,divisor
    movff divident,quotient
    movlw n
    movwf cnt
    
    loop:
    ;branch loop counter
    tstfsz cnt
    goto next
    goto finish
    
    next:
    ;shift left remainder & quotient
    bcf STATUS,0
    rlcf remainder
    bcf STATUS,0
    rlcf quotient,f
    btfsc STATUS,0;remainder[0] = 1 if carry 
    bsf remainder,0
    
    ;sub loop counter
    movlw 1
    subwf cnt,f
    
    ;set quotient[0] to 1 if remainder > divisor
    movff divisor,WREG; WREG = divisor
    subwf remainder,w; if remainder > divisor
    bnc loop
    movff WREG,remainder
    bsf quotient,0
    goto loop
    
   
    finish:
    movff remainder,0x001
    movff quotient,0x002
    
    return
