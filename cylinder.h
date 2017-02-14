//Specification/Implementation file
//******************************************************************
//
//   Programador : Isamar López Rodríguez 
//   Archivo     : cylinder.h             Fecha : 01/09/16
//
//******************************************************************
//    Propósito :This file contains the Cylinder class declaration
//               with its private data member and public member
//               functions
//
//******************************************************************



#include<iostream>
#include<iomanip>
#include "circle.h"

using namespace std;

#ifndef CYLINDER_H
#define CYLINDER_H

class cylinder : public Circle{
    private:
        double height;

    public:
        //Parameterized constructor with default arguments
        cylinder(double =0.0, double =0.0);

        //Default constructor
        cylinder();

        //Parameterized constructor
        cylinder(double);

        //Destructor
        ~cylinder();

        //Setter
        void setDimensions(double, double);

        //Getters

        double getHeight() const;
        double getArea() const;
        double getVolume() const;
        void print() const;
};

#endif // CYLINDER_H


//Parameterized constructor with default arguments
cylinder::cylinder(double r, double h) : Circle(r){
    height=(h>=0.0) ? h : 0.0;
       cout<< "Constructor clase derivada.\n";

}

cylinder::~cylinder(){
       cout<< "Destructor clase derivada.\n";
}

//Setter
void cylinder::setDimensions(double r, double h){

    Circle::setRadius(r);
    height=(h>=0.0) ? h : 0.0;
}

//Getters
double cylinder::getHeight() const{
    return height;

}
double cylinder::getArea() const{

    return 2.0 * M_PI*Circle::getRadius()*getHeight()
                  + 2.0*M_PI*pow(Circle::getRadius(),2);
}
double cylinder::getVolume() const{

    return M_PI*pow(Circle::getRadius(),2)*getHeight();
}
void cylinder::print() const{
    cout<<fixed<<setprecision(2);
}
