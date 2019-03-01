#include <iostream>
using namespace std;

int SumNonzeroIntegers()
{
	//Function that asks for any non-zero integer numbers
	int user_number;
	int total = 0;
	
	cout << "Enter a number that is not 0: ";
	cin >> user_number;

	while(user_number != 0)
	{
		total += user_number;
		cout << "Enter a number that is not 0: ";
		cin >> user_number;
	}
	
	cout << "Total of Numbers: " << total << endl;
	cout << "-----------------------" << endl;
}

int SumPositiveIntegers()
{
	//Function that asks for any positive integer numbers
	int user_number;
	int total = 0;
	
	cout << "Enter a positive number: ";
	cin >> user_number;

	while(user_number > 0)
	{
		total += user_number;
		cout << "Enter a positive number: ";
		cin >> user_number;
	}
	
	cout << "Total of Positive Numbers: " << total << endl;
}

int main()
{
	//Calling both functions in main function
	SumNonzeroIntegers();
	SumPositiveIntegers();
	system("pause");
	return 0;
}
