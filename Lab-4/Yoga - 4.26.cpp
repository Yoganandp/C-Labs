#include <iostream>
using namespace std;

int main(){
	int entry;
	while (true){
		cout << "Please enter a 5 digit integer or -1 to quit: ";
		cin >> entry;
		if (entry == -1)
			break;

		int first_dig = entry - entry % 10000;
		first_dig /= 10000;

		int second_dig = entry % 10000 - entry % 1000;
		second_dig /= 1000;

		int third_dig = entry % 1000 - entry % 100;
		third_dig /= 100;

		int fourth_dig = entry % 100 - entry % 10;
		fourth_dig /= 10;

		int fifth_dig = entry % 10 - entry % 1;


		if (first_dig == fifth_dig && fourth_dig == second_dig)
			cout << "Yes, this number is a palindrome" << endl;
		else
			cout << "No, this number is not a palindrome" << endl;
		cout << endl;
	}
	system("pause");


	return 0;
}