/*
 * simple utility for creating arrays populated with random numbers.
 * for testing and  playing with sorting algorithms
 *
 * Alexander Strasser
 * 24.05.2022
 */

#ifndef RANDVECT_H
#define RANDVECT_H

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

unsigned char* randbytes(long bytes);

int* randints(int num);

float* randfloats(int num);



#endif //RANDVECT_H
