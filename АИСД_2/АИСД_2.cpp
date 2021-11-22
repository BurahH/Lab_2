#include <iostream>
#include <ctime>

using namespace std;

#include "function.h"

int main()
{
	/*int i, j,k;                                         //Time measurement start 
	unsigned int start_time, end_time, search_time;
	int* array = new int[100000];
	for (k = 10; k <= 100000; k = k * 10)
	{
		cout << "insertionsort " << k << endl;
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < k; j++)
				array[j] = rand();
			start_time = clock();
			InsertionSort(array, k - 1);
			end_time = clock();
			search_time = end_time - start_time;
			cout << search_time << endl;
		}
		cout << "quicksort " << k << endl;
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < k; j++)
				array[j] = rand();
			start_time = clock();
			quicksort(array, k - 1, 0);
			end_time = clock();
			search_time = end_time - start_time;
			cout << search_time << endl;                   // End of timing 
		}
		
	}*/
	int count;
	int* array = new int[10];
	char* array_char = new char[10];
	cout << "Quick Sort:\n";
	for(count = 0; count <10;count++)
		array[count] = rand();
	cout << "Origin array\n";
	for (count = 0; count < 10; count++)
		cout << array[count] << " ";
	quicksort(array, 9, 0);
	cout << "\nSorted array\n";
	for (count = 0; count < 10; count++)
		cout << array[count] << " ";
	cout << "\nInsertion Sort:\n";
	for (count = 0; count < 10; count++)
		array[count] = rand();
	cout << "Origin array\n";
	for (count = 0; count < 10; count++)
		cout << array[count] << " ";
	InsertionSort(array, 9);
	cout << "\nSorted array\n";
	for (count = 0; count < 10; count++)
		cout << array[count] << " ";
	cout << "\nBogoSort:\n";
	for (count = 0; count < 10; count++)
		array[count] = rand();
	cout << "Origin array\n";
	for (count = 0; count < 10; count++)
		cout << array[count] << " ";
	bogosort(array, 9);
	cout << "\nSorted array\n";
	for (count = 0; count < 10; count++)
		cout << array[count] << " ";
	cout << "\nCounting Sort:\n";
	array_char[0] = '9';
	array_char[1] = '5';
	array_char[2] = '3';
	array_char[3] = 'g';
	array_char[4] = 'f';
	array_char[5] = 'y';
	array_char[6] = 'q';
	array_char[7] = 'v';
	array_char[8] = 'k';
	array_char[9] = 'f';
	cout << "Origin array\n";
	for (count = 0; count < 10; count++)
		cout << array_char[count] << " ";
	CountingSort(array_char, 9);
	cout << "\nSorted array\n";
	for (count = 0; count < 10; count++)
		cout << array_char[count] << " ";

}