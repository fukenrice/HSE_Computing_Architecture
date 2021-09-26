//
// Created by rhy on 24.09.2021.
//

#ifndef HW1_RECTANGLE_H
#define HW1_RECTANGLE_H

//------------------------------------------------------------------------------
// rectangle.h - содержит описание прямоугольника  и его интерфейса
//------------------------------------------------------------------------------

#include "rnd.h"
#include <fstream>
using namespace std;

// прямоугольник
struct rectangle {
    int x1, y1, x2, y2; // Координаты левого верхнего угла
    enum colors{RED = 0, ORANGE, YELLOW, GREEN, BLUE, DARK_BLUE, VIOLET};
    int color_index;
};

// Ввод параметров прямоугольника из файла
void In(rectangle &r, ifstream &ifst);

// Случайный ввод параметров прямоугольника
void InRnd(rectangle &r);

// Вывод параметров прямоугольника в форматируемый поток
void Out(rectangle &r, ofstream &ofst);

// Вычисление площади прямоугольника
double Area(rectangle &r);

#endif //HW1_RECTANGLE_H

