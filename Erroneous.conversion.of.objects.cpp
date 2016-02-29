#include<iostream>
using namespace std;
int main()
{
    const int i = 42;
auto j = i; const auto &k = i; auto *p = &i;
const auto j2 = i, &k2 = i;
cout<<j<<" "<<k<<" "<<*p<<" "<<j2<<" "<<k2;
return 0;
}
