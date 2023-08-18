/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 2 */
   
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	//Declaring Variables
	int num1, num2, color1, color2;
	
	//Taking input from user
	cout << "Enter two numbers between 1 and 36: ";
	cin >> num1 >> num2;
	
	//Checking which color num1 is in
	switch (num1)
	{
		case 1:
		case 6:
		case 7:
		case 12:
		case 17:
		case 20:
		case 28:
		case 33:
		{
			color1 = 1;
			break;
		}
		case 2:
		case 11:
		case 13:
		case 18:
		case 19:
		case 24:
		case 29:
		case 32:
		{
			color1 = 2;
			break;
		}
		case 3:
		case 10:
		case 14:
		case 23:
		case 25:
		case 30:
		case 31:
		case 36:
		{
			color1 = 3;
			break;
		}
		case 4:
		case 9:
		case 15:
		case 22:
		case 26:
		case 35:
		{
			color1 = 4;
			break;
		}
		case 5:
		case 8:
		case 16:
		case 21:
		case 27:
		case 34:
		{
			color1 = 5;
			break;
		}
		default:
		{
			color1 = 0;
		}
	}
	
	//Checking which color num2 is in
	switch (num2)
	{
		case 1:
		case 6:
		case 7:
		case 12:
		case 17:
		case 20:
		case 28:
		case 33:
		{
			color2 = 1;
			break;
		}
		case 2:
		case 11:
		case 13:
		case 18:
		case 19:
		case 24:
		case 29:
		case 32:
		{
			color2 = 2;
			break;
		}
		case 3:
		case 10:
		case 14:
		case 23:
		case 25:
		case 30:
		case 31:
		case 36:
		{
			color2 = 3;
			break;
		}
		case 4:
		case 9:
		case 15:
		case 22:
		case 26:
		case 35:
		{
			color2 = 4;
			break;
		}
		case 5:
		case 8:
		case 16:
		case 21:
		case 27:
		case 34:
		{
			color2 = 5;
			break;
		}
		default:
		{
			color2 = 0;
		}
	}
	
	//Outputting Result
	switch (color1 == color2 && (color1 != 0 && color2 != 0))
	{
		case 1:
		{
			cout << num1 << " and " << num2 << " have the same color" << endl;
			break;
		}
		case 0:
		{
			switch (color1 != 0 && color2 != 0)
			{
				case 1:
				{
					cout << num1 << " and " << num2 << " have different colors" << endl;
					break;
				}
				case 0:
				{
					cout << "Invalid Input" << endl;
				}
			}
		}
	}
	return 0;
}
