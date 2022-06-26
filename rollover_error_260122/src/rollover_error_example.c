#include "stdio.h"


void print_values();


unsigned char byte=0;
unsigned short twobyte=0;


int main (int argc, char* argv[]){
	
	printf("Start:\n");
	print_values();

	printf("increasing values by one till values differ...\n");
	while(byte==twobyte){
		byte++;
		twobyte++;
	}

	printf("Values are different!\n");
	print_values();

	return (0);
}

void print_values(){
	printf("8-bit--> length: %lu bytes  value: %u\n",sizeof(byte),byte);
	printf("16-bit-> length: %lu bytes  value: %u\n",sizeof(twobyte),twobyte);
}
