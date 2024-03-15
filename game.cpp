#include <iostream>
int game(int i, int j, char a, char b){
    if(a == b){
        if(i == j) {
            return 1;
        }
        else {
            return 2;
        }
    }
    return 0;
}
