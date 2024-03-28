#include <iostream>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

int main()
{
    float sumReale = 0;
    float sumImmaginaria = 0;
    ComplexNumber pCoNum1(1.22, 2.31);
    ComplexNumber pCoNum2(3.94, 2.09);
    sumReale = pCoNum1.parteReale + pCoNum2.parteReale;
    sumImmaginaria = pCoNum1.parteImmaginaria + pCoNum2.parteImmaginaria;

    cout << sumReale << endl;
    cout << sumImmaginaria << endl;
    cout << "This is an example" << endl;
    return 0;
}
