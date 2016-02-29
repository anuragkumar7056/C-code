#include<iostream>
using namespace std;
unsigned long long factorial(int fact);
int main()
{
    long fact;
    unsigned long long result;
    cout<<"Enter a number whose factorial you want to know.\n";
    while(cin>>fact)
    {result=factorial(fact);
    cout<<"The factorial is "<<result<<"."<<endl;}
    return 0;
}

 unsigned long long factorial(int fact)
{
    unsigned int temp=1;
    while(fact!=1)
        temp*=fact--;
    return temp;
}
