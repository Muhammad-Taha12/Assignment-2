/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 2 */
   
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	int num1, num2, num3, num4 = 0, max, choice;
	
	//Asking user how many numbers they want to enter
	cout << "Do you want to enter three numbers or four? Press 3 for three and anything else for four: ";
	cin >> choice;
	cout << "Now enter your numbers: ";
	
	//Taking input depending on the user's choice
	(choice == 3)?(cin >> num1 >> num2 >> num3):(cin >> num1 >> num2 >> num3 >> num4);
	(num1 >= num2 && num1 >= num3 && num1 >= num4)?(max = num1):    //Checking if num1 is largest
	(num2 >= num1 && num2 >= num3 && num2 >= num4)?(max = num2):    //Checking if num2 is largest
	(num3 >= num1 && num3 >= num2 && num3 >= num4)?(max = num3):    //Checking if num3 is largest
	(max = num4);    						//If none of the others are larger, then it defaults to num4
	
	cout << "The maximum of the numbers you entered is: " << max << endl;
	return 0;
}
