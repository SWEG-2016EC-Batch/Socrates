#include <iostream>
using namespace std;
  
int main()
{
// declaring all the variables needed.
int exponent;
float base, result=1;
// promt the user the numbers to process the calculation. 
    cout<<"Enter the base and the exponent number respectively:"<<endl;
    cin>> base,exponent;
    cout << base << "^" << exponent << " = ";

// exclude the zero value from the exponent domain.
    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    // the result adds up all the previous values of the result.
cout<< result;


return 0;


}