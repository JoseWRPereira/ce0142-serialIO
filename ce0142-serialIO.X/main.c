/*
 * File:   main.c
 * Author: curtaeletronica
 *
 * Created on 30 de Setembro de 2019, 19:33
 * 
 * IDE:         MPLAB X IDE v3.15
 * Compiler:    XC8 v1.45
 * OS:          Deepin 15.11 X86_64
 * Kernel:      4.15.0-30deepin-generic
 * 
 * Objetivo: 
 *      Apresentar mensagens em display LCD atrav�s de barramento de 8 vias.
 * 
 * Pinos    |n�     |Conex�o
 *  VDD     |11,32  | Alimenta��o (Vcc/+5V)
 *  VSS     |12,31  | Alimenta��o (GND/0V)
 *  RE0     |8      | SHLD : Shift / Load
 *  RE1     |9      | CLK : Clock
 *  RE2     |10     | OUT: Output
 *  RE3     |1      | IN: Input
 * 
*/

//***************** Bibliotecas
#include <xc.h>
#include "config.h"
#include "serialIO.h"

//***************** Programa Principal
void main(void)
{
    unsigned char vetorIn[6];
    unsigned char vetorOut[6];
    
    initSerialIO( vetorIn, vetorOut, 6 );
    
    while( 1 )                      // La�o de repeti��o infinita.
    {

    }
    return;
}
//***************** Fim do Programa Principal
