#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

// float ComplexNumber::to_float(){
//     return float(parteReale);
// }

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

