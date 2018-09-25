//Author:Marco Garcia
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string FirstName;
  string LastName;
  int index;

  //get user input
  cout<<"What is your first name?"<<endl;
  cin>>FirstName;
  cout<<"What is your last name?"<<endl;
  cin>>LastName;
  index = LastName.length()-1;

cout<<"Welcome, "<<FirstName[0]<<"."<<LastName[0]<<".,"<<" here is your fortune..."<<endl;

  //tell fortune
  cout<<"your lucky number is "<<FirstName.length()<<endl;
  if(FirstName[0] == 'A'||FirstName[0] == 'a'||FirstName[0] == 'E'||FirstName[0] == 'e'||FirstName[0] == 'I'||
     FirstName[0] == 'i'||FirstName[0] == 'O'||FirstName[0] == 'o'||FirstName[0] == 'U'||FirstName[0] == 'u')      
 {      
  cout<<"you are destined to be famous!"<<endl;
 }
  else
 {
  cout<<"you should keep a low profile."<<endl;
 }
  if(LastName[index] == 'A'|| LastName[index] == 'a'|| LastName[index] == 'E'|| LastName[index] == 'e'|| LastName[index] == 'I'||
     LastName[index] == 'i'|| LastName[index] == 'O'|| LastName[index] == 'o'|| LastName[index] == 'U'|| LastName[index] == 'u')
 {
   cout<<"you have already met your true love."<<endl;
 }
  cout<<"have a good day!"<<endl;
}
