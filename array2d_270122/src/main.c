
#include "stdio.h"

#include "field.h"


int main(int argc, char* argv[]){
	
	
	char* myfield = field_init(500,2);
	
	field_debug(myfield);
	
	field_all(myfield,zero);
	printf("%u\n", *field_at(myfield,0,0));
	
	free(myfield);


}
