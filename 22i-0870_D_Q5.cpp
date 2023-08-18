/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 2 */

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	//Declaring Variables
	string choice, program;
	
	//Starting Program
	cout << "Starting General Diagnosis Program." << endl;
	cout << "Recoding symptoms information - DONE." << endl;
	cout << "Rebooting server to see if condition still exists - DONE." << endl;
	cout << "Is this a newly installed server? ";
	cin >> choice;
	if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
	{
		cout << "Please reseat any components that may have come loose during shipping - DONE." << endl;
		cout << "Rebooting the server - DONE." << endl;
		cout << "Does the condition still exist? ";
		cin >> choice;
		if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
		{
			choice = "N";
		}
		else if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
		{
			choice = "End";
		}
		else
		{
			choice = "Error";
		}
	}
	if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
	{
		cout << "Were option added or was the configuration changed recently? ";
		cin >> choice;
		if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
		{
			cout << "Isolate what has changed. Verify it was installed correctly. Restore server to lasst known working state or original shipped configuration." << endl;
			cout << "Does condition still exist? ";
			cin >> choice;
			if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
			{
				choice = "N";
			}
			else if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
			{
				choice = "End";
			}
			else
			{
				choice = "Error";
			}
		}
		else if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
		{
			cout << "Check for Service Notifications - DONE." << endl;
			cout << "Download the latest software and firmware from the HP website - DONE." << endl;
			cout << "Does condition still exist? ";
			cin >> choice;
			if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
			{
				choice = "N";
			}
			else if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
			{
				choice = "End";
			}
			else
			{
				choice = "Error";
			}
		}
		else
		{
			choice = "Error";
		}
		if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
		{
			cout << "Isolate and minimize the memory configuration - DONE." << endl;
			cout << "Does condition still exist? ";
			cin >> choice;
			if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
			{
				cout << "Break server down to minimal configuration - DONE." << endl;
				cout << "Does condition still exist? ";
				cin >> choice;
				if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
				{
					cout << "Troubleshoot or replace basic server spare parts - DONE." << endl;
					cout << "Does condition still exist? ";
					cin >> choice;
					if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
					{
						choice = "End2";
					}
					else if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
					{
						cout << "Record symptom and error information on repair tag if sending back a failed part - DONE." << endl;
						cout << "Congratulations, your server problems are solved." << endl;
						choice = "Finish";
					}
					else
					{
						choice = "Error";
					}
				}
				else if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
				{
					cout << "Add one part at a time back to configuration to isolate faulty component - DONE." << endl;
					cout << "Does condition still exist? ";
					cin >> choice;
					if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y")
					{
						choice = "End2";
					}
					else if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
					{
						choice = "End";
					}
					else
					{
						choice = "Error";
					}	
				}
				else
				{
					choice = "Error";
				}
			}
			else if (choice == "No" || choice == "no" || choice == "N" || choice == "n")
			{
				choice = "End";
			}
			else
			{
				choice = "Error";
			}
		}
		else if (choice != "Yes" || choice != "yes" || choice != "Y" || choice != "y") 
		{
			choice = "Error";
		}
	}
	else if (choice != "Yes" || choice != "yes" || choice != "Y" || choice != "y") 
	{
		choice = "Error";
	}
	
	//If all problems are fixed
	if (choice == "End")
	{
		cout << "Recording all actions taken for future - DONE." << endl;
		cout << "Congratulations, your server problems are solved." << endl;
	}
	
	//If HP Service Provider needs to be called
	if (choice == "End2")
	{
		cout << "Ensure the following information is available: " << endl;
		cout << ". Survey configuration snapshots" << endl;
		cout << ". OS event log file" << endl;
		cout << ". Full crash dump" << endl;
		cout << "Call HP Service Provider" << endl;
	}
	
	//If user enters anything other than the correct options at any point
	if (choice == "Error")
	{
		cout << "Invalid Input" << endl;
	}
	return 0;
}
