

#include "randvect.h"
#include <stdio.h>

int main(int argc,char** argv){
	unsigned char* a = randbytes(100);
	for(int i=0;i<100;i++){
		printf("%p:  %2x \n",a+i,*(a+i));
	}
}
