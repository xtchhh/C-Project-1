#include <iostream>
#include <string>
#include <vector>
using namespace std;

string salaryString;
char newSalaryString[20] = "";
float const taxRate = 7.6f;
vector <string> numbers = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

float SalaryCalculator()
{
	cout << "Please enter your salary: ";
	cin >> salaryString;
	
	auto firstChar = salaryString.begin();
	auto lastChar = salaryString.end();

	int salaryStringSize = salaryString.length();

	char list[salaryStringSize + 1];

	for (int i = 0; i < salaryString.size(); ++i)
	{
		if (salaryString[i] == numbers.size())
		{
			strncat(newSalaryString, salaryString[i], );
		}
	}

	int salary = stol(salaryString);

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
   SalaryCalculator();
}





