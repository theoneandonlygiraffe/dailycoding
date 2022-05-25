#include "randvect.h"

int* randvect(int length){
	//System call open() to open a filestream "file"
	int ptr_file = open("/dev/urandom", O_RDONLY );
	
	//test if filestream empty
	if(ptr_file < 0){return (NULL);}

	//allocate mem and initialize "ptr_vect"
	int* ptr_vect = malloc(sizeof(int)*length);

	for(int i=0; i<length; i++){
		int randint = 0;
		//read from "file" write to "randint". status is saved in "result"
		int result = read(ptr_file,&randint,sizeof(int));
		
		//test if read() call returned errors
		if(result < 0){return(NULL);}

		//write results to vect
		*(ptr_vect+i) = randint;

	}

	//close filestream
	close(ptr_file);

	//return "ptr_vect"
	return(ptr_vect);
}
