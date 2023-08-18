/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 2 */
   
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	int day, month;
	
	//Taking input from user
	cout << "Enter the month, between 1 for January and 12 for December: ";
	cin >> month;
	cout << "Enter the day: ";
	cin >> day;
	
	//Checking for Winter
	if ((month == 12 && day >= 16 && day <= 31) || (month == 1 && day >=1 && day <= 31)|| (month == 2 && day >= 1 && day <= 28) || (month == 3 && day >= 1 && day <= 15))
	{
		cout << "The season during this time is: Winter" << endl;
	}
	
	//Checking for Spring
	else if ((month == 3 && day >= 16 && day <= 31) || (month == 4 && day >=1 && day <= 30)|| (month == 5 && day >= 1 && day <= 31) || (month == 6 && day >= 1 && day <= 15))
	{
		cout << "The season during this time is: Spring" << endl;
	}
	
	//Checking for Summer
	else if ((month == 6 && day >= 16 && day <= 30) || (month == 7 && day >=1 && day <= 31)|| (month == 8 && day >= 1 && day <= 31) || (month == 9 && day >= 1 && day <= 15))
	{
		cout << "The season during this time is: Summer" << endl;
	}
	
	//Checking for Spring
	else if ((month == 9 && day >= 16 && day <= 30) || (month == 10 && day >=1 && day <= 31)|| (month == 11 && day >= 1 && day <= 30) || (month == 12 && day >= 1 && day <= 15))
	{
		cout << "The season during this time is: Fall" << endl;
	}
	
	//If the wrong date is entered
	else
	{
		cout << "Invalid Date" << endl;
	}
	return 0;
}
