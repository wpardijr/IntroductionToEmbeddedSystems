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
 * @file stats.c 
 * @brief This implementation file is related to a simple application that
 * performs statistical analytics on a dataset.
 *
 * This implementation file includes a couple of functions that can analyze
 * an array of unsigned char data items and report analytics on the maximum,
 * minimum, mean, and median of the data set. In addition, the data set is
 * reordered from large to small values. All statistics are rounded down to
 * the nearest integer. After analysis and sorting, the data set is printed to
 * the screen in a nicely formatted presentation.
 *
 * @author WILSON PARDI JUNIOR
 * @date November 30th, 2017
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the data set */
#define SIZE (40)

void main()
{
	unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                    114, 88, 45, 76, 123, 87, 25, 23,
                                    200, 122, 150, 90, 92, 87, 177, 244,
                                    201, 6, 12, 60, 8, 2, 5, 67,
                                    7, 87, 250, 230, 99, 3, 100, 90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

unsigned char find_mean(unsigned char* arrayPointer, unsigned int arraySize)
{

}

unsigned char find_median(unsigned char* arrayPointer, unsigned int arraySize)
{

}

unsigned char find_maximum(unsigned char* arrayPointer, unsigned int arraySize)
{

}

unsigned char find_minimum(unsigned char* arrayPointer, unsigned int arraySize)
{

}

unsigned char* sort_array(unsigned char* arrayPointer, unsigned int arraySize)
{

}

void print_array(unsigned char* arrayPointer, unsigned int arraySize)
{

}

void print_statistics(unsigned char* arrayPointer, unsigned int arraySize)
{

}

