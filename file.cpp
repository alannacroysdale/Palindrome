#include <iostream>
#include <cstring>

using namespace std; //to shorten cin and cout statements

/*
This program is supposed to tell the user if their input is a palindrome or not.
Alanna Croysdale 9-21-17
*/

int main()
{
  //initialize variables
  char input[80];
  char backwards[80];
  char newinput[80];
  bool palindrome = true;
  int count = 0;
  cout << "Enter something 80 characters long or shorter to see if it's a palindrome.";
  cin.get(input, 80);
  cin.get();
  for (int i = 0; i < 80; i++)
    {
      if (input[i] != ' ' && input[i] != '.' && input[i] != '!' && input[i] != '?' && input[i] != ',')
	{
	  newinput[count] = input[i];
	}
      count++;
    }
  count = 0;
  for (int i = strlen(newinput) - 1; i > -1; i--)
    {
      backwards[count] = newinput[i];
      count++;
    }
  cout << newinput << endl;
  cout << backwards << endl;
  if (strcmp(newinput, backwards) == 0)
    {
      palindrome = true;
    }
  else
    {
      palindrome = false;
    }
  if (palindrome == false)
    {
      cout << "Not a palindrome";
    }
  if (palindrome == true)
    {
      cout << "Palindrome.";
    }
  return 0;
}

