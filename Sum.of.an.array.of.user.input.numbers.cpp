#include<iostream>
using namespace std;
int main()
{
 cout<<"Find sum of any number of numbers by entering them with a space. When you are done write a 0 and press enter.\n";
 int sum=0;
 int value=0;
 while(cin>>value)
 {
  if (value==0)
    break;
  sum+=value;
 }
 cout<<"The sum of your array of numbers is "<<sum;
}
