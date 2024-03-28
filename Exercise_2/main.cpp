#include <iostream>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

void trasformazioneConiugato(float& parteRea, float& parteImm){
    parteRea = parteRea;
    parteImm = -parteImm;
}

int main()
{
    float sumReale = 0;
    float sumImmaginaria = 0;

    ComplexNumber pCoNum1(1, 2);
    ComplexNumber pCoNum2(3.94, 2.09);

    sumReale = pCoNum1.parteReale + pCoNum2.parteReale;
    sumImmaginaria = pCoNum1.parteImmaginaria + pCoNum2.parteImmaginaria;

    trasformazioneConiugato(pCoNum1.parteReale, pCoNum1.parteImmaginaria);

    cout << "coniugato: " << pCoNum1.parteReale <<  pCoNum1.parteImmaginaria << "i"  << endl;

    cout << sumReale << endl;
    cout << sumImmaginaria << endl;

    return 0;
}
