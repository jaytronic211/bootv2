/*
 * File:   main.c
 * Author: jfletcher
 *
 * Created on 12 March 2019, 11:56 AM
 */


#include <xc.h>

#define _XTAL_FREQ 500000

void init(void);
void unlock(void);
void lock(void);
void light(void);
int chklid(void);
int chklock(void);



void main(void) {

int i;
int x;
    
 init();
 while(1){
     
     
 while(!chklock()){
     NOP();    
 }
 
// __delay_ms(3000);
 
 
 for(i = 0; i < 10000; i++){
     for(x = 0; x < 12; x++){
     if(chklock()){
         i = 10000;
     }
     }
 }
 unlock();
/*
 __delay_ms(1000);
  while(chklid());
 __delay_ms(10000);
 lock();
 
 
*/


 }      
 return;
}

int chklock(void){
    int lockstate = PORTB;
    lockstate = (lockstate && 0b00000001);
    if(lockstate == 0b00000001){
    return 0;    
    }
    else{
    return 1;    
    }
}


void unlock(void){
    
    NOP();
}

void lock(void){
    NOP();
}

void light(void){
    NOP();
}

void init(void){
TRISA = 0b00000000;
TRISB = 0b11100000;
ANSEL = 0b00000000;
OSCCON = 0b00111110;
//__delay_ms(1000);
}
