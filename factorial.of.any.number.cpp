#include<iostream>
using namespace std;
int main()
{
int num, iteration;
double factorial;
cout<<"Enter the number whose factorial you wish to find.\n";
cin>>num;
iteration=1;
factorial=num;
while(iteration<num&&iteration>0)
{
    factorial=factorial*(num-iteration);
    iteration=iteration++;
}
cout<<"The factorial of your number "<<num<<" is "<<factorial;
return 0;
}
