#include <iostream>
#include <string>
int Strikes(std::string guess, std::string answer) {
    int strikes = 0;
    for (int i = 0; i < 3; ++i) {
        if (guess[i] == answer[i]) {
            strikes++;
        }
    }
    return strikes;
}

int Balls(std::string guess, std::string answer) {
    int balls = 0;
    if(guess[0] == answer[1] || guess[0] == answer[2]) {
        balls++;
    }
    if(guess[1] == answer[0] || guess[1] == answer[2]) {
        balls++;
    }
    if(guess[2] == answer[0] || guess[2] == answer[1]) {
        balls++;
    }
    return balls;
}
void Game() {
    std::cout << "Enter a answer: ";
    std::string answer;
    std::cin >> answer;
    while (1) {
        std::string guess;
        std::cout << "Enter a guess: ";
        std::cin >> guess;
        
        int strikes = Strikes(guess, answer);
        int balls = Balls(guess, answer);

        if (strikes == 3) {
            std::cout << "You Win!" << std::endl;
            break;
        }
        else std::cout << "Strikes: " << strikes << ", Balls: " << balls << std::endl;
    }
}
