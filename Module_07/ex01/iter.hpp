#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, std::size_t len, void (*fun_ptr)(T&)) {
    for (std::size_t i = 0; i < len; i++) {
        fun_ptr(array[i]);
    }
}

#endif