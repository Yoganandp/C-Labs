#include <iostream>
using namespace std;

int Encrypt(int);
int Decrypt(int);

/*This program encrypts or decrypts a four digit integer using the rules given in problem 4.34.
The user is prompted to enter the integer and decide whether he/she wants to encrypt or decrypt.
Based on their decision, the appropriate function is called. */

int main()
{
	int number;
	char x;
	while (true) {
		cout << "Hello! This program encrypts and decrypts a four-digit integer. Enter a four-digit integer or -1 to quit: ";
		cin >> number;
		if (number == -1)
			break;
		cout << "\nWould you like to encrypt or decrypt this number? Enter e for encrypt and d for decrypt or q to quit: ";
		cin >> x;
		if (x == 'q' || x == 'Q')
			break;			
		else if (x == 'd' || x == 'D')
			cout << Decrypt(number) << endl;
		else if (x == 'e' || x == 'E')
			cout << Encrypt(number) << endl;
	}
	system("pause");

}

int Encrypt(int number)								//Encrypts number
{
	int a = 0, b = 0, c = 0, d = 0, newint;
	for (int i = 0; i < 4; i++)						//Separates digits
	{
		if (i == 0)
			d = number % 10;
		else if (i == 1)
			c = number % 10;
		else if (i == 2)
			b = number % 10;
		else if (i == 3)
			a = number % 10;

		number = number / 10;
	}

	a = ((a + 7) % 10) * 10;						//Encryption method
	b = ((b + 7) % 10);
	c = ((c + 7) % 10) * 1000;
	d = ((d + 7) % 10) * 100;

	newint = a + b + c + d;							//Encrypted integer calculated based on single digit values

	return newint;
}

int Decrypt(int number)								//Decryts number
{
	int a = 0, b = 0, c = 0, d = 0, newint;
	for (int i = 0; i < 4; i++)						//Separates digits and subtracts 7 to undo the modulus from encryption method
	{
		if (i == 0)
			d = (number % 10) - 7;
		else if (i == 1)
			c = (number % 10) - 7;
		else if (i == 2)
			b = (number % 10) - 7;
		else if (i == 3)
			a = (number % 10) - 7;

		number = number / 10;
	}

	if (d < 0)										//If digit is less than 0, 10 is added to retrieve original digits
		d = d + 10;
	if (c < 0)
		c = c + 10;
	if (b < 0)
		b = b + 10;
	if (a < 0)
		a = a + 10;

	newint = (d * 100) + (c * 1000) + b + (a * 10);		//Decrypted integer calculated 

