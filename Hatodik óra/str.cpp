#include <string>
#include <iostream>

void f()
{
    std::string str = "Hello";
    str.push_back( '!' );
    str.push_back( '!' );
    str.push_back( '!' );

    std::cout << str << std::endl;
}

int main()
{
    f();
}