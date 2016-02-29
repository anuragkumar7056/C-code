#include<iostream>
using namespace std;
int main()
{
 string s1(10,'a');
 string s2(11,'b');
 string s3(12,'c');
 string s4=s1+s2+s3;
 cout<<s4;
 if (s4.empty())
    cout<<"Something is wrong";
 else
    cout<<"\nBharpoor string likhle bada";
 return 0;
}
