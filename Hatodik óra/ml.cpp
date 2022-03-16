#include <iostream>

void f()
{
    int i = 7;
    double d = 3.54;
    ++d;
    int* p = &i;
    std::cout << p << std::endl;
    p = new int[ i ];
    std::cout << p << std::endl;
    delete [] p; //Enélkül valgrinddel futtatva hibát fedezhetünk fel, ami alapból észre se vehető!
}

int main()
{
    f();
}