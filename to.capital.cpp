#include<iostream>
using namespace std;
int main()
{
 string s("This is my kingdom come.");
 for(auto &c,s)
  c=toupper(c);
 cout<<s<<endl;
}
