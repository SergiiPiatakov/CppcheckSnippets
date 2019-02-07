#include <cstdlib>
#include <cstring>
#include <iostream>

struct Base
{
    Base (size_t n)
        : data {new char [n]}
    {
    }

    ~Base ()
    {
        delete [] data;
    }

    char * data {nullptr};

    virtual void DoStuff ()
    {
    }
};

struct Derived : Base
{
    Derived (size_t n)
        : Base (n)
    {
    }

    ~Derived ()
    {
    }

    int flag {0};
    
    void DoStuff () override
    {
    }
};

int main (int, char **)
{
    Base * d = new Derived (42);

    delete d;

    return EXIT_SUCCESS;
}
