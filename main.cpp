#include <iostream>
#include <iomanip>

using namespace std;
struct personType {
  string firstName;
  string lastName;
  char gender;
  string eyeColour;
  string dob;
};

const int numOfFriends = 5 ;
void askData (personType &friends, int index);


int main (){
  personType myFriends[numOfFriends];

  // Pass each index to get friends data
  for (int i = 0; i < numOfFriends ; i++ )
    {
      askData (myFriends[i], i);
    }
  
return 0;
}

void askData (personType &friends, int index)
{
  cout <<  setw (50) << left <<  "Enter Person ["  << index + 1 << "] First Name" << setw (3) << right<<  " : ";
  cin >> friends.firstName;

  cout << "Enter Person ["  << index + 1 << "] Last Name : ";
  cin >> friends.lastName;
  cin.ignore();
  
  cout << setw (50) << left << "Enter Person ["  << index + 1 << "] gender. Only enter one character" << setw (3) << right<<  " : ";
  cin.get(friends.gender);
  cin.ignore (20, '\n');
  
  cout << "Enter Person ["  << index + 1 << "] Eye Colour : ";
  cin >> friends.eyeColour;

  cout << "Enter person ["  << index + 1 << "] date of birth : ";
  cin >> friends.dob;
  
}
