//Client file
//***************************************************************************
//
//   Programador : Isamar López Rodríguez CCOM 3034 Sección 0U1
//   Num. Est.   : 801-08-3174            Primer Semestre 2016-2017
//   Asignación 2                         Prof. R. J. Colorado
//   Archivo     : client.cpp             Fecha : 01/09/16
//
//***************************************************************************
//    Propósito :This file holds the main that finally displays the values
//               of the class circle(radius, diameter, circumference, area).
//               It holds two functions, one for the user input of radius and
//               another to display the final results.
//
//***************************************************************************

#include <iostream>
#include <iomanip>
#include"cylinder.h"

using namespace std;

//prototypes
double inputRadius();
double inputHeight();
void Display (const cylinder&);

int main(){
    //Object declaration and initilization
    cylinder myCylinder = cylinder(inputRadius(), inputHeight());

    //displays cylinder attributes
    Display(myCylinder);

    return 0;
}

//1st function: user prompt for radius
double inputRadius(){
    double r;

    cout<< "Ingrese el radio: ";
    cin >> r;

    //input validation
    while(r<= 0.0){
        cout<< "Ingrese el radio: ";
        cin >> r;
    }
    return r;

}

//2nd function: user prompt for height
double inputHeight(){
    double h;
    cout<< "Ingrese la altura: ";
    cin >> h;

    //input validation
    while(h<= 0.0){
        cout<< "Ingrese la altura: ";
        cin >> h;
    }
    return h;
}



//3rd function: output for radius, height
//diameter, circumference, and area values
void Display(const cylinder & r){
    cout<<fixed<<setprecision(2);
    cout<<"\n<< Dimesiones del Cilindro >>\n"
       <<"\n\tAltura  ==========="<< setw(8)
       <<r.getHeight()
       << "\n\tRadio  ============"<< setw(8)
       << r.getRadius()
       <<"\n\tArea  =============="<< setw(8)
       <<r.getArea()
       <<"\n\tVolumen ============"<< setw(8)
       <<r.getVolume()<<endl;

}
