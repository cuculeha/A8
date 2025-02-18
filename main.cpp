// This is main cpp
#include <iostream>
#include "personType.h"

using namespace std;

const int SIZE = 5;

int main ()
{
	// Created an array of 5 objects uninitialized
	personType people [SIZE];
	
	// Get the data for each object and store them in private members of class

	for (int i  = 0; i < SIZE; i++ )
		{
			string firstName, lastName, address, dob;
  			double height_inches;
  			char gender;
			cout << "Enter data for person " << i + 1 << endl;
  			cout << "First Name : ";
  			getline (cin, firstName );

 			cout << "Last Name  : ";
  			getline (cin, lastName );

  			cout << "Address    : ";
 		 	getline (cin, address );

  			cout << "Height     : ";
  			cin >> height_inches;
  			cin.ignore();
   
  			cout << "DOB        : ";
  			getline (cin, dob );

  			cout << "Gender(M/F) : ";
 		 	cin >> gender;
 		 	cin.ignore();

        // Insert the data into private members of class
    		people[i].setFName(firstName);
    		people[i].setLName(lastName);
    		people[i].setAddress(address);
    		people[i].setHeight(height_inches);
    		people[i].setDOB(dob);
    		people[i].setGender(gender);
		}

	// Clear the information and print the names
   // Print the information
 		cout << "All persons information..\n";
		for (int i = 0 ; i < SIZE ; i++)
		{
			cout << "Person " << i + 1 << " information : \n";
			people[i].print();
		}
  
  return 0;
}
