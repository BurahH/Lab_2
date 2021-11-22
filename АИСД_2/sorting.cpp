#include <iostream>

#include "function.h"

using namespace std;

int benary_search(int* array, int right, int number)  //Binary search
{
	int mid;
	int left = 0;
	right = right;
	mid = (right + left) / 2;
	while (1)
	{
		if (number < array[mid])
	        right = mid - 1;
		else if (number > array[mid])
			left = mid + 1;
		else if (number == array[mid])         //If the entered value was found
			return mid;
		mid = (right + left) / 2;
		if ((mid == right) && (right == left) && (number != array[mid]))   //If the entered value was not found
			throw "The given value is not in the array.";
	}
}
 
void quicksort(int* array, int right, int left)       //Quick search
{
	int pivot; 
	int count_left = left;
	int count_right = right;
	pivot = array[left];
	while (count_left < count_right)             //Do not connect left and right counters yet
	{
		while ((array[count_right] >= pivot) && (count_left < count_right))
			count_right--;
		if (count_left != count_right)
		{
			array[count_left] = array[count_right];
			count_left++;
		}
		while ((array[count_left] <= pivot) && (count_left < count_right))
			count_left++;
		if (count_left != count_right)
		{
			array[count_right] = array[count_left];
			count_right--;
		}
	}
	array[count_left] = pivot;
	pivot = count_left;
	if (left < pivot)
		quicksort(array, pivot - 1, left);        //Repetition of the algorithm for the left of the pivot side of the array
	if (right > pivot)
		quicksort(array, right, pivot + 1);       //Repetition of the algorithm for the right of the pivot side of the array
}

void InsertionSort(int* array, int right)       // Insertion Sort
{
	int temp, count, previous;
	for (count = 1; count <= right; count++)
	{
		temp = array[count];            //Assigning the value of the next element
		previous = count - 1;
		while ((previous >= 0) && (array[previous] > temp))   //As long as the left elements of the array are greater than an odd element, or until the counter reaches the beginning of the array
		{
			array[previous + 1] = array[previous];
			array[previous] = temp;
			previous--;
		}
	}
}

void bogosort(int* array, int size)      //BogoSort
{
	bool correct = false;
	int size_count,count, temp, random;
	while (1)
	{
		size_count = size;
		correct = true;
		while (size_count > 0)            //Checking an array for sortedness
		{
			if (array[size_count - 1] > array[size_count])
				correct = false;
			size_count--;
		}
		if (correct == true)
			break;
		for (count = 0; count <= size; count++)   //Random shuffling of array elements
		{
			temp = array[count];
			random = rand() % size;
			array[count] = array[random];
			array[random] = temp;
		}
	}
}

void CountingSort(char* array, int size)          //Counting Sort
{
	int count, max, count_2, index;
	max = 0;
	index = 0;
	for (count = 0; count < size; count++)        //Finding the maximum value of an array
		if (array[count] > max)
			max = array[count];
	int* arrayleight = new int[max + 1];       //Creating an array with the dimension of the found maximum value
	for (count = 0; count <= max; count++)      //array initialization
		arrayleight[count] = 0;
	for (count = 0; count <= size; count++)
	{
		arrayleight[array[count]]++;
	}
	for (count = 0; count <= max; count++)         //Writing to the original array of sorted data
	{

		for (count_2 = 0; count_2 < arrayleight[count]; count_2++)
		{
			array[index] = count;
			index++;
		}
	}
}

