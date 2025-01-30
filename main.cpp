#include <iostream>

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
  cout << "Enter person ["  << index + 1 << "] first name :\n";
  cin >> friends.firstName;

  cout << "Enter person ["  << index + 1 << "] last name :\n";
  cin >> friends.lastName;
  cin.ignore();
  
  cout << "Enter person ["  << index + 1 << "] gender. Only enter one character :\n";
  cin.get(friends.gender);
  cin.ignore (20, '\n');
  
  cout << "Enter person ["  << index + 1 << "] eye colour :\n";
  cin >> friends.eyeColour;

  cout << "Enter person ["  << index + 1 << "] date of birth :\n";
  cin >> friends.dob;
  
}
