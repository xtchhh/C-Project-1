#include <iostream>
#include <string>
#include <vector>

using namespace std;

string salaryString;
float const taxRate = 7.6f;

int StringToInt()
{
	cout << "Please enter your salary: ";
	cin >> salaryString;

	for (int i = 0; i < salaryString.size(); ++i)
	{
		if (salaryString[i] == ',')
		{
			salaryString.erase(salaryString.begin() + i);
		}
	}

	int convertedSalary = stol(salaryString);

	return convertedSalary;
}

float SalaryCalculator(int salary)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	float tax = salary * (taxRate / 100);
	float newSalary = salary + tax;
	float monthlySalary = newSalary / 12;
	float retroactivePay = (newSalary - salary) / 2;

	cout << "Your old salary was: $" << salary << endl;
	cout << "Your new annual salary is: $" << newSalary << endl;
	cout << "Your new monthly pay is: $" << monthlySalary << endl;
	cout << "Your new retroactive pay after 6 months is: $" << retroactivePay << endl;

	return 0; // return type depends on goal of function
}


int main()
{
	SalaryCalculator(StringToInt());

	return 0;
}





