#include <iostream>
#include <cmath>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

void coniugato(float& parteRea, float& parteImm){

        parteRea = parteRea;
        parteImm = -parteImm;
}

int main(){

    float a = 3.67;
    float b = 5;
    float c = 3.67;
    float d = 5;

    ComplexNumberLibrary::ComplexNumber pCoNum1(a, b);
    ComplexNumberLibrary::ComplexNumber pCoNum2(c, d);

    cout << "Numero Complesso 1: " << setprecision(7) << pCoNum1 << endl;
    cout << "Numero Complesso 2: " << setprecision(7) << pCoNum2 << endl;

    ComplexNumberLibrary::ComplexNumber sommaComplessa = pCoNum1 + pCoNum2;
    ComplexNumberLibrary::ComplexNumber numeriUguali = (pCoNum1 == pCoNum2);

    cout << "la somma dei due numeri inseriti e': " << setprecision(7) << sommaComplessa << endl;

    if(numeriUguali.parteReale == pCoNum1.parteReale && numeriUguali.parteImmaginaria == pCoNum1.parteImmaginaria
        && numeriUguali.parteReale == pCoNum2.parteReale && numeriUguali.parteImmaginaria == pCoNum2.parteImmaginaria){

        cout << "i numeri inseriti sono uguali" << endl;
        cout << "pCoNum1 e' uguale a pCoNum2: " << numeriUguali << endl;

    }else{

        cout << "i numeri complessi inseriti non sono uguali" << endl;
    }

    coniugato(pCoNum1.parteReale, pCoNum1.parteImmaginaria);

    if(pCoNum1.parteImmaginaria < 0){

        cout << "Coniugato numero complesso 1: " << setprecision(7) << pCoNum1.parteReale
             << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;

    }else if(pCoNum1.parteImmaginaria > 0){

        cout << "Coniugato numero complesso 1: " << setprecision(7) << pCoNum1.parteReale << "+"
             << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;

    }else if(pCoNum1.parteImmaginaria == 0){

        cout << "Coniugato numero complesso 1: " << setprecision(7) << pCoNum1.parteReale << endl;
    }

    return 0;
}
