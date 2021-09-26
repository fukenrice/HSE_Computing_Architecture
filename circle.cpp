//
// Created by rhy on 25.09.2021.
//

#include "circle.h"

// Ввод параметров треугольника из файла
void In(circle &c, ifstream &ifst){
    ifst >> c.x1 >> c.y1 >> c.radius >> c.color_index;
}

// Случайный ввод круга треугольника
void InRnd(circle &c){
    c.x1 = Random(-100, 100);
    c.y1 = Random(-100, 100);
    c.radius = Random(1, 100);
    while(Area(c) == 0){
        c.radius = Random(1, 100);
    }
    c.color_index = Random(0, 6);
}

// Вывод параметров круга в форматируемый поток
void Out(circle &c, ofstream &ofst){
    string color;

    switch (c.color_index) {
        case c.RED:
            color = "red";
            break;
        case c.ORANGE:
            color = "orange";
            break;
        case c.YELLOW:
            color = "yellow";
            break;
        case c.GREEN:
            color = "green";
            break;
        case c.BLUE:
            color = "blue";
            break;
        case c.DARK_BLUE:
            color = "dark blue";
            break;
        case c.VIOLET:
            color = "violet";
            break;
        default:
            color = "";
    }
            ofst << "It is circle: (x1, x2) = (" << c.x1
    << ", " << c.y1 << ") with radius = "
    << c.radius << ". Color: " << color << ". Area = " << Area(c) << endl;
}

// Вычисление площади круга
double Area(circle &c){
    return 3.141592653589793 * c.radius * c.radius;
}
