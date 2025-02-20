// This is main cpp
#include <iostream>
#include "personType.h"

using namespace std;

const int SIZE = 2;

int main ()
{
	// Created an array of 5 objects uninitialized
	personType people [SIZE];
	
	string firstName, lastName, address, dob;
  	double height_inches;
  	char gender;
	
	// Get the data for each object and store them in private members of class
	for ( int i  = 0; i < SIZE; i++ )
		{
			cout << "Enter data for person " << i + 1 << endl;
  			cout << "First Name : ";
  			getline (cin, firstName );
			people[i].setFName(firstName);
			
 			cout << "Last Name  : ";
  			getline (cin, lastName );
			people[i].setLName(lastName);
			
  			cout << "Address    : ";
 		 	getline (cin, address );
			people[i].setAddress(address);
			
  			cout << "Height     : ";
  			cin >> height_inches;
  			cin.ignore();
   			people[i].setHeight(height_inches);
			
  			cout << "DOB        : ";
  			getline (cin, dob );
			people[i].setDOB(dob);

  			cout << "Gender(M/F) : ";
 		 	cin >> gender;
 		 	cin.ignore();
    			people[i].setGender(gender);
		}

 		cout << "All persons information..\n";
		for (int i = 0 ; i < SIZE ; i++)
		{
			cout << "Person " << i + 1 << " information : \n";
			people[i].print();
		}
  
  return 0;
}
