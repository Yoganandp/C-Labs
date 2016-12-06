#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout << "Displays all of the possible pythagorean triples, uptil 500:";
	cout << endl;
	cout << endl;
	for (int i = 1; i < 501; ++i) {
		for (int j = 1; j < i; ++j) {
			for (int k = 1; k < i; ++k) {
				if ((k*k) + (j*j) == (i*i))
					cout << setfill('0') << setw(3) << k << " "
					<< setfill('0') << setw(3) << j << " "
					<< setfill('0') << setw(3) << i << endl;
			}
		}
	}
	system("pause");
}