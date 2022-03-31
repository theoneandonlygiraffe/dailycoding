#include "stdio.h"
#include "stdlib.h"


#include "binary.h"

int main(int argc, char* argv[]){
	for(int i=1 ; i<argc ; i++ ){
		unsigned char b = (unsigned char)atoi(*(argv+i));
		showbyte(b);
	}
}
