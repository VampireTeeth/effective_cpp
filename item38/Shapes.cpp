
#include <iostream>
#include "Shapes.h"

namespace std{

    Shape::~Shape(){}

    void Shape::draw(ShapeColor color) const {
        string s = "";
        switch(color){
        case RED:
            s = "red";
            break;
        case BLUE:
            s = "blue";
            break;
        case GREEN:
            s = "green";
            break;
        default:
            s = "unknown color";
        }
        cout << s;
    }

    Rectangle::~Rectangle(){}

    void Rectangle::draw(ShapeColor color) const {
        cout << "Drawing a rectangle in ";
        this->Shape::draw(color);
        cout << endl;
    }

    Square::~Square(){}

    void Square::draw(ShapeColor color) const {
        cout << "Drawing a square in ";
        this->Shape::draw(color);
        cout << endl;
    }



}
