#ifndef __COMPLEXNUMBER_H // Header guards
#define __COMPLEXNUMBER_H
#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary{

struct ComplexNumber{
    float parteReale;
    float parteImmaginaria;

    ComplexNumber() = default; // se non passo argomenti passo questo

    ComplexNumber(float pReale, float pImmaginaria){
        parteReale = pReale;
        parteImmaginaria = pImmaginaria;
        // inizializza gli attributi
    }

    // è un metodo va definito all'interno della classe

    // visibilità a 360 gradi
};

ostream& operator << (ostream& os, const ComplexNumber& pCoNum);

ComplexNumber operator+(const ComplexNumber& pCoNum1, const ComplexNumber& pCoNum2);

ComplexNumber operator==(const ComplexNumber& pCoNum1, const ComplexNumber& pCoNum2);

}

#endif
