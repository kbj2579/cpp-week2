#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
std::string util(){
    std::string s = "";
    int a, b, c;
    while(1){
        a = rand() % 10;
        b = rand() % 10;
        c = rand() % 10;
        if (a != b && b != c && c != a) break;
    }
    
    s += std::to_string(a);
    s += std::to_string(b);
    s += std::to_string(c);
    
    return s;
}