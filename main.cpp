// This is main cpp
#include <iostream>
#include "personType.h"

using namespace std;

void getDatafromUser ();

int main ()
{
  string firstName, lastName, address, dob;
  double height_inches;
  char gender;

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

  personType person;         // Created an object of one person
    person.setFName(firstName);
    person.setLName(lastName);
    person.setAddress(address);
    person.setHeight(height_inches);
    person.setDOB(dob);
    person.setGender(gender);

  // Print the information
  person.print();
  
  return 0;
}
