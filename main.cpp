//Author: Nathaniel Leslie
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  vector<string> list; //array of 5 strings
  int numItems = 0;
  char input;

  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item"; 
  if(list.size()>0)
  {
    cout<<"\n (D)elete last item";
  }
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
   
  string item ="";   

    if(input=='a' || input=='A')
    {
      cout<<"What is the item?"<<endl;
      cin>>item;
    
      list.push_back(item);  
    }
  
    if(input=='d' || input=='D')
    {
      if(list.size()>0)
      {
        cout<<list[list.size()-1]<<" was deleted from the list."<<endl; 
        list.resize(list.size()-1);
      }
    }
  }while(input!='q' && input!='Q'); 
  
  
  if(list.size()<=0)
  {
    cout<<"No items to buy!"<<endl;
  }

  else
  {      
    cout<<"==ITEMS TO BUY=="<<endl;

    for(int index=0;index<list.size();index++)\
    {
      cout<<index+1<<" "<<list[index]<<endl;
    }
   } 
  
  return 0;
}
