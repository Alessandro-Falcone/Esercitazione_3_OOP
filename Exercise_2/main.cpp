#include <iostream>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

int main()
{
    ComplexNumber pCoNum1(1.2, 2.3);
    ComplexNumber pCoNum2(3.9, 2.0);
    float sumReale = (float) (pCoNum1.parteReale + pCoNum2.parteReale);

    cout << fixed << setprecision(2) << sumReale << endl;
    cout << "This is an example" << endl;
    return 0;
}
