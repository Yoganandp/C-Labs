#include <iostream>
using namespace std;

int main() {
	int seats[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool available = true;
	cout << "Example:" << endl;
	cout << "Please type 1 for First Class or type 2 for Second Class or -1 to quit: ";
	cout << "1" << endl;
	cout << "Would you be willing to switch for an Economy Class seat? None are availabe in the Business Class? (Type Y/N): ";
	cout << "Y" << endl;
	cout << "Economy Class: Seat 7" << endl;
	cout << endl;
	while (available == true) {
		int choice;
		char choice2;
		bool change = false;
		if (available == false)
			break;
		cout << "Please type 1 for First Class or type 2 for Second Class or -1 to quit: ";
		cin >> choice;
		if (choice == -1) {
			available = false;
			break;
		}
		else if (choice == 1) {
			for (int i = 0; i < 5; ++i) {
				if (seats[i] == 0) {
					seats[i] = 1;
					cout << "First Class: Seat " << i + 1 << endl;
					cout << endl;
					break;
				}
				else if (i == 4 && seats[i] != 0) {
					cout << "Would you be willing to switch for an Economy Class seat?"
						<< " None are availabe in the Business Class? (Type Y/N): ";
					cin >> choice2;
					if (choice2 == 'Y' || choice2 == 'y'){
						change = true;
						for (int j = 5; j < 10; ++j) {
							if (seats[j] == 0) {
								seats[j] = 1;
								cout << "Economy Class: Seat " << j + 1 << endl;
								cout << endl;
								break;
							}											
							else if (j == 9 && seats[j] != 0) {
									cout << "Sorry! The next flight is in 3 hours!" << endl;
									cout << endl;
									available = false;
									break;
								}
							}
						}
					}					
				}
			}
		
		
		else if (choice == 2 ) {
			for (int i = 5; i < 10; ++i) {
				if (seats[i] == 0) {
					seats[i] = 1;
					cout << "Economy Class: Seat " << i + 1 << endl;
					cout << endl;
					break;
				}
				else if (i == 9 && seats[i] != 0) {
					cout << "Would you be willing to switch for an Business Class seat?"
						<< " None are availabe in the Economy Class? (Type Y/N): ";
					cin >> choice2;
					if (choice2 == 'Y' || choice2 == 'y') {
						for (int i = 0; i < 5; ++i) {
							if (seats[i] == 0) {
								seats[i] = 1;
								cout << "Business Class: Seat " << i + 1 << endl;
								cout << endl;
								break;
							}
							else if (i == 4 && seats[i] != 0) {
								cout << "Sorry! The next flight is in 3 hours!" << endl;
								cout << endl;
								available = false;
								break;
							}
						}
					}
					else {
						cout << "Sorry! The next flight is in 3 hours!" << endl;
						cout << endl;
						available = false;
						break;
					}
				}
			}
		}
	}
	system("pause");
}