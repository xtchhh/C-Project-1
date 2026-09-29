#include <iostream>
using namespace std;

float salary;
float const taxRate = 7.6f;

float SalaryCalculator()
{
	cout << "Please enter your salary: ";
	cin >> salary;

	/*
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	*/

	float tax = salary * (taxRate / 100);
	float newSalary = salary + tax;
	float monthlySalary = newSalary / 12;
	float retroactivePay = (newSalary - salary) / 2;

	cout << "Your old salary was: $" << salary << endl;
	cout << "Your new annual salary is: $" << newSalary << endl;
	cout << "Your monthly pay is: $" << monthlySalary << endl;
	cout << "Your retroactive pay after 6 months is: $" << retroactivePay << endl;

	return 0; // return type depends on goal of function
}


int main()
{
   SalaryCalculator();
}





