#ifndef __COMPLEXNUMBER_H // Header guards
#define __COMPLEXNUMBER_H
#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary{

struct ComplexNumber{
    double parteReale;
    double parteImmaginaria;

    ComplexNumber() = default;

    ComplexNumber(double pReale, double pImmaginaria){
        parteReale = pReale;
        parteImmaginaria = pImmaginaria;
        // inizializza gli attributi
    }
    // è un metodo va definito all'interno della classe

};

ostream& operator << (ostream& os, const ComplexNumber& numComp);

ComplexNumber operator+(const ComplexNumber& numComp1, const ComplexNumber& numComp2);

ComplexNumber operator==(const ComplexNumber& numComp1, const ComplexNumber& numComp2);

}
#endif
