#include<iostream>
using namespace std;
bool Capital_check(char *i);
int main()
{
 cout<<"Enter your string and press enter.";
 char *i;
 char name[];
 char *i=&name[0];
 cin>>name[i];
 if(Capital_check(&name[i]))
 cout<<"There are capitals in the text entered by you.";
}

bool Capital_check(char *i)
{
 if(*i.isupper)
 return 1;
 }
}
