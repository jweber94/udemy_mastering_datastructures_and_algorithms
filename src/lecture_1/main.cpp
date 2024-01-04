#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

int main() {
    std::cout << "Hello World!\n";
    int foo = 23;
    std::string bar = boost::lexical_cast<std::string>(foo);
    std::cout << "bar is " << bar << std::endl;

    return 0;
}