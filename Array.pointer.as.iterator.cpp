#include<iostream>
#include<array>
int main()
{
int *e = &arr[10]; // pointer just past the last element in arr

// Here we used the subscript operator to index a nonexisting element; arr has ten elements, so the last element in arr is at index position 9. The only thing we can do with this element is take its address, which we do to initialize e. Like an off-the-end iterator (§ 3.4.1, p. 106), an off-the-end pointer does not point to an element. As a result, we may not dereference or increment an off-the-end pointer. Using these pointers we can write a loop to print the elements in arr as follows:

for (int *b = arr; b != e; ++b)
cout << *b << endl; // print the elements in arr
}
