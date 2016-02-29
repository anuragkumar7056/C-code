#include<iostream>
#include<vector>
#include<string>
using std::vector;
int main()
{
 std::vector<std::string>text;
 vector<std::string>::iterator it;
 // Read a file here
 for(it=text.begin(); it!=text.end() && !it->empty(); ++it)
 std::cout<<*it;
 return 0;
}
