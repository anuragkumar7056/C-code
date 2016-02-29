#include<iostream>
using namespace std;
void reset(int &a);
int main()
{
 cout<<"Enter a variable\n";
 int a;
 cin>>a;
 if(a==0 || a%2!=0)
 {reset(a);
 cout<<"Number invalid. Use "<<a<<" or else enter an even number more than 2.\n";}
 else
    cout<<"OK. ";
 return 0;
}
void reset(int &a)
{
a=2;
}
