/* (Recursive Greatest Common Divisor) The greatest common divisor of integers x and y is
the largest integer that evenly divides both x and y. Write a recursive function gcd that
returns the greatest common divisor of x and y, defined recursively as follows: If y is
equal to 0, then gcd( x, y ) is x; otherwise, gcd( x, y ) is gcd( y, x % y ), where % is
the modulus operator. [Note: For this algorithm, x must be larger than y.] */


#include <iostream>
using namespace std;

int gcd(int X, int Y);

int main() {
	int x, y;
	cout << "Please enter two number seperated by spaces: "
	cin >> x >> y;
	cout << gcd(x, y) << endl;
	system("pause");
}

int gcd(int X, int Y) {
	if (Y == 0) {
		return X;
	}
	return gcd(Y, X % Y);
}
