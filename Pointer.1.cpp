#include<iostream>
using namespace std;
int main()
{
 int a=3, b=4;
 int *pa=&a;
 int *pb=&b;
 *pa=*pb;
 cout<<*pa<<" "<<pa<<" "<<*pb<<" "<<pb;
}
