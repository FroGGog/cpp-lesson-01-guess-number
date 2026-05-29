#include <iostream>  // для cout и cin
#include <cstdlib>   // для rand() и srand()
#include <ctime>     // для time()
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess = 0;
    int point = 0; //попытки
    bool playAgain = true; //ребут
    
    while (playAgain) {
        
        secret = rand() % 100 + 1;
        point = 0;
        guess = 0;

        while (guess != secret) {
            std::cout << "Угадай число: ";
            std::cin >> guess;
            point = point + 1;
            if (guess > secret) {
                std::cout << " Моё число меньше!" << "\n";
            }

            if (guess < secret) {
                std::cout << " Моё число больше!" << "\n";
            }


            if (guess == secret) {
                std::cout << " Ты чемпик!" << "\n";
                std::cout << "Количество попыток: " << point << "\n";
                std::cout << "Сыграть ещё раз? (1 - да, 0 - нет):" << "\n";
                std::cin >> playAgain;
            }
        
        }
    } 
    return 0;
}