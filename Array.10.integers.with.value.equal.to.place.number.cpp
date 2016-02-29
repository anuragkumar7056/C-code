#include<iostream>
#include<array>
int main()
{
int myarray[10];
for(auto sub=myarray[0]; sub<=myarray[10]; sub++)
myarray[sub]=sub;
}
