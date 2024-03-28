#include <iostream>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

void Coniugato(float& parteRea, float& parteImm){
    parteRea = parteRea;
    parteImm = -parteImm;
}

int main()
{
    // float sumReale = 0;
    // float sumImmaginaria = 0;
    float a = 1./4.;
    float b = sqrt(2);
    float c = 2.34;
    float d = 3.45555;

    ComplexNumber pCoNum1(a, b);
    ComplexNumber pCoNum2(c, d);

    ComplexNumber sumComplessa = pCoNum1 + pCoNum2;

    // sumReale = pCoNum1.parteReale + pCoNum2.parteReale;
    // sumImmaginaria = pCoNum1.parteImmaginaria + pCoNum2.parteImmaginaria;

    cout << "numero: " << pCoNum1.parteReale << "+" << pCoNum1.parteImmaginaria << "i"  << endl;
    Coniugato(pCoNum1.parteReale, pCoNum1.parteImmaginaria);

    cout << "suo coniugato: " << pCoNum1.parteReale <<  pCoNum1.parteImmaginaria << "i"  << endl;

    cout << setprecision(9) << sumComplessa << endl;
    // cout << setprecision(9) << sumImmaginaria << endl;

    return 0;
}
