/*Write function distance that calculates the distance between two points (x1, y1) and
(x2, y2). All numbers and return values should be of type double. */


#include <iostream>
#include <math.h>
using namespace std;

double distance(double X1, double Y1, double X2, double Y2);

int main(){
	double x1, y1, x2, y2;
	cout << "Sample: " << endl;
	cout << "Please enter the co-ordinates of you're two points [Seperate value with a space]: 0 0 10 5" << endl;
	cout << "The distance is: " << 11.1803 << endl;
	cout << endl;
	cout << "Please enter the co-ordinates of you're two points [Seperate value with a space]: ";
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "The distacne is: " << distance(x1, y1, x2, y2) << endl;
	system("pause");
	return 0;

	
}

double distance(double X1, double Y1, double X2, double Y2){
	double dis;
	dis = sqrt(pow((X2 - X1), 2.0) + pow((Y2 - Y1), 2.0));
	return dis;
}