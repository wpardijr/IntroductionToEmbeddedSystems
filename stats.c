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
#include <stdlib.h>
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

	unsigned char *arrayPointer = (char *)malloc(SIZE);
	arrayPointer = &test[0];	

  	/* Statistics and Printing Functions Go Here */

	printf("The original array: \n\n");
	print_array(arrayPointer, SIZE);

	sort_array(arrayPointer, SIZE);

	printf("\nThe sorted array (from the largest to the smallest value): \n\n");
	print_array(arrayPointer, SIZE);

	print_statistics(arrayPointer, SIZE);	
}

/* Add other Implementation File Code Here */

unsigned char find_mean(unsigned char* arrayPointer, unsigned int arraySize)
{
	int index;
	int addedValues = 0;
	float preciseMean = 0.0;
	unsigned char mean = {0};

	for(index = 0; index < SIZE; index++)
        	addedValues = addedValues + arrayPointer[index];

	preciseMean = (float)addedValues/arraySize;

	if((preciseMean - (int)preciseMean) < 0.5)
		return mean = (int)preciseMean;
	else
		return mean = (int)(preciseMean + 1);
}

unsigned char find_median(unsigned char* arrayPointer, unsigned int arraySize)
{
	unsigned char median = arrayPointer[0];

	if(arraySize % 2 == 0)
		median = ((float)arrayPointer[arraySize/2] + (float)arrayPointer[arraySize/2 - 1])/2;
	else
		median = (float)arrayPointer[arraySize/2];

	return median;
}

unsigned char find_maximum(unsigned char* arrayPointer, unsigned int arraySize)
{
	int index;
	unsigned char maximum = arrayPointer[0];

	for(index = 0; index < SIZE; index++)
	{
		if(arrayPointer[index] > maximum)
			maximum = arrayPointer[index];
	}

	return maximum;
}

unsigned char find_minimum(unsigned char* arrayPointer, unsigned int arraySize)
{
	int index;
	unsigned char minimum = arrayPointer[0];

	for(index = 0; index < SIZE; index++)
	{
		if(arrayPointer[index] < minimum)
			minimum = arrayPointer[index];
	}

	return minimum;
}

void sort_array(unsigned char* arrayPointer, unsigned int arraySize)
{
	int i;
	int j;
	int tempValue;

	for(i = 0; i < SIZE; i++)
	{
		for(j = i + 1; j < SIZE; j++)
		{
			if(arrayPointer[i] < arrayPointer[j])
			{
				tempValue = arrayPointer[i];
				arrayPointer[i] = arrayPointer[j];
                                arrayPointer[j] = tempValue;
			}
		}
		   
	}
}

void print_array(unsigned char* arrayPointer, unsigned int arraySize)
{
	int index;
	int column = 0;
	int row = 0;

	for (row = 0; row < (SIZE/4); row++)
	{
		for(index = 0; index < SIZE; index++)
		{
			if ((index == 0) || (index == 10) || (index == 20) || (index == 30))
				printf("test[%2.1d] = %4.1d   ", index + column, (int)arrayPointer[index + column]);
		}

		printf("\n");
           
                column++;
	}
}

void print_statistics(unsigned char* arrayPointer, unsigned int arraySize)
{
	unsigned char meanValue = {0};
	unsigned char medianValue = {0};
	unsigned char maximumValue = {0};
	unsigned char minimumValue = {0};

        printf("\nStatistics of the array:\n\n");

	meanValue = find_mean(arrayPointer, SIZE);	
	printf("The mean value is: %d\n", (int)meanValue);

	medianValue = find_median(arrayPointer, SIZE);	
	printf("The median value is: %d\n", (int)medianValue);
	
	maximumValue = find_maximum(arrayPointer, SIZE);
	printf("The maximum value is: %d\n", (int)maximumValue);

	minimumValue = find_minimum(arrayPointer, SIZE);
	printf("The minimum value is: %d\n", (int)minimumValue);	
}

