#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int main() {
    Data d;
    d.id = 42;
    d.value = 3.14f;

    std::cout << "Original Data object:" << std::endl;
    std::cout << "  id: " << d.id << std::endl;
    std::cout << "  value: " << d.value << std::endl;
    std::cout << "  addr: " << &d << std::endl;
    Data* ptr = &d;
    uintptr_t raw = Serializer::serialize(ptr);
    std::cout << "Serialized pointer: " << raw << std::endl;
    Data* deserializedPtr = Serializer::deserialize(raw);
    std::cout << "Deserialized Data object:" << std::endl;
    std::cout << "  id: " << deserializedPtr->id << std::endl;
    std::cout << "  value: " << deserializedPtr->value << std::endl;
    std::cout << "  addr: " << deserializedPtr << std::endl;



    return 0;
}