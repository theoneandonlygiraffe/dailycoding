
#include "stdio.h"
#include "stdlib.h"

#include "binary.h"
/* utilities for playing around and visualizing binary operations
 * alexander strasser
 * 31.03.2022
 */

//simple funktion that prints byte/char to stdout
void showbyte(unsigned char b){
	for(int i = 0 ; i<8 ; i++ ){
		//masking the bit to print
		unsigned char mask = 1 << ( 7-i ) ;
		if(b & mask){
			putchar('1');
		}
		else{
			putchar('0');
		}
	}
	printf("\n");
}
