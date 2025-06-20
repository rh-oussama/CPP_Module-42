#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

class Base
{
    public:
        virtual ~Base() {};
};

class A : public Base
{
    public:
        virtual ~A() {};
};

class B : public Base
{
    public:
        virtual ~B() {};
};

class C : public Base
{
    public:
        virtual ~C() {};
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif