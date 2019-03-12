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



void main(void) {
 init();
 
 
        
    
    return;
}

void init(void){
TRISA = 0b00000000;
TRISB = 0b11100000;
ANSEL = 0b00000000;
OSCCON = 0b00111110;   
}
