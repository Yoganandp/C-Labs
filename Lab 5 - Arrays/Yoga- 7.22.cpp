#include <iostream>
#include <iomanip>

using namespace std;

/* This program calculated the total sales per salesperson per product for one month (620 days maximum)
The user is prompted to enter the values as suggested and in case of mistakes, defensive program is present
to avoid memory allocation issues. In the output, the letter "T" represents TOTAL. */


int main()
{
	int salespersonid;
	int productid;
	float value;

	float sales[6][5] = { 0.0 };					// sales slip for product [1-5] and sales person [1-4]

	cout << "Hello! Enter the salesperson number (1 - 4), product number (1 - 5), and the total"
		<< " sales of that product for the day. \nPress enter after entering each value. Enter -1"
		<< " when you are done. Maximum of 620 slips.\n";

	for (int i = 0; i < 620; i++)
	{
		cout << "Enter Salesperson ID [1 - 4][-1 to quit and display the table]: ";
		cin >> salespersonid;

		if (salespersonid == -1)									//Checks if user wants to quit
			break;

		if (salespersonid < 1 || salespersonid > 4)					//Defensive programming to avoid 
		{															//Assigning to values outside array
			cout << "Invalid Salesperson ID. ID must be between 1-4." << endl;
			continue;
		}

		cout << "\nEnter Product ID [between 1-5]: ";
		cin >> productid;
		if (productid < 1 || productid > 5)							//Defensive programming
		{
			cout << "Invalid Productid ID. ID must be between 1-5." << endl;
			continue;
		}

		cout << "\nTotal Sales of Product: ";
		cin >> value;												//Increases array location by value

		sales[productid - 1][salespersonid - 1] = sales[productid - 1][salespersonid - 1] + value;
	}


	for (int j = 0; j < 4; j++)										// Totals by sales persons
	{
		for (int i = 0; i < 5; i++)
		{
			sales[5][j] = sales[5][j] + sales[i][j];
		}
	}

	for (int i = 0; i < 5; i++)										// Totals by product id
	{
		for (int j = 0; j < 4; j++)
		{
			sales[i][4] = sales[i][4] + sales[i][j];
		}
	}

	cout << "\n\n" << setw(40) << "Salesperson" << endl;			//Outputs table

	cout << "Product" <<
		setw(5) << "1"
		<< setw(11) << "2"
		<< setw(11) << "3"
		<< setw(11) << "4"
		<< setw(11) << "T"
		<< endl << endl;

	for (int i = 0; i < 6; i++)									//Outputs Totals and Values
	{
		if (i < 5)
			cout << i + 1;
		else
		{
			cout << "---------------------------------------------------------" << endl;
			cout << "T";
		}
		

		for (int j = 0; j < 5; j++)
		{
			if (i == 5 && j == 4){
				break;
			}
			cout << setw(11) << sales[i][j];			
		}		

		cout << endl;
	}
	system("pause");
}