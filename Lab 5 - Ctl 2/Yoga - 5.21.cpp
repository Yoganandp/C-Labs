#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	char job;
	float salary, amount;
	int products, hrs, weeks, sold;
	cout << "m = Manager\nh = Hourly Worker\nc = Commission\np = Pieceworker\nq = Quit" << endl;
	cout << endl;
	cout << "Sample:" << endl;
	cout << "Please enter you're job designation number [m,h,c,p] or enter q if you want to exit: ";
	cout << "m" << endl;
	cout << "Please enter your salary for each week: ";
	cout << "250" << endl;
	cout << "Please enter the number of weeks worked: ";
	cout << "10" << endl;
	cout << "Your pay is $2500" << endl;
	cout << endl;
	while (true) {
		cout << "Please enter you're job designation letter [m,h,c,p ] or enter q if you want to exit: ";
		cin >> job;
		if (job == 'q' || job == 'Q'){
			break;
		}
		switch (job) {
		case 'm':
		case 'M':
			cout << "Please enter your salary for each week: ";
			cin >> amount;
			cout << "Please enter the number of weeks worked: ";
			cin >> weeks;
			cout << "Your pay is $" << weeks * amount << endl;
			cout << endl;
			break;

		case 'h':
		case 'H':
			cout << "Please enter your salary per hour: ";
			cin >> amount;
			cout << "Please enter the number of hours worked: ";
			cin >> hrs;
			if (hrs < 41)
				salary = hrs * amount;
			else
				salary = (40 * amount) + ((hrs - 40) * amount*(1.5));
			cout << "Your pay is $" << salary << endl;
			cout << endl;
			break;
		case 'c':
		case 'C':
			cout << "Please enter the amount (exlude the $ sign) sold: ";
			cin >> sold;
			cout << "Your pay is $" << 250 + (sold*0.057) << endl;
			cout << endl;
			break;
		case 'p':
		case 'P':
			cout << "Please enter the cost of the product you make: ";
			cin >> amount;
			cout << "Please enter the number of products made: ";
			cin >> products;
			cout << "Your pay is $" << amount * products << endl;
			cout << endl;
			break;
		default:
			cout << "Please enter a valid letter [m, h, c, p]" << endl;
			cout << endl;
			break;
		}
	}
	system("pause");
}