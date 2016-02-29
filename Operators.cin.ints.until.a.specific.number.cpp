#include<iostream>
#include<vector>
using std::vector;
int main()
{
 std::cout<<"Enter the integers \n";
 vector<int> Series;
 int i;
 while(std::cin>>i && i!=42)
    {Series.push_back(i);
    std::cout<<i<<" "<<std::endl;}
 return 0;
}
