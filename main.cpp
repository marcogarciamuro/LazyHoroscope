//Author:Marco Garcia
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string FirstName;
  string LastName;

  //get user input
  cout<<"Please enter your first name"<<endl;
  cin>>FirstName;
  cout<<"Please enter your last name"<<endl;
  cin>>LastName;

  cout<<"Welcome, "<<FirstName[0]<<"."<<LastName[0]<<" here is your fortune..."<<endl;

  //tell fortune
  cout<<"Your lucky number is "<<FirstName.length()<<endl;

  return 0;
}
