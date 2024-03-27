#include <iostream>
#include <cmath>


using namespace std;

struct ComplexNumber{
    int parteReale;
    int parteImmaginaria;

    ComplexNumber() = default; // se non passo argomenti passo questo

    ComplexNumber(float pReale, float pImmaginaria){
        parteReale = pReale;
        parteImmaginaria = pImmaginaria;
        // inizializza gli attributi
    }


    float to_float(); // è un metodo va definito all'interno della classe

    // visibilità a 360 gradi
};

ostream& operator << (ostream& os, const ComplexNumber& pCoNum);

ComplexNumber operator+(const ComplexNumber& pCoNum1, const ComplexNumber& pCoNum2);

// Rational operator*(const Rational& r1, const Rational& r2);

