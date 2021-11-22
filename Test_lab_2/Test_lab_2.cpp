#include "pch.h"
#include "CppUnitTest.h"
#include "../АИСД_2/function.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testlab2
{
	TEST_CLASS(Test_sortingcpp)
	{
	public:
		
		TEST_METHOD(Test_bynary_search)
		{
			int *array = new int[10];
			int i;
			for (i = 0; i < 10; i++)
			{
				array[i] = i;
			}
			try {
				Assert::AreEqual(benary_search(array, 9, 0), 0);
				Assert::AreEqual(benary_search(array, 9, 1), 1);
				Assert::AreEqual(benary_search(array, 9, 2), 2);
				Assert::AreEqual(benary_search(array, 9, 3), 3);
				Assert::AreEqual(benary_search(array, 9, 4), 4);
				Assert::AreEqual(benary_search(array, 9, 5), 5);
				Assert::AreEqual(benary_search(array, 9, 6), 6);
				Assert::AreEqual(benary_search(array, 9, 7), 7);
				Assert::AreEqual(benary_search(array, 9, 8), 8);
				Assert::AreEqual(benary_search(array, 9, 9), 9);
				benary_search(array, 10, 12);
			}
			catch (const char* expection)
			{
				Assert::AreEqual("The given value is not in the array.", expection);
			}
		}
		TEST_METHOD(Test_quicksort)
		{
			int* array = new int[10];
			array[0] = 5;
			array[1] = 6;
			array[2] = 7;
			array[3] = 1;
			array[4] = 2;
			array[5] = 8;
			array[6] = 9;
			array[7] = 0;
			array[8] = 3;
			array[9] = 4;
			quicksort(array, 9, 0);
			Assert::AreEqual(array[0], 0);
			Assert::AreEqual(array[1], 1);
			Assert::AreEqual(array[2], 2);
			Assert::AreEqual(array[3], 3);
			Assert::AreEqual(array[4], 4);
			Assert::AreEqual(array[5], 5);
			Assert::AreEqual(array[6], 6);
			Assert::AreEqual(array[7], 7);
			Assert::AreEqual(array[8], 8);
			Assert::AreEqual(array[9], 9);
		}
		TEST_METHOD(Test_InsertionSort)
		{
			int* array = new int[10];
			array[0] = 5;
			array[1] = 6;
			array[2] = 7;
			array[3] = 1;
			array[4] = 2;
			array[5] = 8;
			array[6] = 9;
			array[7] = 0;
			array[8] = 3;
			array[9] = 4;
			InsertionSort(array, 9);
			Assert::AreEqual(array[0], 0);
			Assert::AreEqual(array[1], 1);
			Assert::AreEqual(array[2], 2);
			Assert::AreEqual(array[3], 3);
			Assert::AreEqual(array[4], 4);
			Assert::AreEqual(array[5], 5);
			Assert::AreEqual(array[6], 6);
			Assert::AreEqual(array[7], 7);
			Assert::AreEqual(array[8], 8);
			Assert::AreEqual(array[9], 9);
		}
		TEST_METHOD(Test_bogosort)
		{
			int* array = new int[10];
			array[0] = 5;
			array[1] = 6;
			array[2] = 7;
			array[3] = 1;
			array[4] = 2;
			bogosort(array, 4);
			Assert::AreEqual(array[0], 1);
			Assert::AreEqual(array[1], 2);
			Assert::AreEqual(array[2], 5);
			Assert::AreEqual(array[3], 6);
			Assert::AreEqual(array[4], 7);
		}
		TEST_METHOD(Test_CountingSort)
		{
			char* array = new char[10];
			array[0] = 'a';
			array[1] = '5';
			array[2] = '3';
			array[3] = 'g';
			array[4] = 'j';
			array[5] = 'y';
			array[6] = 'q';
			array[7] = 't';
			array[8] = 'k';
			array[9] = 'k';
			CountingSort(array, 9);
			Assert::AreEqual(array[0], '3');
			Assert::AreEqual(array[1], '5');
			Assert::AreEqual(array[2], 'a');
			Assert::AreEqual(array[3], 'g');
			Assert::AreEqual(array[4], 'j');
			Assert::AreEqual(array[5], 'k');
			Assert::AreEqual(array[6], 'k');
			Assert::AreEqual(array[7], 'q');
			Assert::AreEqual(array[8], 't');
			Assert::AreEqual(array[9], 'y');
		}
	};
}
