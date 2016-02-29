#include<iostream>
using namespace std;
void swapper(int &a, int &b);
int main()
{
 cout<<"Enter any two numbers.\n";
 int a, b;
 cin>>a>>b;
 swapper(a,b);
 cout<<"The first number is "<<a<<" and the second number is "<<b<<".\n";
 return 0;
}
void swapper(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
