/*
 * File:   newmain.c
 * Author: user
 *
 * Created on 2020年12月5日, 下午 11:47
 */


#pragma config OSC = INTIO67    // Oscillator Selection bits (Internal oscillator block, port function on RA6 and RA7)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
#pragma config IESO = OFF       // Internal/External Oscillator Switchover bit (Oscillator Switchover mode disabled)

// CONFIG2L
#pragma config PWRT = OFF       // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bits (Brown-out Reset enabled and controlled by software (SBOREN is enabled))
#pragma config BORV = 3         // Brown Out Reset Voltage bits (Minimum setting)

// CONFIG2H
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
#pragma config WDTPS = 32768    // Watchdog Timer Postscale Select bits (1:32768)

// CONFIG3H
#pragma config CCP2MX = PORTC   // CCP2 MUX bit (CCP2 input/output is multiplexed with RC1)
#pragma config PBADEN = OFF     // PORTB A/D Enable bit (PORTB<4:0> pins are configured as digital I/O on Reset)
#pragma config LPT1OSC = OFF    // Low-Power Timer1 Oscillator Enable bit (Timer1 configured for higher power operation)
#pragma config MCLRE = ON       // MCLR Pin Enable bit (MCLR pin enabled; RE3 input pin disabled)

// CONFIG4L
#pragma config STVREN = ON      // Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
#pragma config LVP = OFF        // Single-Supply ICSP Enable bit (Single-Supply ICSP disabled)
#pragma config XINST = OFF      // Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode disabled (Legacy mode))

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection bit (Block 0 (000800-001FFFh) not code-protected)
#pragma config CP1 = OFF        // Code Protection bit (Block 1 (002000-003FFFh) not code-protected)
#pragma config CP2 = OFF        // Code Protection bit (Block 2 (004000-005FFFh) not code-protected)
#pragma config CP3 = OFF        // Code Protection bit (Block 3 (006000-007FFFh) not code-protected)

// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot block (000000-0007FFh) not code-protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM not code-protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection bit (Block 0 (000800-001FFFh) not write-protected)
#pragma config WRT1 = OFF       // Write Protection bit (Block 1 (002000-003FFFh) not write-protected)
#pragma config WRT2 = OFF       // Write Protection bit (Block 2 (004000-005FFFh) not write-protected)
#pragma config WRT3 = OFF       // Write Protection bit (Block 3 (006000-007FFFh) not write-protected)

// CONFIG6H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) not write-protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot block (000000-0007FFh) not write-protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write-protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection bit (Block 0 (000800-001FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection bit (Block 1 (002000-003FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection bit (Block 2 (004000-005FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection bit (Block 3 (006000-007FFFh) not protected from table reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF 

# define a11C 0x17
# define a11D 0xf0
# define a21C 0x1B
# define a21D 0xf0
# define a31C 0x1D
# define a31D 0xf0
# define a41C 0x1E
# define a41D 0xf0

# define a12C 0x27
# define a12D 0xf0
# define a22C 0x2B
# define a22D 0xf0
# define a32C 0x2D
# define a32D 0xf0
# define a42C 0x2E
# define a42D 0xf0

# define a13C 0x47
# define a13D 0xf0
# define a23C 0x4B
# define a23D 0xf0
# define a33C 0x4D
# define a33D 0xf0
# define a43C 0x4E
# define a43D 0xf0

# define a14C 0x87
# define a14D 0xf0
# define a24C 0x8B
# define a24D 0xf0
# define a34C 0x8D
# define a34D 0xf0
# define a44C 0x8E
# define a44D 0xf0

# define a15C 0x07
# define a15D 0xf1
# define a25C 0x0B
# define a25D 0xf1
# define a35C 0x0D
# define a35D 0xf1
# define a45C 0x0E
# define a45D 0xf1

# define a16C 0x07
# define a16D 0xf2
# define a26C 0x0B
# define a26D 0xf2
# define a36C 0x0D
# define a36D 0xf2
# define a46C 0x0E
# define a46D 0xf2

# define a17C 0x07
# define a17D 0xf4
# define a27C 0x0B
# define a27D 0xf4
# define a37C 0x0D
# define a37D 0xf4
# define a47C 0x0E
# define a47D 0xf4

