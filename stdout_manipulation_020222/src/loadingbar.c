#include "stdio.h"
#include "unistd.h"


int main(int argc, char* argv []){
  char bar[80*2] = "================================================================================"
                   "--------------------------------------------------------------------------------";

  for(int i =0; i<=80 ; i++){
    printf("[%.*s]\r",80,bar+80-i);
    fflush(stdout);
    sleep(1);
  }
  printf("\n");

  return 0;
}



