#include <iostream>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

void coniugato(float& parteRea, float& parteImm){

    if(parteImm!=0){
        parteRea = parteRea;
        parteImm = -parteImm;
    }else{
        parteRea = parteRea;
        parteImm = parteImm;
    }

}

int main(){
    float a = 0.45;
    float b = -0.1;
    float c = 0.45;
    float d = -0.1;

    ComplexNumber pCoNum1(a, b);
    ComplexNumber pCoNum2(c, d);

    ComplexNumber sommaComplessa = pCoNum1 + pCoNum2;

    ComplexNumber uguaglianza = (pCoNum1 == pCoNum2);

    if(pCoNum1.parteImmaginaria < 0){
        cout << setprecision(7) << "numero: " << pCoNum1.parteReale << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;
    }else if(pCoNum1.parteImmaginaria > 0){
        cout << setprecision(7) << "numero: " << pCoNum1.parteReale << "+" << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;
    }else if(pCoNum1.parteImmaginaria == 0){
        cout << "numero: " << setprecision(7) << pCoNum1.parteReale << endl;
    }

    coniugato(pCoNum1.parteReale, pCoNum1.parteImmaginaria);

    if(pCoNum1.parteImmaginaria < 0){
        cout << setprecision(7) << "suo coniugato: " << pCoNum1.parteReale << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;
    }else if(pCoNum1.parteImmaginaria > 0){
        cout << setprecision(7) << "suo coniugato: " << pCoNum1.parteReale << "+" << setprecision(7) << pCoNum1.parteImmaginaria << "i"  << endl;
    }else if(pCoNum1.parteImmaginaria == 0){
        cout << "suo coniugato: " << setprecision(7) << pCoNum1.parteReale << endl;
    }


    cout << setprecision(7) << sommaComplessa << endl;
    cout << setprecision(7) << uguaglianza << endl;

    return 0;
}
