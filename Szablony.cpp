// Szablony.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Point.h"

using namespace std;
//szablony funkcji -> foremka do tworzenia funkcji

//template<typename T, typename T2> //T -> typ zmiennej
//T add(T var1, T2 var2) { // typ nazwa funkcji(parametry)

    //return var1 + var2; //typ zwracany jest przed nazwa, w tym przypadku 'T'
//}
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

template<typename G>
G add(G a, G b) {

    return a + b;
}
template<typename G>
G sous(G a, G b) {

    return a - b;
}
template<typename G>
G multiply(G a, G b) {

    return a * b;
}
template<typename G>
G divide(G a, G b) {

    return a / b;
}

template <typename O>
O readValues(O val) {

    while (!(cin >> val)) {
        cout << "Tap a correct number" << endl;
        cin.clear();
        cin.ignore();
    }
    return val;
}

template<typename O>
void giveCoords(O a, O b) {
    
    system("cls");
    //First point
    cout << "Give me the coords for the first" << endl;

    a = readValues(a); //user give coord X for p
    b = readValues(b); //user give coord Y for p

    Point2D<O> p(a, b);
    cout << "X: " << p.getX() << " Y: " << p.getY() << endl;                    
    //Second point
    cout << "Give me the coords for the second" << endl;
    
    a = readValues(a); //user give coord X for q
    b = readValues(b); //user give coord Y for q
    
    Point2D<O> q(a, b);
    cout << "X: " << q.getX() << " Y: " << q.getY() << endl;

    cout << "What do you want to do (+ = addition, - = soustraction, * = mutliply, / = divide" << endl;
    char act;
    do {
        cin >> act;
        switch (act) {

        case '+': {
            Point2D<O> p_after_add;
            p_after_add = add(p, q);
            cout << "Results" << endl;
            cout << "X: " << p_after_add.getX() << " Y: " << p_after_add.getY() << endl;
        }break;
        case '-': {
            Point2D<O> p_after_sous;
            p_after_sous = sous(p, q);
            cout << "Results" << endl;
            cout << "X: " << p_after_sous.getX() << " Y: " << p_after_sous.getY() << endl;
        }break;
        case '*': {
            Point2D<O> p_after_multiply;
            p_after_multiply = multiply(p, q);
            cout << "Results" << endl;
            cout << "X: " << p_after_multiply.getX() << " Y: " << p_after_multiply.getY() << endl;
        }break;
        case '/': {
            Point2D<O> p_after_divide;
            p_after_divide = divide(p, q);
            cout << "Results" << endl;
            cout << "X: " << p_after_divide.getX() << " Y: " << p_after_divide.getY() << endl;
        }break;

        default: cout << "Wrong sign" << endl; break;
        }
    } while (act != '+' && act != '-' && act != '*' && act != '/');
    
   
}

int main(int argc, char* argv[])
{
    /*
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

            int a = 0, b = 0;
            giveCoords(a, b);
            break;
        }
        else if (choice == "Double" || choice == "D" || choice == "double" || choice == "d") { //for a double type

            double a = 0, b = 0;
            giveCoords(a, b);
            break;
        }
        else if (choice == "Float" || choice == "F" || choice == "float" || choice == "f") { //for a floating type

            float a = 0, b = 0;
            giveCoords(a, b);
            break;
        }
        else if (choice == "Exit" || choice == "exit" || choice == "e" || choice == "E") {
            system("cls");
            cout << "Goodbye" << endl;
            break;
        }
        else { cout << "Error, try again" << endl; continue; }
    }
    /*
    if (__cplusplus == 201703L) cout << "C++17\n";
    else if (__cplusplus == 201402L) cout << "C++14\n";
    else if (__cplusplus == 201103L) cout << "C++11\n";
    else if (__cplusplus == 199711L) cout << "C++98\n";
    else cout << "pre-standard C++\n"*/
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
