#include<iostream>
using namespace std;
int main()
{
int sum, num;
sum=0, num=0;
while(num<101)
{
    sum=sum+num;
    num++;
}
cout<<"The sum of numbers from 0 to 100 is "<<sum;
return 0;
}
