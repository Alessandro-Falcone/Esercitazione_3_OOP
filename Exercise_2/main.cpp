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

    float a = 0.12345;
    float b = 51;
    float c = 0.1234;
    float d = 52;

    ComplexNumberLibrary::ComplexNumber numComp1(a, b);
    ComplexNumberLibrary::ComplexNumber numComp2(c, d);

    cout << "il primo numero complesso inserito e': " << setprecision(7) << numComp1 << endl;
    cout << "il secondo numero complesso inserito e': " << setprecision(7) << numComp2 << endl;

    ComplexNumberLibrary::ComplexNumber sommaComplessa = numComp1 + numComp2;
    ComplexNumberLibrary::ComplexNumber numeriUguali = (numComp1 == numComp2);

    cout << "la somma dei due numeri complessi inseriti e': " << setprecision(7) << sommaComplessa << endl;

    if(numeriUguali.parteReale == numComp1.parteReale && numeriUguali.parteImmaginaria == numComp1.parteImmaginaria &&
       numeriUguali.parteReale == numComp2.parteReale && numeriUguali.parteImmaginaria == numComp2.parteImmaginaria){

        cout << "i numeri inseriti sono uguali" << endl;
        cout << "il primo numero complesso inserito e' uguale al secondo numero complesso inserito: " << numeriUguali << endl;

    }else{

        cout << "i numeri complessi inseriti non sono uguali" << endl;
    }

    coniugato(numComp1.parteReale, numComp1.parteImmaginaria);

    if(numComp1.parteImmaginaria < 0){

        cout << "il coniugato del primo numero complesso e': " << setprecision(7) << numComp1.parteReale
             << setprecision(7) << numComp1.parteImmaginaria << "i"  << endl;

    }else if(numComp1.parteImmaginaria > 0){

        cout << "il coniugato del primo numero complesso e': " << setprecision(7) << numComp1.parteReale << "+"
             << setprecision(7) << numComp1.parteImmaginaria << "i"  << endl;

    }else if(numComp1.parteImmaginaria == 0){

        cout << "il coniugato del primo numero complesso e': " << setprecision(7) << numComp1.parteReale << endl;
    }

    return 0;
}
