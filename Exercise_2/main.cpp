#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

int main()
{
    ComplexNumber pCoNum1(1.2, 2.3);
    ComplexNumber pCoNum2(3.5, 2.0);
    float sumReale = pCoNum1.to_float() + pCoNum2.to_float();



    cout << sumReale << endl;
    cout << "This is an example" << endl;
    return 0;
}
