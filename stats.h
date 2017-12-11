/******************************************************************************/
/* Copyright (C) 2017 by Alex Fosdick - University of Colorado                */
/*                                                                            */
/* Redistribution, modification or use of this software in source or binary   */
/* forms is permitted as long as the files maintain this copyright. Users are */ 
/* permitted to modify this and use it to learn about the field of embedded   */
/* software. Alex Fosdick and the University of Colorado are not liable for   */ 
/* any misuse of this material.                                               */ 
/*                                                                            */
/******************************************************************************/

/**
 * @file stats.h 
 * @brief This header file includes declarations and documentation for the
 * functions from the stats.c file.
 *
 * This header file includes declarations and documentation for the following
 * functions implemented at stats.c file:
 *
 * find_mean(): given an array of data and a length, returns the mean
 * find_median(): given an array of data and a length, returns the median value
 * find_maximum(): given an array of data and a length, returns the maximum
 * find_minimum(): given an array of data and a length, returns the minimum
 * sort_array(): given an array of data and a length, sorts the array from the
 * largest to smallest value
 * print_array(): given an array of data and a length, prints the array to the screen
 * print_statistics(): a function that prints the statistics of an array including 
 * miminum, maximum, mean and median
 *
 * @author WILSON PARDI JUNIOR
 * @date November 30th, 2017
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

unsigned char find_mean(unsigned char* arrayPointer, unsigned int arraySize);

/**
 * @brief Returns the mean value of a unsigned char array
 *
 * This function takes as inputs a unsigned char pointer to an n-element data array
 * and an unsigned integer as the size of the same n-element data array. Then it calculates
 * the mean value of this array by adding up all the array elements values and dividing it
 * by the number of elements. 
 *
 * @param arrayPointer A unsigned char pointer to an n-element data array
 * @param arraySize An unsigned integer as the size of the array
 *
 * @return The mean value
 */

unsigned char find_median(unsigned char* arrayPointer, unsigned int arraySize);

/**
 * @brief Returns the median value of a unsigned char array
 *
 * This function takes as inputs a unsigned char pointer to an n-element data array
 * and an unsigned integer as the size of the same n-element data array. First all
 * elements of the array are listed in ascending numerical order. If there is an odd number
 * of elements, then the median value is the middle element of the array. On the other
 * hand, if there is an even number of elements, then the median value is the mean of
 * the central elements.
 *
 * @param arrayPointer A unsigned char pointer to an n-element data array
 * @param arraySize An unsigned integer as the size of the array
 *
 * @return The median value
 */

unsigned char find_maximum(unsigned char* arrayPointer, unsigned int arraySize);

/**
 * @brief Returns the maximum value of a unsigned char array
 *
 * This function takes as inputs a unsigned char pointer to an n-element data array
 * and an unsigned integer as the size of the same n-element data array. First all
 * elements of the array are listed in ascending numerical order. The maximum value is
 * the last element of the array in the list.
 *
 * @param arrayPointer A unsigned char pointer to an n-element data array
 * @param arraySize An unsigned integer as the size of the array
 *
 * @return The maximum value
 */

unsigned char find_minimum(unsigned char* arrayPointer, unsigned int arraySize);

/**
 * @brief Returns the minimum value of a unsigned char array
 *
 * This function takes as inputs a unsigned char pointer to an n-element data array
 * and an unsigned integer as the size of the same n-element data array. First all
 * elements of the array are listed in ascending numerical order. The minimum value is
 * the first element of the array in the list.
 *
 * @param arrayPointer A unsigned char pointer to an n-element data array
 * @param arraySize An unsigned integer as the size of the array
 *
 * @return The minimum value
 */

unsigned char* sort_array(unsigned char* arrayPointer, unsigned int arraySize);

/**
 * @brief Returns an array sorted from the largest to the smallest value
 *
 * This function takes as inputs a unsigned char pointer to an n-element data array
 * and an unsigned integer as the size of the same n-element data array. Then it sorts
 * the array from the largest to the smallest value where the zeroth element is the
 * largest value and the last element (n - 1) is the smallest.
 *
 * @param arrayPointer A unsigned char pointer to an n-element data array
 * @param arraySize An unsigned integer as the size of the array
 *
 * @return A sorted array
 */

void print_array(unsigned char* arrayPointer, unsigned int arraySize);

/**
 * @brief Prints an array to the screen
 *
 * This function takes as inputs a unsigned char pointer to an n-element data array
 * and an unsigned integer as the size of the same n-element data array. Then it
 * prints the array to the screen nicely formatted.
 * 
 * @param arrayPointer A unsigned char pointer to an n-element data array
 * @param arraySize An unsigned integer as the size of the array
 *
 */

void print_statistics(unsigned char* arrayPointer, unsigned int arraySize);

/**
 * @brief Prints the statistics of an array
 *
 * This function takes as inputs a unsigned char pointer to an n-element data array
 * and an unsigned integer as the size of the same n-element data array. First it
 * calls some statistical functions that calculates the minimum, maximum, mean and
 * median values of an array. Then it prints each result nicely formatted with an
 * indicator of the variable or index for each statistic value printed.
 *
 * @param arrayPointer A unsigned char pointer to an n-element data array
 * @param arraySize An unsigned integer as the size of the array
 *
 */

#endif /* __STATS_H__ */

