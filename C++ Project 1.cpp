#include <iostream>
using namespace std;

float salary;
float const taxRate = 7.6f;

float initialSalary()
{
	cout << "Please enter your salary: ";
	cin >> salary;

	float tax = salary * (taxRate / 100);
	float newSalary = salary + tax;

	cout << "Your old salary was: " << salary << endl;
	cout << "Your new salary is: " << newSalary;

	return newSalary;
}


int main()
{
   initialSalary();
}





