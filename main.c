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
int chklid(void);
int chklock(void);



void main(void) {
 init();
 int lock = 0x00;
 
 
 while(1){
 if (chklock()){
  __delay_ms(1000);
  __delay_ms(1000);
  __delay_ms(1000);
  if (chklock()){
      unlock();
  }
  
     
     
     
 }
 
 
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
    
    return 0;
}

void init(void){
TRISA = 0b00000000;
TRISB = 0b11100000;
ANSEL = 0b00000000;
OSCCON = 0b00111110;
//__delay_ms(1000);
}
