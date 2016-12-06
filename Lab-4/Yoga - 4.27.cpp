#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	while (true){
		cout << "Enter the binary number or 2 to exit: ";
		int binary;			//Binary number
		int x = 0;			//Digit
		int sum = 0;		//Sum of Powers
		int i = 0;			//Exponent of 2
		int y = 0;			//Single Digit Value by Powers

		cin >> binary;
		if (binary == 2)
			break;
		int copy = binary;
		while (binary != 0)
		{
			x = binary % 10;			//separates digits
			binary = binary / 10;		//Divides binary to get rid of found digit

			y = x * pow(2, i);			//Find Single Digit Value 
			sum = sum + y;				//Adds Values together
			i++;						//Increments exponent
		}
		cout << "The decimal value of " << copy << " is " << sum << "." << endl;
		cout << endl;
	}
	system("pause");
}