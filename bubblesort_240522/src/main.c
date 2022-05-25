

#include "randvect.h"
#include <stdio.h>

int main(int argc,char** argv){
	int* a = randvect(100);
	for(int i=0;i<100;i++){
		printf("%3i:  %i\n",i,*(a+i));
	}
}
