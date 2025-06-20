#include "Base.hpp"

int main()
{
    Base* ptr = generate();

    std::cout << "Identifying using pointer:" << std::endl;
    identify(ptr);

    std::cout << "Identifying using reference:" << std::endl;
    identify(*ptr);

    delete ptr;

    return 0;
}
