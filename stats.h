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
 * @file <stats.h> 
 * @brief <Header file for the application >
 *
 * <This file conatins all function declaraions and macro definitions needed>
 *
 * @author <Dhiaeddine Chaabene>
 * @date <04/05/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <This function prints statistics of a given array>
 *
 * <this function prints minimum,maximum,mean and median of a given array of unsigned char items>
 *
 * @param <Array> <the unsigned char array which we will print its statistics>
 *
 * @return <no return from this function as it will only print the statistics>
 */
void print_statistics( unsigned char Array[], unsigned char length);
/**
 * @brief <This function prints  a given unsigned char  array>
 *
 * <Given an array of data and a length, prints the array to the screen>
 *
 * @param <Array> <the unsigned char array which we will print >
 * @param <lengh> <number of items inside the corresponding array>
 *
 * @return <no return from this function as it will only print the array>
 */
void print_array( unsigned char Array[], unsigned char length);
/**
 * @brief <This function calculates the median of a given array>
 *
 * <Given an array of sorted data from large to small if the length is even it will calculate
    the average of the two items in the middle else if the lengh is odd it will return the item
    in the middle  >
 *
 * @param <Array> <the unsigned char array which we will print >
 * @param <lengh> <number of items inside the corresponding array>
 *
 * @return <a floating number in case lengh is even or unsigned char in case lengh is odd>
 */
unsigned char find_median(unsigned char Array[],unsigned char length);
/**
 * @brief <This function calculates the mean of a given array>
 *
 * <Given an array of data this functions sums all the items inside and divide it by the number
  of items to get the mean  >
 *
 * @param <Array> <the unsigned char array which we will print >
 * @param <lengh> <number of items inside the corresponding array>
 *
 * @return <a floating number because of the division operation>
 */
float  find_mean(unsigned char Array[],unsigned char length);
/**
 * @brief <This function finds the maximum of a given array>
 *
 * <Given a sorted array of data from large to small this function return the first item  >
 *
 * @param <Array> <the unsigned char array which we will print >
 * @param <lengh> <number of items inside the corresponding array>
 * 
 * @return <the unsigned char largest item in the array>
 */
unsigned char find_maximum(unsigned char Array[],unsigned char length);
/**
 * @brief <This function finds the minimum of a given array>
 *
 * <Given a sorted array of data from large to small this function returns the last item  >
 *
 * @param <Array> <the unsigned char array which we will print >
 * @param <lengh> <number of items inside the corresponding array>
 * 
 * @return <the smallest unsigned char item in the array>
 */

unsigned char find_minimum(unsigned char Array[],unsigned char length);
/**
 * @brief <This function sorts a given array from large to small>
 *
 * <Given an array of data and the lengh this function will compare each item with the next and
  sort them  >
 *
 * @param <Array> <the unsigned char array which we will print >
 * @param <lengh> <number of items inside the corresponding array>
 * 
 * @return <No return from this function as we will be changing the original one>
 */

void sort_array(unsigned char Array[],unsigned char length);
#endif /* __STATS_H__ */
