#include <iostream>

void f()
{
    int i = 6;
    int* p = &i;
    std::cout << i << ' ' << p << std::endl;
}

int main()
{
    f();
}