# define a18C 0x07
# define a18D 0xf8
# define a28C 0x0B
# define a28D 0xf8
# define a38C 0x0D
# define a38D 0xf8
# define a48C 0x0E
# define a48D 0xf8

# define a55C 0x0f
# define a55D 0xe1
# define a65C 0x0f
# define a65D 0xd1
# define a75C 0x0f
# define a75D 0xb1
# define a85C 0x0f
# define a85D 0x71

# define a56C 0x0f
# define a56D 0xe2
# define a66C 0x0f
# define a66D 0xd2
# define a76C 0x0f
# define a76D 0xb2
# define a86C 0x0f
# define a86D 0x72

# define a57C 0x0f
# define a57D 0xe4
# define a67C 0x0f
# define a67D 0xd4
# define a77C 0x0f
# define a77D 0xb4
# define a87C 0x0f
# define a87D 0x74

# define a58C 0x0f
# define a58D 0xe8
# define a68C 0x0f
# define a68D 0xd8
# define a78C 0x0f
# define a78D 0xb8
# define a88C 0x0f
# define a88D 0x78
//
# define a55C 0x0f
# define a55D 0xe1
# define a65C 0x0f
# define a65D 0xd1
# define a75C 0x0f
# define a75D 0xb1
# define a85C 0x0f
# define a85D 0x71

# define a51C 0x1f
# define a51D 0xe0
# define a61C 0x1f
# define a61D 0xd0
# define a71C 0x1f
# define a71D 0xb0
# define a81C 0x1f
# define a81D 0x70

# define a52C 0x2f
# define a52D 0xe0
# define a62C 0x2f
# define a62D 0xd0
# define a72C 0x2f
# define a72D 0xb0
# define a82C 0x2f
# define a82D 0x70

# define a53C 0x4f
# define a53D 0xe0
# define a63C 0x4f
# define a63D 0xd0
# define a73C 0x4f
# define a73D 0xb0
# define a83C 0x4f
# define a83D 0x70

# define a54C 0x8f
# define a54D 0xe0
# define a64C 0x8f
# define a64D 0xd0
# define a74C 0x8f
# define a74D 0xb0
# define a84C 0x8f
# define a84D 0x70

# define Game 0
# define GameOver 1

# define Empty 0
# define PlayerHead 1
# define PlayerBody 2
# define Collection 3

# define UP 0
# define RIGHT 1
# define DOWN 2
# define LEFT 3

# define MAP_SIZE 64

# define _XTAL_FREQ 10000
# define displayDELAY 200

#include <xc.h>
#include <proc/pic18f4520.h>
#include <time.h>
#include <stdlib.h>

void Initialize();
void LED_display();
void LED_clear();
void LED_showmap();
void LED_heart();
void RandomFood();
void __interrupt(high_priority) Hi_ISR(void);

int map[8][8] = {0};
int mapLEDidx[128] = {a11C, a11D, a12C, a12D, a13C, a13D, a14C, a14D, a15C, a15D, a16C, a16D, a17C, a17D, a18C, a18D,
                      a21C, a21D, a22C, a22D, a23C, a23D, a24C, a24D, a25C, a25D, a26C, a26D, a27C, a27D, a28C, a28D,
                      a31C, a31D, a32C, a32D, a33C, a33D, a34C, a34D, a35C, a35D, a36C, a36D, a37C, a37D, a38C, a38D,
                      a41C, a41D, a42C, a42D, a43C, a43D, a44C, a44D, a45C, a45D, a46C, a46D, a47C, a47D, a48C, a48D,
                      a51C, a51D, a52C, a52D, a53C, a53D, a54C, a54D, a55C, a55D, a56C, a56D, a57C, a57D, a58C, a58D,
                      a61C, a61D, a62C, a62D, a63C, a63D, a64C, a64D, a65C, a65D, a66C, a66D, a67C, a67D, a68C, a68D,
                      a71C, a71D, a72C, a72D, a73C, a73D, a74C, a74D, a75C, a75D, a76C, a76D, a77C, a77D, a78C, a78D,
                      a81C, a81D, a82C, a82D, a83C, a83D, a84C, a84D, a85C, a85D, a86C, a86D, a87C, a87D, a88C, a88D};

int gameState;
int playerX;
int playerY;
int playerDirection;
int playerLength;

