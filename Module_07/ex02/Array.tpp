#include "Array.hpp"

template <typename T>
Array<T>::Array() : elements(NULL), len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : len(n) {
    elements = new T[n]();

}

template <typename T>
Array<T>::Array(const Array<T>& other) : len(other.len) {
    elements = new T[len];
    for (std::size_t i = 0; i < len; i++) {
        elements[i] = other.elements[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other)
    {
    	if (elements != NULL)
    		delete[] elements;
    	len = other.len;
    	elements = new T[len];
    	for (std::size_t i = 0; i < len; i++) {
    		elements[i] = other.elements[i];
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](std::size_t index) {
    if (index >= len) {
        throw OutOfBoundsException();
    }
    return elements[index];
}

template <typename T>
const T& Array<T>::operator[](std::size_t index) const {
    if (index >= len) {
        throw OutOfBoundsException();
    }
    return elements[index];
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
    return "Index is out of bounds";
}


template <typename T>
std::size_t Array<T>::size() const {
    return len;
}

template <typename T>
Array<T>::~Array() {
    if (elements != NULL)
    	delete[] elements;
}

