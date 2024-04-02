#include "ComplexNumber.hpp"
#include <iostream>
#include <math.h>

using namespace std;

ostream& operator << (ostream& os, const ComplexNumber& pCoNum){
    // non prevedono copie
    if(pCoNum.parteImmaginaria > 0){
        os << pCoNum.parteReale << "+" << pCoNum.parteImmaginaria << "i"; // non si mette << endl mai
    }
    else if(pCoNum.parteImmaginaria < 0){
        os << pCoNum.parteReale << pCoNum.parteImmaginaria << "i";
    }
    else if(pCoNum.parteImmaginaria == 0){
        os << pCoNum.parteReale;
    }

    return os;
}

ComplexNumber operator+(const ComplexNumber& pCoNum1,const ComplexNumber& pCoNum2){
    // non prevedono copie

    float pRe = 0;
    float pIm = 0;

    pRe = pCoNum1.parteReale + pCoNum2.parteReale;
    pIm = pCoNum1.parteImmaginaria + pCoNum2.parteImmaginaria;

    ComplexNumber pCoNum(pRe, pIm);

    return pCoNum;
}

ComplexNumber operator==(const ComplexNumber& pCoNum1,const ComplexNumber& pCoNum2){
    // non prevedono copie

    float pRe = 0;
    float pIm = 0;
    bool parteRealeUguale = false;
    bool parteImmaginariaUguale = false;

    if(abs(pCoNum1.parteReale) >= 1e-7 &&
        abs(pCoNum2.parteReale) >= 1e-7 &&
        (pCoNum1.parteReale - pCoNum2.parteReale) == 0){

       parteRealeUguale = true;
    }

    if(abs(pCoNum1.parteImmaginaria) >= 1e-7 &&
        abs(pCoNum2.parteImmaginaria) >= 1e-7 &&
        (pCoNum1.parteImmaginaria - pCoNum2.parteImmaginaria) == 0){

       parteImmaginariaUguale = true;
    }

    if (parteRealeUguale == true && parteImmaginariaUguale == true){
        pRe = pCoNum1.parteReale;
        pIm = pCoNum1.parteImmaginaria;
    }

    ComplexNumber pCoNum(pRe, pIm);
    return pCoNum;
}

