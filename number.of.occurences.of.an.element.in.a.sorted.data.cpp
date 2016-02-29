#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
 int currvalue, cnt, value;
 cnt=1;
 while (cin>>currvalue)
  {
      if (currvalue==0)
    {cout<<"Use zero as a way to end your input";
    exit (0);}
   else
   while (cin>>value)
   {if (value==currvalue) cnt++;
    else
    {cout<<"The number of times "<<currvalue<<" is present in the raw data is equal to "<<cnt<<endl;
    currvalue=value; cnt=1;
   }
  }
  }
 return 0;
}
