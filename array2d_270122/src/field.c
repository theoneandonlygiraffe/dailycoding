#include "field.h"


//memory layout
unsigned field_get_x(char* ptr){
	return( *( (unsigned*)ptr) );//0x00
}

unsigned field_get_y(char* ptr){
	return( *( ((unsigned*)ptr) + 1 ) );//0x04
}

char* field_get_start(char* ptr){
	return( ptr + (2*sizeof(unsigned)));//0x08
}


//basics
char* field_init(unsigned x , unsigned y){
	char* ptr = malloc(2*sizeof(unsigned) + x*y*sizeof(char)); //2x 4byte for dimesions + x*y byte for data
	*(  (unsigned*) ptr      ) = x;//0x00
	*( ((unsigned*) ptr) + 1 ) = y;//0x08
	return(ptr);
}

int field_all(char* ptr , char (*function)(char)){

	unsigned long int max= field_get_x(ptr)*field_get_y(ptr);
	char* start_ptr=field_get_start(ptr);

	for(unsigned long long int i = 0 ; i < max ; i++){
		char* i_ptr = start_ptr + i;
		*i_ptr = function(*i_ptr);
	}
	return(0);
}

char* field_at(char* ptr, unsigned x, unsigned y){
	return( field_get_start(ptr) + (y* field_get_y(ptr) ) + x );

}

// utility
char zero(char in){
	return(0);
}

char one(char in){
	return(1);
}

//output
void field_debug(char* ptr){
	unsigned x = field_get_x(ptr);
	unsigned y = field_get_y(ptr);
	unsigned long long int total = 2*sizeof(unsigned) + x*y*sizeof(char);
	char* start= field_get_start(ptr);
	printf("----------------------\n");	
	printf("2*%lub + %u*%ub = %llub\n",sizeof(unsigned) ,x,y,total);
	printf("Block:%p\n",ptr);
	printf("Field:%p\n",start);
	printf("      %p\n",start+(x*y));
	printf("----------------------\n");
}	











