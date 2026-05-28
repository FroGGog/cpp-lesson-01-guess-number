#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	srand(time(0));
	bool playagain = true;
	int repeat = 0;
	int secret = rand() % 100 + 1;
	int guess = 0;
	while (playagain)
	{
		secret = rand() % 100 + 1;
		std::cout << " компутер загадал число " << secret << "\n";
		repeat = 0;
		guess = 0;

		while (guess != secret)
		{
			std::cout << " угадай число " << "\n";
			std::cin >> guess;
			repeat++;
			if (guess > secret)
			{
				std::cout << "МОЁ ЧИСЛО МЕНЬШЕ" << "\n";
			}
			if (guess == secret)
			{
				std::cout << "ПОБЕДА,кол-во попыток " << repeat << '\n';
				std::cout << "СЫГРАЕМ ЕЩЕ РАЗ " << "\n";
				std::cin >> playagain;
			}
			if (guess < secret)
			{
				std::cout << "надо больше" << "\n";
			}
		}
	}
	return 0;
}