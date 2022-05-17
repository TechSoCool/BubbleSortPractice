//Bubble Sort Algorithm

#include <iostream>
using namespace std;

int main()
{
	int num[7] = { 0,1,2,3,4,5,6 };
	int i, j;

	// to print on the console to get user to enter 7 numbers 
	for (i = 0; i <= 6; i++)
	{
		cout << "Please Enter a number: ";
		cin >> num[i];
	}
	// stepping through the elements in the entire array
	for (i = 0; i <= 5; i++)
	{
		for (j = i + 1; j <= 6; j++)
		{
			int temp; // local variable
			// bubble sort algorithm
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}

	}

	for (i = 0; i < 6; i++)
	{
		cout << num[i] << endl;

	}
	system("pause");
	return 0;
}