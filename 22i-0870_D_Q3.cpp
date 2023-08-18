/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 2 */
   
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	double hardness, strength, grade, carbon;
	bool con1, con2, con3;
	
	//Taking input from user
	cout << "Enter the hardness of the steel: ";
	cin >> hardness;
	cout << "Enter the carbon content of the steel: ";
	cin >> carbon;
	cout << "Enter the tensile  strength of the steel: ";
	cin >> strength;
	
	//Checking which conditions are met
	if (hardness > 50)
	{
		con1 = true;
	}
	if (carbon < 0.7)
	{
		con2 = true;
	}
	if (strength > 5600)
	{
		con3 = true;
	}
	
	//Assigning grades based on how many conditions are met
	if (con1 == true && con2 == true && con3 == true)
	{
		grade = 10;
	}
	else if (con1 == true && con2 == true)
	{
		grade = 9;
	}
	else if (con2 == true && con3 == true)
	{
		grade = 8;
	}
	else if (con1 == true && con3 == true)
	{
		grade = 7;
	}
	else if (con1 == true || con2 == true || con3 == true)
	{
		grade = 6;
	}
	else
	{
		grade = 5;
	}
	
	//Outputting the grade of steel
	cout << "The grade of steel is: " << grade << endl;
	return 0;
}
