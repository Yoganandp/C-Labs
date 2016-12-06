#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int uniquenumarray[20] = { -1 };
	char isuniquenumber;
	int totaluniquenumbers = 0;

	cout << "The program will find unique numbers given the list of 20 numbers." << endl;

	// enter list of numbers in a loop and store only unique numbers in array.
	for (int i = 0; i < 20; i++)
	{
		// reset the flag 
		isuniquenumber = 'Y';

		cout << "Enter Number " << i + 1 << ": ";
		cin >> number;

		if (i == 0)
			isuniquenumber = 'Y';							// First number by default is always unique.

		for (int j = 0; j < totaluniquenumbers; j++)		// Compares entered number with all PREVIOUSLY entered numbers 
		{
			if (number == uniquenumarray[j])
			{
				isuniquenumber = 'N';
				break;
			}
		}

		if (isuniquenumber == 'Y')
		{
			uniquenumarray[totaluniquenumbers] = number;
			totaluniquenumbers += 1;
		}
	}

	cout << "\nThe following unique numbers are entered..." << endl;

	for (int i = 0; i < totaluniquenumbers; i++)
	{
		cout << "Unique Number " << i + 1 << ": ";
		cout << uniquenumarray[i] << endl;
	}
	system("pause");
}