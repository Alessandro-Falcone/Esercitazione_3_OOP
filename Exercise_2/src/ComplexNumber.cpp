#include "ComplexNumber.hpp"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

namespace ComplexNumberLibrary{

ostream& operator << (ostream& os, const ComplexNumber& numComp){
    // operatore di output (stampa) dei numeri complessi inseriti

    if(numComp.parteImmaginaria > 0 && numComp.parteReale != 0){
        // se la parte immaginaria dei numeri inseriti è maggiore di 0 e la parte reale è diversa da 0 stampo il numero complesso nella forma
        // z = (+/-)x + (+y)i dove Re z = (+/-)x e Im z = y
        os << setprecision(15) << numComp.parteReale << "+" << setprecision(15) << numComp.parteImmaginaria << "i"; // non si mette << endl mai
    }
    else if(numComp.parteImmaginaria < 0 && numComp.parteReale != 0){
        // se la parte immaginaria dei numeri inseriti è minore di 0 e la parte reale è diversa da 0 stampo il numero complesso nella forma
        // z = (+/-)x + (-y)i dove Re z = (+/-)x e Im z = -y
        os << setprecision(15) << numComp.parteReale << setprecision(15) << numComp.parteImmaginaria << "i";
    }
    else if(numComp.parteImmaginaria == 0){
        // se la parte immaginaria dei numeri inseriti è uguale a 0 stampo il numero complesso nella forma
        // z = (+/-)x dove Re z = (+/-)x e Im z = 0
        os << setprecision(15) << numComp.parteReale;
    }
    else if(numComp.parteReale == 0){
        // se la parte immaginaria dei numeri inseriti è uguale a 0 stampo il numero complesso nella forma
        // z = (+/-)yi dove Re z = 0 e Im z = (+/-)y
        os << setprecision(15) << numComp.parteImmaginaria << "i";
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

    double pRe = 0;
    double pIm = 0;
    bool uguali = false;

    if(abs(abs(numComp1.parteReale) - abs(numComp2.parteReale)) <= 1e-12 &&
        abs(abs(numComp1.parteImmaginaria) - abs(numComp2.parteImmaginaria)) <= 1e-12){

        // 1e-12 rappresenta la tolleranza, non ho imposto la condizione (== 0) in quanto le variabili che rappresentano la parte reale ed immaginaria dei numeri complessi
        // sono floating point (float o double) e quindi sto lavorando in aritmetica finita di calcolo
        // se sono soddisfatte le condizioni dell'if la variabile booleana uguali passa da "false" a "true"
        uguali = true;

    }else{

        // se non sono soddisfatte le condizioni dell'if la variabile booleana uguali rimane "false"
        uguali = false;
    }

    if(uguali == true){
        // se uguali è vero impongo la parte reale (pRe) ed immaginaria (pIm) uguali alla parte reale ed immaginaria di numComp1
        // (posso anche mettere numComp2 al posto di numComp1 in quanto sono uguali i due numeri se è soddisfatta la condizione di questo if)
        pRe = numComp1.parteReale;
        pIm = numComp1.parteImmaginaria;
    }

    ComplexNumber numComp(pRe, pIm);

    // se i due numeri inseriti sono uguali ritorna uno dei due numeri inseriti in quanto sono uguali
    // altrimenti ritorna l'inizializzazione a zero (pRe = 0 e pIm = 0)
    return numComp;
    }
}