int tailX;
int tailY;

int playerXs[20];
int playerYs[20];

int btnEnable;
int RandomFoodFlag;

void main(void) {
    
    Initialize();
    
//    GIE = 0;
//    while(1){
        
//        //LED_clear();
//        LATC = 0xf7;
//        LATD = 0xff;
//        //LED_clear();
//        LATC = 0xfB;
//        LATD = 0xff;        
////        LED_clear();
//        LATC = 0xfD;
//        LATD = 0xff;
////        LED_clear();
//        LATC = 0xfE;
//        LATD = 0xff;
////        LED_clear();
//        LATC = 0xff;
//        LATD = 0xef;
//        //        LED_clear();
//        LATC = 0xff;
//        LATD = 0xdf;
//        //        LED_clear();
//        LATC = 0xff;
//        LATD = 0xbf;
//        //        LED_clear();
//        LATC = 0xff;
//        LATD = 0x7f;

//    }
    
    // test the corectness of circuit
    /*
    while(1){
    if( (PORTA & 0x10) == 0)
        LED_clear();
    else
        LED_heart();
    }
    */
    
    btnEnable = 1;    
    RandomFood(); // initial random food
    RandomFoodFlag = 0;
    while(gameState == Game){
        
        // if button released, enable button
        if((PORTA & 0x10) == 0)
            btnEnable = 1;
        
        LED_showmap();
        // turn right and disable button
        if((PORTA & 0x10) != 0 && btnEnable == 1){
            btnEnable = 0;
            playerDirection++;
            if(playerDirection > LEFT)
                playerDirection = UP;
            LED_showmap();
        }
        
        if(RandomFoodFlag == 1){
            RandomFood();
        }
    };
    
    while(gameState == GameOver){
        
    }
    
    return;
}
void Initialize(){
    
    LATD = 0;
    LATC = 0;
    LATA = 0;
    
    PORTA = 0;
    
    TRISD = 0;
    TRISC = 0;
    TRISA = 0x10;
    
    ADCON1 = 0x0f;
    
    gameState = Game;

    GIE = 1;
    PEIE = 1;
    
    OSCCON = 0b1000000; // 1M Hz, 1 sec = 62500
    PR2 = 244; // interrupt if tmr2 = pr2
                // 122 = 62500/12/12 => 1sec
    
    TMR2ON = 1; // timer2 on
    T2CKPS1 = 1; // prescaler 16
    T2OUTPS0 = 1; // postscaler 16 (b1111)
    T2OUTPS1 = 1;
    T2OUTPS2 = 1;
    T2OUTPS3 = 1;
    TMR2IE = 1;
    
    
    playerX = 4;
    playerY = 4;
    playerDirection = UP;
    map[playerX][playerY] = PlayerHead; // start position
    playerLength = 1;
    
    tailX = playerX;
    tailY = playerY;
    
    for(int i=0; i<20; i++){
        playerXs[i] = -1;
        playerXs[i] = -1;
    }
    playerXs[0] = playerX;
    playerYs[0] = playerY;
    
//    playerXs[1] = playerX-1;
//    playerYs[1] = playerY;
//    playerXs[2] = playerX -2;
//    playerYs[2] = playerY;
//    playerXs[3] = playerX -2;
//    playerYs[3] = playerY -1;
//    playerLength = 4;
}

void RandomFood(){

    // divide the 8*8 square into 8 quadrant
    srand(time(NULL));
    
    int tempx = -100;
    int tempy = -100;
    
    if(playerX > 3){
        if(playerY > 3){
            // set (1,1) as the generate center
            tempx = 1+rand()%3-1;
            tempy = 1+rand()%3-1;
        }
        else{
            //set (1,6) as the center
            tempx = 1+rand()%3-1;
            tempy = 6+rand()%3-1;
        }
    }
    else{
        if(playerY > 3){
            //(6,1)
            tempx = 6+rand()%3-1;
            tempy = 1+rand()%3-1;
        }
        else{
            //(6,6)
            tempx = 6+rand()%3-1;
            tempy = 6+rand()%3-1;
        }
    }
        
    if(map[tempx][tempy] == Empty){
        map[tempx][tempy] = Collection;
    RandomFoodFlag = 0;
    }
    else{
        // regenerate
        RandomFoodFlag = 1;
    }
    
    return;
    
    //map[0][0] = Collection;
    //map[7][7] = Collection;
    //map[7][0] = Collection;
}

