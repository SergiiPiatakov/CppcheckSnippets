#include <cstdlib>
#include <cstring>
#include <iostream>


struct T
{
    T (int i) : i  {i}
    {
    }

    T & operator = (T & that)
    {
        this->i  = that.i;
        return that;
    }

    int i;
};


void printT (const T & t)
{
    std::cout << "i: " << t.i << std::endl;
};


int main (int argc, char ** argv)
{
    int i = 0;

    T a (1);
    T b (2);
    std::memset (& a, 0x00, sizeof (T) );
    std::memset (& b, 0xff, sizeof (T) );
    b = a;

    i = 2;

    T * c = nullptr;
    switch (b.i) {
        case 0:
            a.i++;
        case 1:
            a.i--;
            break;
        case 2:
            return EXIT_FAILURE;
            b.i++;
        default:
            c = new T (1);
    }
    c->i++;


    return EXIT_SUCCESS;
}
