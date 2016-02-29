#include<iostream>
#include<vector>
using std::vector;
int main()
{
/* Syntax: iterator insert ( iterator position, const T& x ); void insert ( iterator position, size_type n, const T& x ); template <class InputIterator> void insert ( iterator position, InputIterator first, InputIterator last );
The vector is extended by inserting new elements before the element at position. For example */
vector<int> myvector (3,100);
vector<int>::iterator it;
it = myvector.begin();
it = myvector.insert ( it , 200 );
myvector.insert (it,2,300);
// "it" no longer valid, get a new one:
it = myvector.begin();
vector<int> anothervector (2,400);
myvector.insert (it+2,anothervector.begin(),anothervector.end());
int myarray [] = { 501,502,503 };
myvector.insert (myvector.begin(), myarray, myarray+3);
std::cout << "myvector contains:";
for (it=myvector.begin(); it<myvector.end(); it++)
std::cout << " " << *it;
std::cout << std::endl;
}
// Output: myvector contains: 501 502 503 300 300 400 400 200 100 100 100
