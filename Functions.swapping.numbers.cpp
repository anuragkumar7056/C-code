#include<iostream>
using namespace std;
void rep(int *pa, int *pb);
int main()
{
 cout<<"Enter 2 numbers.\n";
 int a,b;
 cin>>a>>b;
 int *pa=&a, *pb=&b;
 rep(pa,pb);
 cout<<"The new a is "<<*pa<<" and the new b is "<<*pb;
 return 0;
}
void rep(int *pa,int *pb)
{
 *pa=*pb;
 *pb=*pa;
}
