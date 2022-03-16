#include <iostream>

void f()
{
    int i = 6;
    int* p = &i;
    std::cout << i << ' ' << p << std::endl;

    delete p; // Ez hibát dob mivel a változók felszabadítása automatikusan történik
}

int main()
{
    f();
}