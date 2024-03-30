#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

ostream& operator << (ostream& os, const ComplexNumber& pCoNum){
    // // non prevedono copie
    // if (r.numerator == 0 && r.denominator == 0)
    //     os << NAN;
    // else if (r.denominator == 0)
    //     os << INFINITY;
    // else
    //     os << r.numerator << "/" << r.denominator;
    os << pCoNum.parteReale << "+" << pCoNum.parteImmaginaria << "i"; // non si mette << endl mai
    return os;
}

ComplexNumber operator+(const ComplexNumber& pCoNum1,const ComplexNumber& pCoNum2){
    // non prevedono copie

    float pRe = pCoNum1.parteReale + pCoNum2.parteReale;
    float pIm = pCoNum1.parteImmaginaria + pCoNum2.parteImmaginaria;
    ComplexNumber pCoNum(pRe, pIm);

    return pCoNum;
}

ComplexNumber operator==(const ComplexNumber& pCoNum1,const ComplexNumber& pCoNum2){
    // non prevedono copie

    float pRe = 0;
    float pIm = 0;
    bool parteRealeUguale = 1;
    bool parteImmaginariaUguale = 1;

    if(pCoNum1.parteReale >= 1e-6 && pCoNum2.parteReale >= 1e-6 && (pCoNum1.parteReale - pCoNum2.parteReale) == 0){
       parteRealeUguale = 0;
    }

    if(pCoNum1.parteReale >= 1e-6 && pCoNum2.parteReale >= 1e-6 && (pCoNum1.parteImmaginaria - pCoNum2.parteImmaginaria) == 0){
       parteImmaginariaUguale = 0;
    }

    if (parteRealeUguale == 0 && parteImmaginariaUguale == 0){
        pRe = pCoNum1.parteReale;
        pIm = pCoNum1.parteImmaginaria;
    }

    ComplexNumber pCoNum(pRe, pIm);
    return pCoNum;
}

