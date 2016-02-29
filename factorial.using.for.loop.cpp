#include<iostream>
using namespace std;
int main()
{
 int num;
 int fact=1;
 cout<<"Enter the number whose factorial you wish to know \n"<<endl;
 cin>>num;
 for(int i=1; i<=num; i++)
 {
  fact=fact*i;
 }
 cout<<fact;
 return 0;
}
