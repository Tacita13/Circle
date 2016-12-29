//Specification/implementation file
//******************************************************************
//
//   Programador : Isamar López Rodríguez CCOM 3034 Sección 0U1
//   Num. Est.   : 801-08-3174            Primer Semestre 2016-2017
//   Asignación 2                         Prof. R. J. Colorado
//   Archivo     : circle.h               Fecha : 01/09/16
//
//******************************************************************
//    Propósito :This file contains the Circle class declaration
//               with its private data member and public member
//               functions
//
//******************************************************************


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
  //data members
  private:
    double radius;

  //member functions
  public:
    //Default constructor
    Circle();

    //Parameterized constructor
    Circle(double);

    //Destructor
    ~Circle();

    // Setter
    void setRadius(double);

    //Getters
    double getRadius() const;
    double getDiameter() const;
    double getCircumference() const;
    double getArea() const;

};

#endif // CIRCLE_H

//Implementation file
/*
 * Isamar López Rodríguez
 *
This file holds the definition of the member functions
(constructors, destructors, Getters/Setters)
*/


//Default constructor
Circle::Circle(): radius(0.0){}

//Parameterized constructor
Circle::Circle(double r){

    setRadius(r);
}

//Destructor
Circle::~Circle(){}

// Setters (x1)
void Circle::setRadius(double r){

    radius=(r >= 0.0) ? r : 0.0;
}

//Getters (x4)
//gets the value of the radius
double Circle::getRadius() const{

    return radius;
}

//gets the value of the diameter
double Circle::getDiameter() const{
    return 2.0 *(radius);

}

//gets the value of the circumeference
double Circle::getCircumference() const{

    return 2*M_PI*(radius);
}

//gets the value of the area
double Circle::getArea() const{

    return M_PI*(pow(radius,2));
}


