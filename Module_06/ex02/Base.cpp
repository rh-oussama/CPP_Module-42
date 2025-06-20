#include "Base.hpp"

Base * generate(void)
{
    srand(static_cast<unsigned int>(time(0)));
    int random = rand() % 3;
    switch (random)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    };

    return NULL;
}


void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "this is 'A' class." << std::endl;
    else if  (dynamic_cast<B *>(p))
        std::cout << "this is 'B' class." << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "this is 'C' class." << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "this is 'A' class." << std::endl;
    }
    catch (std::bad_cast &e) {}

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "this is 'B' class." << std::endl;
    }
    catch (std::bad_cast &e) {}

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "this is 'C' class." << std::endl;
    }
    catch (std::bad_cast &e) {}
}