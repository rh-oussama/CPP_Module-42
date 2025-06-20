#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "iostream"
#include  <inttypes.h>
#include "Data.hpp"

class Serializer
{
    public:
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &other);
        ~Serializer();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


#endif