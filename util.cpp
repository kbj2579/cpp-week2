#include <iostream>
#include<string>
#include <stdlib.h>
#include <time.h>
std::string util(){
    std::string s = "";
    int a, b, c;
    a = rand() % 10;
    b = rand() % 10;
    c = rand() % 10;
    s += std::to_string(a);
    s += std::to_string(b);
    s += std::to_string(c);
    
    return s;
}