void __interrupt(high_priority) Hi_ISR(void){
    
    int playerX_last = playerX;
    int playerY_last = playerY;
    
    if(playerDirection == UP){
        if(playerY > 0){
            playerY--;
        }
        else{
            gameState = GameOver;
            return;
        }
    }
    else if(playerDirection == DOWN){
        if(playerY < 7)
            playerY++;
        else{
            gameState = GameOver;
            return;
        }
    }
    else if(playerDirection == RIGHT){
        if(playerX < 7)
            playerX++;
        else{
            gameState = GameOver;
            return;
        }
    }
    else if(playerDirection == LEFT){
        if(playerX > 0){
            playerX--;
        }
        else{
            gameState = GameOver;
            return;
        }
    }
    else{
        return;
    }
    
    // go forward, clear tail and shine next
    if(map[playerX][playerY] == Empty){
        
        // right shift
        // clear the tail
        // set the head
        for(int i=19; i>=0; i--){
            if(playerXs[i] != -1){
                playerXs[i+1] = playerXs[i];
                playerYs[i+1] = playerYs[i];
            }
        }
        
        playerXs[0] = playerX;
        playerYs[0] = playerY;
        
        tailX = playerXs[playerLength];
        tailY = playerYs[playerLength];
        
        playerXs[playerLength] = -1;
        playerYs[playerLength] = -1;
        
        //map[tailX][tailY] = Empty;
        //map[playerX][playerY] = PlayerHead;
    }
    
    // Collect and set head
    else if(map[playerX][playerY] == Collection){
        
        RandomFoodFlag = 1;
        
        map[playerX][playerY] = PlayerHead;
        map[playerX_last][playerY_last] = PlayerBody;
        playerLength++;
        
        // update player position
        for(int i=19; i>=0; i--){
            // right shift array
            if(playerXs[i] != -1){
                playerXs[i+1] = playerXs[i];
                playerYs[i+1] = playerYs[i];
            }
        }
        playerXs[0] = playerX;
        playerYs[0] = playerY;
        
        tailX = playerXs[playerLength-1];
        tailY = playerYs[playerLength-1];
        
    }
    // run into yourself
    else if(map[playerX][playerY] == PlayerBody){
        gameState = GameOver;
    }

        // update map according to the location info
       for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(map[i][j] == PlayerBody || map[i][j] == PlayerHead)
                map[i][j] = Empty;
            }
        }
        for(int i=1; i<20; i++){
            if(playerXs[i] != -1){
                map[playerXs[i]][playerYs[i]] = PlayerBody;
            }
        }
        map[playerXs[0]][playerYs[0]] = PlayerHead;
    
    
    
    // clear interrupt flag
    TMR2IF = 0;
    return;
}



void LED_clear(){
    LATC = 0x0f;
    LATD = 0xf0;
}

void LED_display(int C, int D){
    LED_clear();
    LATC = C;
    LATD = D;
}

void LED_heart(){
    while(1){    
        LED_display(a14C, a14D);
        LED_display(a15C, a15D);
        LED_display(a23C, a23D);
        LED_display(a26C, a26D);
        LED_display(a32C, a32D);
        LED_display(a37C, a37D);
        LED_display(a41C, a41D);
        LED_display(a48C, a48D);
        LED_display(a51C, a51D);
        LED_display(a58C, a58D);
        LED_display(a61C, a61D);
        LED_display(a68C, a68D);
        LED_display(a72C, a72D);
        LED_display(a77C, a77D);
        LED_display(a63C, a63D);
        LED_display(a66C, a66D);
        LED_display(a55C, a55D);
        LED_display(a54C, a54D);
        break;
    }
}

void LED_showmap(){
    
    int *LEDidx = mapLEDidx;
    for(int i=0; i<8 ;i++){
        for(int j=0; j<8; j++){
            if(map[j][i] != Empty){
                int Ctemp = *LEDidx;
                int Dtemp = *(LEDidx+1);
                LED_display(Ctemp, Dtemp);
                //__delay_ms(displayDELAY);
                //LED_clear();
            }
            LEDidx += 2;
        }
    }
    return;
}
