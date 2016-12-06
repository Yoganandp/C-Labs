/*Exercises 6.356.37 developed a computer-assisted instruction program to teach an
elementary school student multiplication. This exercise suggests enhancements to that
program.

a. Modify the program to allow the user to enter a grade-level capability. A grade
level of 1 means to use only single-digit numbers in the problems, a grade level of
2 means to use numbers as large as two digits, etc.

b. Modify the program to allow the user to pick the type of arithmetic problems he or
she wishes to study. An option of 1 means addition problems only, 2 means
subtraction problems only, 3 means multiplication problems only, 4 means division
problems only and 5 means a random mix of problems of all these types*/


#include <iostream>
#include <time.h>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();

int digit;

int main(){
	srand(time(0));
	int grade, option;
	while (true){
		cout << "What grade lvl do you want? (1 or 2 or -1 (to quit)): ";
		cin >> grade;

		if (grade == 1)
			digit = 10;
		else if (grade == -1)
			break;
		else if (grade == 2)
			digit = 100;

		cout << "Choose a mode:" << endl;
		cout << "1: addition" << endl;
		cout << "2: subtraction" << endl;
		cout << "3: multiplication" << endl;
		cout << "4: division" << endl;
		cout << "5: random mix" << endl;
		cout << "-1: Quit" << endl;
		cin >> option;
		if (option == -1)
			break;

		switch (option){
		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		case 5:
			switch (1 + rand() % 4){
			case 1:
				addition();
				break;
			case 2:
				subtraction();
				break;
			case 3:
				multiplication();
				break;
			case 4:
				division();
				break;
			}
		}
	}
	system("pause");
}

void addition(){
	srand(time(0));
	int x, y, answer;
	x = rand() % digit;
	y = rand() % digit;
	while (true){
		cout << "How much is " << x << " + " << y << "? ";
		cin >> answer;
		if ((x + y) == answer){
			cout << "You are right!" << endl;
			break;
		}
		else{
			cout << "try again" << endl;
			continue;
		}
	}
}
void subtraction(){
	srand(time(0));
	int x, y, answer;
	x = rand() % digit;
	y = rand() % digit;
	while (true){
		cout << "How much is " << x << " - " << y << "? ";
		cin >> answer;
		if ((x - y) == answer){
			cout << "You are right!" << endl;
			break;
		}
		else{
			cout << "try again" << endl;
			continue;
		}
	}
}
void multiplication(){
	srand(time(0));
	int x, y, answer;
	x = rand() % digit;
	y = rand() % digit;
	while (true){
		cout << "How much is " << x << " * " << y << "? ";
		cin >> answer;
		if ((x * y) == answer){
			cout << "You are right!" << endl;
			break;
		}
		else{
			cout << "try again" << endl;
			continue;
		}
	}
}
void division(){
	srand(time(0));
	int x, y, answer;
	x = rand() % digit;
	while (true){
		y = rand() % digit;
		if (y != 0)
			break;
	}
	while (true){
		cout << "How much is " << x << " / " << y << "? ";
		cin >> answer;
		if ((x / y) == answer){
			cout << "You are right!" << endl;
			break;
		}
		else{
			cout << "try again" << endl;
			continue;
		}
	}
}