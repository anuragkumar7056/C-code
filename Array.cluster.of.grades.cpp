// count the number of grades by clusters of ten: 0--9, 10--19, ... 90--99, 100
#include<iostream>
#include<array>
int main()
{
unsigned scores[11] = {}; // 11 buckets, all value initialized to 0
unsigned grade;
while (std::cin >> grade) {
if (grade <= 100)
++scores[grade/10]; // increment the counter for the current cluster
}
}
