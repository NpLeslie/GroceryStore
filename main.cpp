//Author: Nathaniel Leslie
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;

  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
   
  string item ="";   

    if(input=='a' || input=='A')
    {
      cout<<"What is the item?"<<endl;
      cin>>item; 

      if(numItems>4)
      {
        cout<<"You'll need a bigger list!"<<endl;
      }
      else
      {
        list[numItems]=item;
        numItems++; 
      }
    }
  }while(input!='q' && input!='Q'); 
  
  cout<<"==ITEMS TO BUY=="<<endl;

  int index=0;

  do
  {
    cout<<index+1<<" "<<list[index]<<endl;
    index++; 
  }while(index<5);
 
  return 0;
}
