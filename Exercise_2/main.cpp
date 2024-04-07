#include <iostream>
#include <cmath>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

void coniugato(float& parteRea, float& parteImm){

        parteRea = parteRea;
        parteImm = -parteImm;
}

approssimazione(float valore){

    unsigned int cifreDopoLaVirgola = 0;
    unsigned int valoreTrasformato = 0;

    if(valore != 0){
        while(abs(valore) <= 1e+6){
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

    float a = 0;
    float b = -123456.49365432;
    float c = 0;
    float d = sqrt(2)/2;

    cout << "il primo numero complesso inserito e': " << setprecision(8) << b << endl;

    approssimazione(a);
    approssimazione(b);
    approssimazione(c);
    approssimazione(d);

    cout << "il primo numero complesso inserito e': " << setprecision(7) << b << endl;
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
        cout << "il primo numero complesso inserito e' uguale al secondo numero complesso inserito: " << numeriUguali << endl;

    }else{

        cout << "i numeri complessi inseriti non sono uguali" << endl;
    }

    // funzione che restituisce il coniugato dei numeri complessi inseriti
    coniugato(numComp1.parteReale, numComp1.parteImmaginaria);
    coniugato(numComp2.parteReale, numComp2.parteImmaginaria);

    // a questo punto le parti immaginarie di entrambi i numeri complessi sono cambiate in quanto
    // ho usato la funzione per determinarne il coniugato e li stampo entrambi

    cout << "il coniugato del primo numero complesso e': " << setprecision(7) << numComp1 << endl;
    cout << "il coniugato del secondo numero complesso e': " << setprecision(7) << numComp2 << endl;

    return 0;
}
