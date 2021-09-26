//
// Created by rhy on 24.09.2021.
//

#ifndef HW1_RND_H
#define HW1_RND_H

#include <cstdlib>

//------------------------------------------------------------------------------
// rnd.h - содержит генератор случайных чисел в диапазоне от 1 до 20
//------------------------------------------------------------------------------

inline auto Random(int a, int b) {
    return a + (rand() % (abs((a - b)) + 1));
}


#endif //HW1_RND_H