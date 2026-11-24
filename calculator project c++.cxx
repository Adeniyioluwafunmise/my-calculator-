#include <iostream>
using namespace std;
int main(){int firstnumber;
              int secondnumber;
              int answer;
              int choice;
              do{cout<<"1.addition"<<endl;
                  cout<<"2.subtraction"<<endl;
                  cout<<"3.multiplication"<<endl;
                  cout<<"4.division"<<endl;
                  cout<<"5.exit"<<endl;
                  cout<<"enter your choice";
                  cin>>choice;
                  if(choice>=1 && choice<=4)
                  {cout<<"enter a number";
                  cin>>firstnumber;
                  cout<<"enter another number";
                  cin>>secondnumber;}
                  switch(choice)
                  {case 1:
                  answer=firstnumber+secondnumber;
                  cout<<"answer is "<<answer;
                  break;
                  case 2:
                  answer=firstnumber-secondnumber;
                  cout<<"answer is :"<<answer;
                  break;
                  case 3:
                  answer=firstnumber*secondnumber;
                  cout<<"the answer is "<<answer;
                  break;
                  case 4:
                  if(secondnumber!=0)
                  {answer=firstnumber/secondnumber;
                  cout<<"the answer is "<<answer<<endl;}
                  else
                  {cout<<"error";}
                  break;
                  case 5:
                  cout<<"exit";
                  break;
                  default:
                  cout<<"invalid choice";}}
                while(choice!=5);
              }

                  