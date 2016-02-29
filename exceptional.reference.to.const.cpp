#include<iostream>
using namespace std;
int main()
{
 int i = 42;
const int &r1 = i; // we can bind a const int& to a plain int object
const int &r2 = 42; // ok: r1 is a reference to const
const int &r3 = r1 * 2; // ok: r3 is a reference to const
r3 = r1 * 2;
return 0;
}
