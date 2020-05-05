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
sort_array(test,SIZE);
print_array(test,SIZE);
print_statistics(test,SIZE);
}

/* Add other Implementation File Code Here */
void print_array(unsigned char Array[], unsigned char length){
unsigned char  i;
   printf("ARRAY=( ");
	for (i=0;i < length;i++){
		printf("%d ",Array[i]);
		if(i % 7 == 0 && i != 0 && i!=length){
			printf(" \n");
			printf("	");
		   }
			if ( i ==( length-1)){
				printf("  )\n");
			  }
	}
}
void sort_array(unsigned char Array[], unsigned char length){
unsigned char  a = 0 ,i,j;
	for (i=0;i<= length;i++){
		for (j=i+1;j<=length;j++){
			if(Array[i]<Array[j]){
				a = Array[j];
				Array[j]= Array[i];
				Array[i]=a; 
		}	}
	}
}
unsigned char find_maximum(unsigned char Array[], unsigned char length){
sort_array(Array,length);
return Array[0];

}
unsigned char find_minimum(unsigned char Array[], unsigned char length){
sort_array(Array,length);
return Array[length-1];

}
unsigned char find_median(unsigned char Array[],unsigned char length){
unsigned char med;
	if (SIZE % 2 ==0){
	med =( Array[SIZE/2] + Array[(SIZE/2)+2])/2;
	}
	else  {
	med = Array[(SIZE-1)/2];
	}
return med;
}
float find_mean(unsigned char Array[],unsigned char length){
float sum=0, mean=0;
unsigned char i;
	for (i=0;i<length;i++){
	sum += Array[i];
	}
mean =  sum/length;
return mean ;

}
void print_statistics(unsigned char Array[],unsigned char length){
unsigned char max , min,median;
float mean;
max = find_maximum(Array,length);
min = find_minimum(Array,length);
median = find_median(Array,length);
mean = find_mean(Array,length);
printf("the largest element in the array is %d\n",max);
printf("the smallest element in the array is %d\n",min);
printf("the median of this array is %d\n",median);
printf("the mean of this array is %f\n",mean);

}


