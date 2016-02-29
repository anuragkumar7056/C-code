#include<iostream>
#include<vector>
using std::vector;
int main()
{
void pop_back ( );
// Removes the last element in the vector, effectively reducing the vector size by one and invalidating all iterators and references to it. For example
vector<int> myvector;
int sum (0);
myvector.push_back (100);
myvector.push_back (200);
myvector.push_back (300);
while (!myvector.empty())
{
sum+=myvector.back();
myvector.pop_back();
}
std::cout << "The elements of myvector summed " << sum << std::endl;
// Output:The elements of myvector summed 600
}
