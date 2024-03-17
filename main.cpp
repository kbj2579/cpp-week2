#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
int game(int i, int j, char a, char b);
std::string util();

int main(){
    srand((unsigned)time(NULL));
    std::string ans = "";
    std::string guess = "";
    int strike = 0, ball = 0;
    
    ans = util();
    std::cout << "Answer is " << ans << '\n';
    while(1){
        std::cout << "Enter a guess: ";
        std::cin >> guess;
        strike = 0;
        ball = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(game(i, j, ans[i], guess[j]) == 1) {
                    strike++;
                }
                else if(game(i, j, ans[i], guess[j]) == 2) {
                    ball++;
                }
            }
        }

        if(strike == 3){
                std::cout << "You win!" << '\n';
                break;
        }
        std::cout << "Strikes: " << strike;
        std::cout << ", Balls: " << ball << '\n';
    }
    
}
