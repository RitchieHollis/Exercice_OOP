// Szablony.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Point.h"

using namespace std;
//szablony funkcji -> foremka do tworzenia funkcji

template<typename T, typename T2> //T -> typ zmiennej
T add(T var1, T2 var2) { // typ nazwa funkcji(parametry)

    return var1 + var2; //typ zwracany jest przed nazwa, w tym przypadku 'T'
}
/*
template<>
Point2D add(Point2D var1, Point2D var2) { //templatka dla klas, jesli nie mozna dac operatora

    Point2D temp;

    temp.setX(var1.getX() + var2.getX());
    temp.setY(var1.getY() + var2.getY());
    return temp;
} 

i wtedy Point2D p_after_add = add(p,q)
*/
/*
typedef void null;
template<typename O>
null plus() {
    system("cls");
    O a, b;
    cout << "Give me the coords for the first" << endl;
    cin >> a;
    cin >> b;
    Point2D<O> p(a, b);
    cout << "X: " << p.getX() << " Y: " << p.getY() << endl;                    W FAZIE TESTOW

    cout << "Give me the coords for the second" << endl;
    cin >> a;
    cin >> b;
    Point2D<O> q(a, b);
    cout << "X: " << q.getX() << " Y: " << q.getY() << endl;

    Point2D<O> p_after_add = p + q;
    cout << "Results:" << endl;
    cout << "X: " << p_after_add.getX() << " Y: " << p_after_add.getY() << endl;
   
}
*/
int main(int argc, char* argv[])
{
  
    cout << add(10.5, 5.485) << endl;
    cout << static_cast<int>(10.5) << endl; //rzutowanie statyczne
    cout << add<int, int>(10.5, 5) << endl; //rzutowanie poprzez templatke
    system("cls");
    /*
    typedef Point2D<int> Point2Dint;
    typedef Point2D<double> Point2Ddouble;
    typedef Point2D<float> Point2Dfloat;*/
    while(1){

        cout << "Int, double or float? Tap Exit to, well, exit" << endl;
        string choice;
        cin >> choice;

        if (choice == "Int" || choice == "I" || choice == "int" || choice == "i") { //for an integer type

            system("cls");
            //first point
            cout << "Give me the coords for the first" << endl;
            int a, b;
            while (!(cin >> a)) { 
                cout << "Tap an integer" << endl;
                cin.clear(); 
                cin.ignore();
            }
            while (!(cin >> b)) { 
                cout << "Tap an integer" << endl;
                cin.clear(); 
                cin.ignore(); 
            }
            Point2D<int> p(a, b);
            cout << "X: " << p.getX() << " Y: " << p.getY() << endl;
            //second point
            cout << "Give me the coords for the second" << endl;
            while (!(cin >> a)) {
                cout << "Tap an integer" << endl;
                cin.clear();
                cin.ignore();
            }
            while (!(cin >> b)) {
                cout << "Tap an integer" << endl;
                cin.clear();
                cin.ignore();
            }
            Point2D<int> q(a, b);
            cout << "X: " << q.getX() << " Y: " << q.getY() << endl;
            //adding two points
            Point2D<int> p_after_add = p + q;
            cout << "Results:" << endl;
            cout << "X: " << p_after_add.getX() << " Y: " << p_after_add.getY() << endl;
            break;
        }
        else if (choice == "Double" || choice == "D" || choice == "double" || choice == "d") { //for a double type

            system("cls");
            //first point
            cout << "Give me the coords for the first" << endl;
            double a, b;
            while (!(cin >> a)) {
                cout << "Tap a double" << endl;
                cin.clear();
                cin.ignore();
            }
            while (!(cin >> b)) {
                cout << "Tap a double" << endl;
                cin.clear();
                cin.ignore();
            }
            Point2D<double> p(a, b);
            cout << "X: " << p.getX() << " Y: " << p.getY() << endl;
            //second point
            cout << "Give me the coords for the second" << endl;
            while (!(cin >> a)) {
                cout << "Tap a double" << endl;
                cin.clear();
                cin.ignore();
            }
            while (!(cin >> b)) {
                cout << "Tap a double" << endl;
                cin.clear();
                cin.ignore();
            }
            Point2D<double> q(a, b);
            cout << "X: " << q.getX() << " Y: " << q.getY() << endl;
            //adding two points
            Point2D<double> p_after_add = p + q;
            cout << "Results:" << endl;
            cout << "X: " << p_after_add.getX() << " Y: " << p_after_add.getY() << endl;
            break;
        }
        else if (choice == "Float" || choice == "F" || choice == "float" || choice == "f") { //for a floating type

            system("cls");
            //first point
            cout << "Give me the coords for the first" << endl;
            float a, b;
            while (!(cin >> a)) {
                cout << "Tap a floating number" << endl;
                cin.clear();
                cin.ignore();
            }
            while (!(cin >> b)) {
                cout << "Tap a floating number" << endl;
                cin.clear();
                cin.ignore();
            }
            Point2D<float> p(a, b);
            cout << "X: " << p.getX() << " Y: " << p.getY() << endl;
            //second point
            cout << "Give me the coords for the second" << endl;
            while (!(cin >> a)) {
                cout << "Tap a floating number" << endl;
                cin.clear();
                cin.ignore();
            }
            while (!(cin >> b)) {
                cout << "Tap a floating number" << endl;
                cin.clear();
                cin.ignore();
            }
            Point2D<float> q(a, b);
            cout << "X: " << q.getX() << " Y: " << q.getY() << endl;
            //adding two points
            Point2D<float> p_after_add = p + q;
            cout << "Results:" << endl;
            cout << "X: " << p_after_add.getX() << " Y: " << p_after_add.getY() << endl;
            break;
        }
        else if (choice == "Exit" || choice == "exit" || choice == "e" || choice == "E") {
            system("cls");
            cout << "Goodbye" << endl;
            break;
        }
        else { cout << "Error, try again" << endl; continue; }
    }
    cout << "Press enter to quit" << endl;
    char c;
    cin >> c;
    if (c == '\n') {
        return EXIT_SUCCESS;
    }
    /*
    Point2D<int> p(25, 42);
    Point2Dint q(33, 47);
    */
    //add(p, q); //nie mozna tak zrobic z obiektami
    //Point2D<int> p_after_add = p+q;
    //cout << "X: " << p_after_add.getX() << " Y: " << p_after_add.getY()<< endl;

}


