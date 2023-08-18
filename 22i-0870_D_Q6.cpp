/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 2 */
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	//Declaring Variables
	int choice, enclosure, price, price1, price2, price3, price4, seats, seats1, seats2, seats3, seats4, seats5, seats6, seats7, seats8, adult, children;
	char option, program, family;
	double CNIC, total;
	srand(time(0));  //Used to make sure values are randomized each time program is executed
	//Displaying match schedules
	cout << "1.  27 Feb 2020 -- Islamabad United v Quetta Gladiators, Pindi Cricket Stadium" << endl << "(7pm-10.15pm)" << endl;
	cout << "2.  28 Feb 2020 -- Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium" << endl << "(8pm-11.15pm)" << endl;
	cout << "3.  29 Feb 2020 -- Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium" << endl << "(7pm-10.15pm)" << endl;
	cout << "4.  1 Mar 2020 -- Islamabad United v Karachi Kings, Pindi Cricket Stadium" << endl << "(7pm-10.15pm)" << endl;
	cout << "5.  2 Mar 2020 -- Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium" << endl << "(7pm-10.15pm)" << endl;
	cout << "6.  5 Mar 2020 -- Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium" << endl << "(7pm-10.15pm)" << endl;
	cout << "7.  7 Mar 2020 -- Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium" << endl << "(2pm-5.15pm)" << endl;
	cout << "8.  8 Mar 2020 -- Multan Sultans v Islamabad United, Pindi Cricket Stadium" << endl << "(2pm-5.15pm)" << endl;
	
	//Taking input from user
	cout << "Enter your choice (1 - 8)" << endl;
	cin >> choice;
	
	//Calculating Prices
	switch (choice)
	{
		case 1:
		case 2:
		case 3:
		{
			price1 = 3000;
			price2 = 1500;
			price3 = 1000;
			price4 = 500;
			break;
		}
		case 4:
		case 7:
		{
			price1 = 2000;
			price2 = 1000;
			price3 = 500;
			price4 = 250;
			break;
		}
		case 5:
		case 6:
		case 8:
		{
			price1 = 1500;
			price2 = 1000;
			price3 = 500;
			price4 = 250;
			break;
		}
		default:
		{
			program = 'X';
		}
	}
	
	//Displaying Enclosure list
	if (program != 'X')
	{
		seats1 = (1 + rand() % 1001); //To randomly generate a number between 1 and 1000
		cout << "1.  Imran Khan Enclosure -- VIP -- Rs. " << price1 << " -- Available seats = " << seats1 << endl;
			
		seats2 = (1 + rand() % 1001); //To randomly generate a number between 1 and 1000
		cout << "2.  Javed Miandad Enclosure -- VIP -- Rs. " << price1 << " -- Available seats = " << seats2 << endl;
			
		seats3 = (1 + rand() % 1001); //To randomly generate a number between 1 and 1000
		cout << "3.  Javed Akhter Enclosure -- VIP -- Rs. " << price1 << " -- Available seats = " << seats3 << endl;
		
		seats4 = (1 + rand() % 1001); //To randomly generate a number between 1 and 1000
		cout << "4.  Azhar Mehmood Enclosure -- VIP -- Rs. " << price1 << " -- Available seats = " << seats4 << endl;
			
		seats5 = (1 + rand() % 3001); //To randomly generate a number between 1 and 3000
		cout << "5.  Sohail Tanveer Enclosure -- First-class -- Rs. " << price3 << " -- Available seats = " << seats5 << endl;
			
		seats6 = (1 + rand() % 3001); //To randomly generate a number between 1 and 3000
		cout << "6.  Shoaib Akthar Enclosure -- Premium -- Rs. " << price2 << " -- Available seats = " << seats6 << endl;
				
		seats7 = (1 + rand() % 2501); //To randomly generate a number between 1 and 2500
		cout << "7.  Imran Buksh Enclosure -- General -- Rs. " << price4 << " -- Available seats = " << seats7 << endl;
				
		seats8 = (1 + rand() % 2501); //To randomly generate a number between 1 and 2500
		cout << "8.  Yasir Arafat Enclosure -- General -- Rs. " << price4 << " -- Available seats = " << seats8 << endl;
			
		cin >> enclosure;
	}
	
	//Storing number of seats available in chose enclosure
	switch (enclosure)
	{
		case 1:
			seats = seats1;
			price = price1;
			break;
		case 2:
			seats = seats2;
			price = price1;
			break;
		case 3:
			seats = seats3;
			price = price1;
			break;
		case 4:
			seats = seats4;
			price = price1;
			break;
		case 5:
			seats = seats5;
			price = price3;
			break;
		case 6:
			seats = seats6;
			price = price2;
			break;
		case 7:
			seats = seats7;
			price = price4;
			break;
		case 8:
			seats = seats8;
			price = price4;
			break;
		default:
			program = 'X';
	}
	
	//Asking if user wants to buy tickets for family or not
	if (program != 'X')
	{
		cout << "Do you want to buy tickets for a family? Y or y for yes, N or n for no: ";
		cin >> family;
			
		switch (family)
		{
			case 'Y':
			case 'y':
			{
				cout << "Enter the number of adult tickets (Max = 4): ";
				cin >> adult;
				if (adult >= 1 && adult <= 4)
				{
					cout << "Enter the number of children tickets (Max = 5): ";
					cin >> children;
					if (children >= 2 && children <= 5)
					{
						cout << "Enter your CNIC number (without dashes): ";
						cin >> CNIC;
						if (CNIC >= 1000000000000 && CNIC <= 9999999999999)
						{
							if ((adult + children) <= seats)
							{
								total = (((price * adult) - (price * (0.1 * adult))) + ((price * children) - (price * (0.2 * children))));
							}
							else
							{
								program = 'N';
							}
						}
						else
						{
							program = 'X';
						}
					}
					else
					{
						program = 'X';
					}
				}
				else
				{
					program = 'X';
				}
			break;
			}
			case 'N':
			case 'n':
			{
				cout << "Enter the number of adult tickets (Max = 8): ";
				cin >> adult;
				if (adult >= 1 && adult <= 8)
				{
					cout << "Enter your CNIC number (without dashes): ";
					cin >> CNIC;
					if (CNIC >= 1000000000000 && CNIC <= 9999999999999)
					{
						if (adult <= seats)
						{
							if (adult > 4)
							{
								total =((price * adult) - (price * (0.1 * adult)));
							}
							else
							{
								total = (price * adult);
							}
						}
						else
						{
							program = 'N';
						}
					}
					else
					{
						program = 'X';
					}
				}
				else
				{
					program = 'X';
				}
			break;
			}
			default:
			{
				program = 'X';
			}
		}
	}
	
	//Outputting Final Price
	if (program == 'X')
	{
		cout << "Invalid input" << endl;
	}
	else if (program == 'N')
	{
		cout << "Not enough seats" << endl;
	}
	else
	{
		cout << "Your final price is: Rs. " << total << endl;
	}
	return 0;
}
