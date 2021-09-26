//
// Created by rhy on 25.09.2021.
//

#ifndef HW1_CIRCLE_H
#define HW1_CIRCLE_H

//------------------------------------------------------------------------------
// circle.h - содержит описание круга
//------------------------------------------------------------------------------

#include "rnd.h"
#include <fstream>
using namespace std;

struct circle{
    int x1, y1, radius;
    enum color{RED = 0, ORANGE, YELLOW, GREEN, BLUE, DARK_BLUE, VIOLET};
    int color_index;
};

// Ввод параметров треугольника из файла
void In(circle &c, ifstream &ifst);

// Случайный ввод круга треугольника
void InRnd(circle &c);

// Вывод параметров круга в форматируемый поток
void Out(circle &c, ofstream &ofst);

// Вычисление площади круга
double Area(circle &c);




#endif //HW1_CIRCLE_H
