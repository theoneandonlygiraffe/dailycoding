#include "randvect.h"

unsigned char* randbytes(long bytes){
	//System call open() to open a filestream "file"
	int ptr_file = open("/dev/urandom", O_RDONLY );
	
	//test if filestream empty
	if(ptr_file < 0){return (NULL);}

	//allocate mem and initialize "ptr_vect"
	unsigned char* ptr_vect = malloc(sizeof(char)*bytes);
	//read from "file" write to "vect". status is saved in "result"
	int result = read(ptr_file,ptr_vect,sizeof(char)*bytes);
	
	//test if read() call returned errors
	if(result < 0){return(NULL);}


	//close filestream
	close(ptr_file);
	//return "ptr_vect"
	return(ptr_vect);
}
