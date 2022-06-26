#ifndef FIELD_H
#define FIELD_H

//2-Dimmensional byte array for the use in Maze solving and Pathfinding

#include "stdio.h"
#include "stdlib.h"

//memory layout
unsigned field_get_x(char* ptr);
unsigned field_get_y(char* ptr);
char* field_get_start(char*ptr);

//basics
char* field_init(unsigned x, unsigned y);
int field_all(char* field_pt,char(*function)(char));
char* field_at(char* field_pt, unsigned x, unsigned y);

// utility funktions
char zero(char in);
char one(char in);

//output
void field_debug(char* ptr);



#endif // FIELD_H 
