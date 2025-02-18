#include <iostream>
#include "personType.h"

using namespace std;


// Setters definition
void personType :: setFName (string fN)
{
		fName = fN;
}

void personType :: setLName (string lN)
{
		lName = lN;
}

void personType :: setAddress (string addr )
{
		address = addr;
}

void personType :: setHeight (string ht)
{
		height = ht;
}

void personType :: setDOB (string bdate)
{
		DOB = bdate;
}

void personType :: setGender (string gen)
{
		gender = gen;
}


// Getters definition
void personType :: getFName ( string &fN ) const
{
	fN = fName;
}

void personType :: getFLName ( string &lN ) const
{
	lN = lName;
}

void personType :: getAddress ( string &addr ) const
{
	addr = address;
}

void personType :: getHeight ( string &ht ) const
{
	ht = height;
}

void personType :: getDOB ( string &bdate ) const
{
	bdate = DOB;
}

void personType :: getGender ( string &gen ) const
{
	gen = gender;
}

// print function
void personType :: print () const
{
	cout << "All persons information...\n";
	cout << "First Name : " << fName << endl;
	cout << "Last Name  : " << lName << endl;
	cout << "Address    : " << address << endl;
	cout << "Height     : " << height << endl;
	cout << "DOB        : " << DOB << endl;
	cout << "Gender     : " << gender << endl;
}

// equals strings
bool personType :: equalData (const personType &person2) const
{
	if (fName == person2.fName && lName == person2.lName && address == person2.address
		height == person2.height && DOB == person2.DOB && gender == person2.gender)
		{
			return true;
		}

	else
		{
			return false;
		}
}
