#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <iostream>


// #include "Array.tpp"


template <typename T>
class Array
{
    private:
        T *elements;
        std::size_t len; 
    public:

        class OutOfBoundsException : public std::exception {
            public:
                const char* what() const throw();
        };

        Array();
        Array(unsigned int n);
        Array(const Array<T>& other);
        Array<T>& operator=(const Array<T>& other);
        T& operator[](std::size_t index);
        const T& operator[](std::size_t index) const;

        std::size_t size() const;
        ~Array();
};

#include "Array.tpp"

#endif