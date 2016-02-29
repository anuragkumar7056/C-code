#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    int i, j;
    cout<<"Enter two numbers \n";
    while (cin >>i>>j) {
            float result;
    if (j=0)
    throw runtime_error("Abey chutiya h kya zero se divide kar rha h. Dusra number daal. Daal bhosdike!");
    // else if (i<j) throw runtime_error("Bakchod, fraction mein aaega ek se chhota. Pyare munney, dusra number daal. Allaalluloo");
   try { result=(i/j);
    cout<<"The dividend of "<<i<<" and "<<j<<" is "<<result;

} catch (runtime_error err) {
cout << err.what()
<< "\nWanna try again? Go for it kid. I know u can do it. " << endl;
char c;
cin >> c;
if (!cin || c == 'n')
break; // break out of the while loop
}
}
}

