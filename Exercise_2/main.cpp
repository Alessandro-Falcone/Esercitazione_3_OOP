#include <iostream>
#include <cmath>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

void coniugato(float& parteRea, float& parteImm){

        parteRea = parteRea;
        parteImm = -parteImm;
}

// in questa funzione passo i valori a, b, c e d, definiti all'inizio del main,
// che costituiscono la parte reale ed immaginaria dei due numeri complessi che andrò a definire nel corso del programma,
// in modo tale da approssimarli per non avere troppe cifre dopo la virgola in quanto
// sono dei float e possono avere solo un determinato numero di cifre dopo la virgola
approssimazione(float valore){

    // contatore delle cifre che ogni numero può avere dopo la virgola
    unsigned int cifreDopoLaVirgola = 0;
    // contatore delle cifre che ogni numero può avere dopo la virgola per essere approssimato correttamente
    unsigned int valoreTrasformato = 0;

    if(valore != 0){
        while(abs(valore) <= 1e+6){
            // il valore assoluto dei valori a, b, c e d che passo alla funzione deve essere minore o uguale di 1e+6
            // in quanto per i float posso avere solo 7 numeri dopo la virgola più 1 valore per la mantissa
            valore = valore*10;
            cifreDopoLaVirgola++;
        }
    }

    if(valore != 0){
        while(valoreTrasformato < cifreDopoLaVirgola){
            valore = (valore)/10;
            valoreTrasformato++;
        }
    }

    return valore;
}

int main(){

    float a = 1;
    float b = 2;
    float c = 1;
    float d = 2;

    // passo i float a, b, c e d alla funzione approssimazione
    approssimazione(a);
    approssimazione(b);
    approssimazione(c);
    approssimazione(d);

    ComplexNumberLibrary::ComplexNumber numComp1(a, b);
    ComplexNumberLibrary::ComplexNumber numComp2(c, d);

    // stampo i due numeri complessi inseriti
    cout << "il primo numero complesso inserito e': " << setprecision(7) << numComp1 << endl;
    cout << "il secondo numero complesso inserito e': " << setprecision(7) << numComp2 << endl;

    ComplexNumberLibrary::ComplexNumber sommaComplessa = numComp1 + numComp2; // sommo i due numeri complessi inseriti
    ComplexNumberLibrary::ComplexNumber numeriUguali = (numComp1 == numComp2); // verifico se i numeri complessi inseriti sono uguali

    // stampo la somma dei due numeri complessi inseriti
    cout << "la somma dei due numeri complessi inseriti e': " << setprecision(7) << sommaComplessa << endl;

    if(numeriUguali.parteReale == numComp1.parteReale && numeriUguali.parteImmaginaria == numComp1.parteImmaginaria &&
       numeriUguali.parteReale == numComp2.parteReale && numeriUguali.parteImmaginaria == numComp2.parteImmaginaria){

        cout << "i numeri inseriti sono uguali" << endl;
        cout << "il primo numero complesso inserito e' uguale al secondo numero complesso e il loro valore e': " << numeriUguali << endl;

    }else{

        cout << "i numeri complessi inseriti non sono uguali" << endl;
    }

    // funzione che restituisce il coniugato dei numeri complessi inseriti
    coniugato(numComp1.parteReale, numComp1.parteImmaginaria);
    coniugato(numComp2.parteReale, numComp2.parteImmaginaria);

    // a questo punto le parti immaginarie di entrambi i numeri complessi sono cambiate in quanto
    // ho usato la funzione "coniugato" per determinarne il coniugato e li stampo entrambi

    cout << "il coniugato del primo numero complesso e': " << setprecision(7) << numComp1 << endl;
    cout << "il coniugato del secondo numero complesso e': " << setprecision(7) << numComp2 << endl;

    return 0;
}
