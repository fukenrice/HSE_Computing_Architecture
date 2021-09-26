//
// Created by rhy on 25.09.2021.
//

#ifndef HW1_TRIANGLE_H
#define HW1_TRIANGLE_H

//------------------------------------------------------------------------------
// triangle.h - содержит описание треугольника
//------------------------------------------------------------------------------

#include "rnd.h"
#include <fstream>
using namespace std;



//------------------------------------------------------------------------------
// треугольник
struct triangle {
    int x1, x2, x3, y1, y2, y3; // координаты вершин
    enum color{RED = 0, ORANGE, YELLOW, GREEN, BLUE, DARK_BLUE, VIOLET};
    int color_index;
};

// Ввод параметров треугольника из файла
void In(triangle &t, ifstream &ifst);

// Случайный ввод параметров треугольника
void InRnd(triangle &t);

// Вывод параметров треугольника в форматируемый поток
void Out(triangle &t, ofstream &ofst);

// Вычисление площади треугольника
double Area(triangle &t);

#endif //HW1_TRIANGLE_H
