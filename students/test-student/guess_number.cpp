#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // Инициализируем генератор случайных чисел
    // time(0) возвращает текущее время в секундах
    std::srand(std::time(0));
    
    bool playAgain = true;
    
    while (playAgain)
    {
        int secretNumber = std::rand() % 100 + 1;
        int guess = 0;
        int attempts = 0;
        
        std::cout << "Я загадал число от 1 до 100. Попробуй угадать!\n" << std::endl;
        
        // Основной цикл: крутится пока не угадаем
        while (guess != secretNumber)
        {
            std::cout << "Твоя догадка: ";
            std::cin >> guess;
            attempts++;
            
            if (guess > secretNumber)
            {
                std::cout << "Моё число МЕНЬШЕ!\n" << std::endl;
            }
            else if (guess < secretNumber)
            {
                std::cout << "Моё число БОЛЬШЕ!\n" << std::endl;
            }
        }
        
        std::cout << "Поздравляю! Ты угадал число " << secretNumber
                  << " за " << attempts << " попыток!\n" << std::endl;
        
        std::cout << "Сыграть ещё раз? (1 - да, 0 - нет): ";
        int answer;
        std::cin >> answer;
        playAgain = (answer == 1);
        
        std::cout << std::endl;
    }
    
    std::cout << "Спасибо за игру! До встречи." << std::endl;
    
    return 0;
}