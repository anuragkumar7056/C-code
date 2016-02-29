// count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
#include<iostream>
#include<vector>
#include<string>
using std::vector;
int main()
{
vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
unsigned grade;
while (std::cin >> grade) { // read the grades
if (grade <= 100) // handle only valid grades
++scores[grade/10]; // increment the counter for the current cluster
}
return 0;
}
