//
// Created by rhy on 25.09.2021.
//

#include "container.h"

// Инициализация контейнера
void Init(container &c) {
    c.len = 0;
}

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c) {
    for (int i = 0; i < c.len; ++i) {
        delete c.cont[i];
    }
    c.len = 0;
}

// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst) {
    while (!ifst.eof()) {
        if ((c.cont[c.len] = In(ifst)) != nullptr) {
            c.len++;
        }
    }
}

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size){
    while(c.len < size) {
        if((c.cont[c.len] = InRnd()) != nullptr) {
            c.len++;
        }
    }
}

// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst){
    ofst << "Container contains " << c.len << " elements." << endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i + 1 << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

// Сортировка контейнера алгоритмом Шелла
void ShellSort(container &c){
    int d = c.len / 2;
    while (d != 0){
        for (int i = d; i < c.len; i += d) {
            int j = i;
            while (j > 0 && Area(*c.cont[j - d]) > Area(*c.cont[j])){
                std::swap(c.cont[j - d], c.cont[j]);
                j -= d;
            }
        }
        d /= 2;
    }
}




