#include <iostream>
#include <cmath>
#include <iomanip>
#include "ComplexNumber.hpp"

using namespace std;

void coniugato(double& parteRea, double& parteImm){

        parteRea = parteRea;
        parteImm = -parteImm;
}

int main(){

    double a = sqrt(2)/2;
    double b = sqrt(3)/4;
    double c = -sqrt(2)/2;
    double d = sqrt(3)/4;
    // ho preferito usare delle variabili double invece di variabili float in quanto i double garantiscono maggiore precisione
    // inoltre spesso quando si usano i numeri complessi si vanno ad usare le radici che hanno molte cifre dopo la virgola
    // e, dato che possono anche essere più di 6-7, che rappresentano le cifre che può avere dopo la virgola un float
    // per avere maggiore accuratezza ho usato delle variabili double

    ComplexNumberLibrary::ComplexNumber numComp1(a, b);
    ComplexNumberLibrary::ComplexNumber numComp2(c, d);

    // stampo i due numeri complessi inseriti
    cout << "il primo numero complesso inserito e': " << setprecision(15) << numComp1 << endl;
    cout << "\nil secondo numero complesso inserito e': " << setprecision(15) << numComp2 << endl;
    // in ogni cout ho inserito setprecision(15) 15 in quanto nelle variabili double abbiamo 15 cifre significative
    // a differenza dei float in cui abbiamo 7 cifre significative

    ComplexNumberLibrary::ComplexNumber sommaComplessa = numComp1 + numComp2; // sommo i due numeri complessi inseriti
    ComplexNumberLibrary::ComplexNumber numeriUguali = (numComp1 == numComp2); // verifico se i numeri complessi inseriti sono uguali

    // stampo la somma dei due numeri complessi inseriti
    cout << "\nla somma dei due numeri complessi inseriti e': " << setprecision(15) << sommaComplessa << endl;

    if(numeriUguali.parteReale == numComp1.parteReale && numeriUguali.parteImmaginaria == numComp1.parteImmaginaria &&
       numeriUguali.parteReale == numComp2.parteReale && numeriUguali.parteImmaginaria == numComp2.parteImmaginaria){

        cout << "\nil primo numero complesso inserito e' uguale al secondo numero complesso e il loro valore e': " << numeriUguali << endl;

    }else{

        cout << "\ni numeri complessi inseriti non sono uguali" << endl;
    }

    // funzione che restituisce il coniugato dei numeri complessi inseriti
    coniugato(numComp1.parteReale, numComp1.parteImmaginaria);
    coniugato(numComp2.parteReale, numComp2.parteImmaginaria);

    // a questo punto le parti immaginarie di entrambi i numeri complessi sono cambiate in quanto
    // ho usato la funzione "coniugato" per determinarne il coniugato e li stampo entrambi

    cout << "\nil coniugato del primo numero complesso e': " << setprecision(15) << numComp1 << endl;
    cout << "\nil coniugato del secondo numero complesso e': " << setprecision(15) << numComp2 << endl;

    return 0;
}
