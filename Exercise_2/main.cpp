#include <iostream>
#include <cmath>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

void coniugato(float& parteRea, float& parteImm){

    if(parteImm != 0){

        parteRea = parteRea;
        parteImm = -parteImm;

    }else{

        parteRea = parteRea;
        parteImm = parteImm;

    }
}

int main(){

    float a = sqrt(2);
    float b = 0.12;
    float c = sqrt(2);
    float d = 0.12;

    // cout << "differenza: " << setprecision(9) << a << endl;
    // cout << "differenza: " << setprecision(12) << c << endl;

    ComplexNumberLibrary::ComplexNumber pCoNum1(a, b);
    ComplexNumberLibrary::ComplexNumber pCoNum2(c, d);

    cout << "Numero Complesso 1: " << setprecision(7) << pCoNum1 << endl;
    cout << "Numero Complesso 2: " << setprecision(7) << pCoNum2 << endl;

    ComplexNumberLibrary::ComplexNumber sommaComplessa = pCoNum1 + pCoNum2;
    ComplexNumberLibrary::ComplexNumber uguaglianza = (pCoNum1 == pCoNum2);

    // if(pCoNum1.parteImmaginaria < 0){
    //     cout << setprecision(7) << "numero: " << pCoNum1.parteReale << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;
    // }else if(pCoNum1.parteImmaginaria > 0){
    //     cout << setprecision(7) << "numero: " << pCoNum1.parteReale << "+" << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;
    // }else if(pCoNum1.parteImmaginaria == 0){
    //     cout << "numero: " << setprecision(7) << pCoNum1.parteReale << endl;
    // }

    coniugato(pCoNum1.parteReale, pCoNum1.parteImmaginaria);

    if(pCoNum1.parteImmaginaria < 0){
        cout << "Coniugato numero complesso 1: " << setprecision(7) << pCoNum1.parteReale << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;
    }else if(pCoNum1.parteImmaginaria > 0){
        cout << "Coniugato numero complesso 1: " << setprecision(7) << pCoNum1.parteReale << "+" << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;
    }else if(pCoNum1.parteImmaginaria == 0){
        cout << "Coniugato numero complesso 1: " << setprecision(7) << pCoNum1.parteReale << endl;
    }

    cout << setprecision(7) << sommaComplessa << endl;
    cout << setprecision(7) << uguaglianza << endl;

    return 0;
}
