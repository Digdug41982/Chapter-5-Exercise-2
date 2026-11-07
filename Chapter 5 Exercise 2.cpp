// Chapter 5 Exercise 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int limit;
	int total = 0;
	cout << "Enter a positive limit: ";
	cin >> limit;
	if (limit <= 0)
	{
		cout << "The limit must be positive." << endl;
		return 1;
	}
	for (int number = 1; number <= limit; number++)
	{
		total += number;
	}
	cout << "The sum of the numbers from 1 to " << limit << " is " << total << endl;
}
