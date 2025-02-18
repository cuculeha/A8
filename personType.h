#ifndef PERSONTYPE_H
#define PERSNTYPE_H

#include <string>
using namespace std;

class personType
{
	public:
	// Setters
	void setFName (string fN);	
	void setLName (string lN);
	void setAddress ( string addr );
	void setHeight (double ht );
	void setDOB (string bdate);
	void setGender ( char gen);

	// Getters
	void getFName (string &fN) const;
	void getLName (string &lN) const;
	void getAddress (string &addr ) const;
	void getHeight (double &ht );
	void getDOB (string &bdate);
	void getGender (char &gen);

	// Print function 
	void print () const;

	// Equal function
	bool equal ( const personType &person2 ) const;

	private:
	string fName;
	string lName;
	string address:
	double height;
	string DOB;
	char gender;
};
