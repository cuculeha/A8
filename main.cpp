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
void showData (const personType &friends, int index );



int main (){
  personType myFriends[numOfFriends];

  // Pass each index to get friends data
  for (int i = 0; i < numOfFriends ; i++ )
    {
      askData (myFriends[i], i);
    }
  
    for (int i = 0; i < numOfFriends ; i++ )
    {
      showData (myFriends[i], i);
    }
  
return 0;
}

void askData (personType &friends, int index)
{
  cout << "Enter Person ["  << index + 1 << "] First Name : ";
  cin >> friends.firstName;

  cout << "Enter Person ["  << index + 1 << "] Last Name : ";
  cin >> friends.lastName;
  cin.ignore();
  
  cout << "Enter Person ["  << index + 1 << "] Gender. Only enter one character : ";
  cin.get(friends.gender);
  cin.ignore (20, '\n');
  
  cout << "Enter Person ["  << index + 1 << "] Eye Colour : ";
  cin >> friends.eyeColour;

  cout << "Enter person ["  << index + 1 << "] Date of Birth (MM/DD/YYYY) : ";
  cin >> friends.dob;
}

void showData (const personType &friends, int index )
{
  cout << "Person " << index + 1 << " information below \n";
  cout << setw (15) << left << "First Name" << " : " << friends.firstName << '\n' ;
  cout << setw (15) << left << "Last Name" << " : " << friends.lastName << '\n' ;
  cout << setw (15) << left << "Gender" << " : " << friends.gender << '\n' ;
  cout << setw (15) << left << "Eye Colour" << " : " << friends.eyeColour << '\n' ;
  cout << setw (15) << left << "Date of Birth" << " : " << friends.dob << '\n' ;
}
