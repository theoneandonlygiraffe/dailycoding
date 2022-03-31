#include "stdio.h"
#include "stdlib.h"
//binary output of 8-bit bit/char
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



int main(int argc, char* argv[]){
	for(int i=1 ; i<argc ; i++ ){
		unsigned char b = (unsigned char)atoi(*(argv+i));
		showbyte(b);
	}
}
