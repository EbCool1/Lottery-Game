#pragma once

inline int main()
{
	int, option, Credit = 200, gain, loss;
	Credit += gain;
	Credit -= loss;
	std::cout << "  _     _____ _____ _____ _____________   __  _____   ___  ___  ___ _____ " << std::endl;
	std::cout << " | |   |  _  |_   _|_   _|  ___| ___ \\ \\ / / |  __ \\ / _ \\ |  \\/  ||  ___| " << std::endl;
	std::cout << " | |   | | | | | |   | | | |__ | |_/ /\\ V /  | |  \\// /_\\ \\| .  . || |__  " << std::endl;
	std::cout << " | |   | | | | | |   | | |  __||    /  \\ /   | | __ |  _  || |\\/| ||  __| " << std::endl;
	std::cout << " | |___\\ \\_/ / | |   | | | |___| |\\ \\  | |   | |_\\ \\| | | || |  | || |___ " << std::endl;
	std::cout << " \\_____/\\___/  \\_/   \\_/ \\____/\\_| \\_| \\_/   \\_____/\\_| |_/\\_|  |_/\\____/ " << std::endl;
	std::cout << "   Credits:" << Credit << std::endl;
	std::cout << "Choose an option" << std::endl;
	std::cout << "1.Start game cost is 20 credits" << std::endl;
	std::cout << "2.Exit game" << std::endl;
	std::cin >> option;
	if (option == 2)
	{
		system("CLS"); // clears the first screen
		std::cout << " _____ _____  ___________________   _______ " << std::endl;
		std::cout << "|  __ \\  _  ||  _  |  _  \\ ___ \\ \\ / /  ___|" << std::endl;
		std::cout << "| |  \\/ | | || | | | | | | |_/ /\\ V /| |__  " << std::endl;
		std::cout << "| | __| | | || | | | | | | ___ \\ \\ / |  __| " << std::endl;
		std::cout << "| |_\\ \\ \\_/ /\\ \\_/ / |/ /| |_/ / | | | |___ " << std::endl;
		std::cout << "\\_____/\\___/  \\___/|___/ \\____/  \\_/ \\____/ " << std::endl;
		return 0;
	}
	else if (option == 1)
	{
		do
		{

			system("CLS"); // clears the first screen
			srand(time(0));
			int tries = 0;
			int I1, I2, I3, I4, I5, I6; //user inputs
			int A1 = rand() % 50 + 1; // geneerates a random interger between 1 and 49.
			int A2 = rand() % 50 + 1;
			int A3 = rand() % 50 + 1;
			int A4 = rand() % 50 + 1;
			int A5 = rand() % 50 + 1;
			int A6 = rand() % 50 + 1;
			std::cout << " _    _ _____ _     _____ ________  ___ _____ " << std::endl;
			std::cout << "| |  | |  ___| |   /  __ \\  _  |  \\/  ||  ___| " << std::endl;
			std::cout << "| |  | | |__ | |   | /  \\/ | | | .  . || |__ " << std::endl;
			std::cout << "| |/\\| |  __|| |   | |   | | | | |\\/| ||  __| " << std::endl;
			std::cout << "\\  /\\  / |___| |___| \\__/\\ \\_/ / |  | || |___ " << std::endl;
			std::cout << " \\/  \\/\\____/\\_____/\\____/\\___/\\_|  |_/\\____/ " << std::endl;
			Credit - 20 = loss;
			std::cout << "Credits:" << Credit << std::endl;
			std::cout << "Pick Six Numbers Between 1 & 49" << std::endl;
			std::cout << "Enter First number"; std::cin >> I1;
			std::cout << "Enter Second number"; std::cin >> I2;
			std::cout << "Enter Third number"; std::cin >> I3;
			std::cout << "Enter Fourth number"; std::cin >> I4;
			std::cout << "Enter Fifth number"; std::cin >> I5;
			std::cout << "Enter Sixth number"; std::cin >> I6;


			std::cout << A1 << " ";
			std::cout << A2 << " ";
			std::cout << A3 << " ";
			std::cout << A4 << " ";
			std::cout << A5 << " ";
			std::cout << A6 << " " << std::endl;
		} while (Credit > 0);

	}
}
