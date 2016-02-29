#include<iostream>
#include<array>
int main()
{
int ia[] = {0,1,2,3,4,5,6,7,8,9}; // ia is an array of ten ints
auto ia2(ia); // ia2 is an int* that points to the first element in ia
ia2 = 42; // error: ia2 is a pointer, and we can't assign an int to a pointer

// Although ia is an array of ten ints, when we use ia as an initializer, the compiler treats that initialization as if we had written

auto ia2(&ia[0]); // now it's clear that ia2 has type int*
}
// It is worth noting that this conversion does not happen when we use decltype
