#include "ComplexNumber.hpp"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

namespace ComplexNumberLibrary{

ostream& operator << (ostream& os, const ComplexNumber& numComp){
    if(numComp.parteImmaginaria > 0 && numComp.parteReale != 0){
        os << setprecision(7) << numComp.parteReale << "+" << setprecision(7) << numComp.parteImmaginaria << "i"; // non si mette << endl mai
    }
    else if(numComp.parteImmaginaria < 0 && numComp.parteReale != 0){
        os << setprecision(7) << numComp.parteReale << setprecision(7) << numComp.parteImmaginaria << "i";
    }
    else if(numComp.parteImmaginaria == 0){
        os << setprecision(7) << numComp.parteReale;
    }
    else if(numComp.parteReale == 0){
        os << setprecision(7) << numComp.parteImmaginaria << "i";
    }
    return os;
}

ComplexNumber operator+(const ComplexNumber& numComp1, const ComplexNumber& numComp2){
    // operatore somma che fa la somma tra due numeri complessi

    ComplexNumber numComp(numComp1.parteReale + numComp2.parteReale, numComp1.parteImmaginaria + numComp2.parteImmaginaria);

    // ritorna la somma tra i due numeri inseriti
    return numComp;
}

ComplexNumber operator==(const ComplexNumber& numComp1, const ComplexNumber& numComp2){
    // operatore uguaglianza verifica se i due numeri inseriti sono uguali

    float pRe = 0;
    float pIm = 0;
    bool parteRealeUguale = false;
    bool parteImmaginariaUguale = false;

    if(abs(numComp1.parteReale) <= 1e-4 ||
       abs(numComp2.parteReale) <= 1e-4 ||
       (abs(numComp1.parteReale) - abs(numComp2.parteReale)) != 0){

       parteRealeUguale = false;
    }else{
        parteRealeUguale = true;
    }

    if(abs(numComp1.parteImmaginaria) <= 1e-4 ||
       abs(numComp2.parteImmaginaria) <= 1e-4 ||
       (abs(numComp1.parteImmaginaria) - abs(numComp2.parteImmaginaria)) != 0){

       parteImmaginariaUguale = false;
    }else{
       parteImmaginariaUguale = true;
    }

    if (parteRealeUguale == true && parteImmaginariaUguale == true){
        pRe = numComp1.parteReale;
        pIm = numComp1.parteImmaginaria;
    }

    ComplexNumber numComp(pRe, pIm);

    // se i due numeri inseriti sono uguali ritorna uno dei due numeri inseriti in quanto sono uguali altrimenti ritorna l'inizializzazione a zero
    return numComp;

    }

}

