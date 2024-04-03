#include "ComplexNumber.hpp"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

namespace ComplexNumberLibrary{

ostream& operator << (ostream& os, const ComplexNumber& pCoNum){
    if(pCoNum.parteImmaginaria > 0){
        os << setprecision(7) << pCoNum.parteReale << "+" << setprecision(7) << pCoNum.parteImmaginaria << "i"; // non si mette << endl mai
    }
    else if(pCoNum.parteImmaginaria < 0){
        os << setprecision(7) << pCoNum.parteReale << setprecision(7) << pCoNum.parteImmaginaria << "i";
    }
    else if(pCoNum.parteImmaginaria == 0){
        os << setprecision(7) << pCoNum.parteReale;
    }
    return os;
}

ComplexNumber operator+(const ComplexNumber& pCoNum1,const ComplexNumber& pCoNum2){
    // operatore somma che fa la somma tra due numeri complessi

    ComplexNumber pCoNum(pCoNum1.parteReale + pCoNum2.parteReale, pCoNum1.parteImmaginaria + pCoNum2.parteImmaginaria);

    // ritorna la somma tra i due numeri inseriti
    return pCoNum;
}

ComplexNumber operator==(const ComplexNumber& pCoNum1,const ComplexNumber& pCoNum2){
    // operatore uguaglianza verifica se i due numeri inseriti sono uguali

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

    // se i due numeri inseriti sono uguali ritorna uno dei due numeri inseriti in quanto sono uguali altrimenti ritorna 0
    return pCoNum;
    }
}

