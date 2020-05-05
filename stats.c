/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <implementation file written in c language >
 *
 * <This file contains the code of all needed fucnction for an application
    that can analyze an array of unsigned char data items and report analytics
    on the maximum, minimum, mean, and median of the data set and sort them
    from large to small.>
 *
 * @author <Dhiaeddine Chaabene>
 * @date <04/05/2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (39)

void main() {

  unsigned char test[SIZE] = {  201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
}

/* Add other Implementation File Code Here */
void print_array(unsigned char Array[], unsigned char length){
 
}
void sort_array(unsigned char Array[], unsigned char length){
}
unsigned char find_maximum(unsigned char Array[], unsigned char length){

}
unsigned char find_minimum(unsigned char Array[], unsigned char length){

}
unsigned char find_median(unsigned char Array[],unsigned char length){
}
float find_mean(unsigned char Array[],unsigned char length){

}
void print_statistics(unsigned char Array[],unsigned char length){

}


