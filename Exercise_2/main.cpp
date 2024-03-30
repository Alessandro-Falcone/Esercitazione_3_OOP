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
    float a = 0.534455;
    float b = 0.356668;
    float c = 0.534455;
    float d = 0.356668;

    ComplexNumber pCoNum1(a, b);
    ComplexNumber pCoNum2(c, d);

    ComplexNumber sommaComplessa = pCoNum1 + pCoNum2;

    ComplexNumber uguaglianza = (pCoNum1 == pCoNum2);

    cout << "numero: " << pCoNum1.parteReale << "+" << pCoNum1.parteImmaginaria << "i"  << endl;

    Coniugato(pCoNum1.parteReale, pCoNum1.parteImmaginaria);

    cout << "suo coniugato: " << pCoNum1.parteReale <<  pCoNum1.parteImmaginaria << "i"  << endl;

    cout << setprecision(7) << sommaComplessa << endl;
    cout << setprecision(6) << uguaglianza << endl;

    return 0;
}
