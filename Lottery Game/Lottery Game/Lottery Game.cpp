#include<iostream>
#include <stdlib.h>
#include <time.h>


int main()
{
	int option, option2;



	std::cout << "  _     _____ _____ _____ _____________   __  _____   ___  ___  ___ _____ " << std::endl;
	std::cout << " | |   |  _  |_   _|_   _|  ___| ___ \\ \\ / / |  __ \\ / _ \\ |  \\/  ||  ___| " << std::endl;
	std::cout << " | |   | | | | | |   | | | |__ | |_/ /\\ V /  | |  \\// /_\\ \\| .  . || |__  " << std::endl;
	std::cout << " | |   | | | | | |   | | |  __||    /  \\ /   | | __ |  _  || |\\/| ||  __| " << std::endl;
	std::cout << " | |___\\ \\_/ / | |   | | | |___| |\\ \\  | |   | |_\\ \\| | | || |  | || |___ " << std::endl;
	std::cout << " \\_____/\\___/  \\_/   \\_/ \\____/\\_| \\_| \\_/   \\_____/\\_| |_/\\_|  |_/\\____/ " << std::endl;

	std::cout << "Choose an option" << std::endl;
	std::cout << "1.Start game" << std::endl;
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
			int guess = 0;
			int I[7], A[7], count, count1, temp_I, temp_A; //user inputs followed by Computer inputs
			std::cout << " _    _ _____ _     _____ ________  ___ _____ " << std::endl;
			std::cout << "| |  | |  ___| |   /  __ \\  _  |  \\/  ||  ___| " << std::endl;
			std::cout << "| |  | | |__ | |   | /  \\/ | | | .  . || |__ " << std::endl;
			std::cout << "| |/\\| |  __|| |   | |   | | | | |\\/| ||  __| " << std::endl;
			std::cout << "\\  /\\  / |___| |___| \\__/\\ \\_/ / |  | || |___ " << std::endl;
			std::cout << " \\/  \\/\\____/\\_____/\\____/\\___/\\_|  |_/\\____/ " << std::endl;
			std::cout << " Enter Numbers between 1 and 49" << std::endl;
			for (count = 1; count < 7; count++)
			{
				std::cout << "Enter number " << count << " ";
				std::cin >> I[count];
				while ((I[count] < 1) || (I[count] > 49)) // This checks the user inputs are between 1 and 49
				{
					std::cout << "Invalid Input. ";
					std::cout << "Try Again" << " ";
					std::cin >> I[count];
				}
				for (count1 = 1; count - count1; count1++) // This checks for duplicates in the arrary and asks the user to input a valid input.
				{
					if ((I[count] == I[count1]))
					{
						do
						{
							std::cout << "Invalid Input. ";
							std::cout << "Try Again" << " ";
							std::cin >> I[count];
						} while (I[count] == I[count1]);
					}
				}
				A[count] = (rand() % 49) + 1; // Generates 6 random lottery numbers and checks for duplicates
				if (count > 0)
				{
					for (count1 = 1; count - count1; count1++)
					{
						if (A[count] == A[count1])
						{
							do
							{
								A[count] = (rand() % 49) + 1;
							} while (A[count] == A[count1]);

						}

					}
				}
			}
			for (count = 1; count < 7; count++)// Sorts User Numbers into ascending order
			{

				for (count1 = count + 1; count1 < 7; count1++)
				{
					if (I[count] > I[count1])
					{
						temp_I = I[count];
						I[count] = I[count1];
						I[count1] = temp_I;
					}
				}
			}
			for (count = 1; count < 7; count++)// Sorts Computers Numbers into ascending order
			{
				for (count1 = count + 1; count1 < 7; count1++)
				{
					if (A[count] > A[count1])
					{
						temp_A = A[count];
						A[count] = A[count1];
						A[count1] = temp_A;
					}
				}
			}
			std::cout << "Your Numbers: "; // Tells the user his numbers
			for (count = 1; count < 7; count++)
			{

				std::cout << I[count] << " ";

			}
			for (count = 1; count < 7; count++)
			{

			}
			std::cout << std::endl;
			std::cout << "Computers Numbers: ";// Tells the user the computer numbers
			for (count = 1; count < 7; count++)
			{

				std::cout << A[count] << " ";
			}
			std::cout << std::endl;
			for (count = 1; count < 7; count++)//Following this checks both the users and computers numbers
			{
				for (count1 = 1; count1 < 7; count1++)
					if (A[count] == I[count1])

					{
						guess = guess + 1;//this adds 1 for each correct guess
					}
			}
			std::cout << "You got " << guess << " out of 6 correct" << std::endl;//Lets the user know how many he got correct

			std::cout << "______ _       _____   __   ___  _____   ___  _____ _   _ " << std::endl;
			std::cout << "| ___ \\ |     / _ \\ \\ / /  / _ \\|  __ \\ / _ \\|_   _| \\ | |" << std::endl;
			std::cout << "| |_/ / |    / /_\\ \\ V /  / /_\\ \\ |  \\// /_\\ \\ | | |  \ | |" << std::endl;
			std::cout << "|  __/| |    |  _  |\\ /   |  _  | | __ |  _  | | | | . ` |" << std::endl;
			std::cout << "| |   | |____| | | || |   | | | | |_\\ \\| | | |_| |_| |\\  |" << std::endl;
			std::cout << "\\_|   \\_____/\\_| |_/\\_/   \\_| |_/\\____/\\_| |_/\\___/\\_| \\_/" << std::endl;
			std::cout << "Choose Option" << std::endl;// allows the user to choose an option to play again or exit.
			std::cout << "1. PLAY AGAIN " << std::endl;
			std::cout << "2. Exit Game " << std::endl;
			std::cin >> option2;

		} while (option2 == 1);

		if (option2 == 2)
		{
			system("CLS"); // clears screen and exits game
			std::cout << " _____ _____  ___________________   _______ " << std::endl;
			std::cout << "|  __ \\  _  ||  _  |  _  \\ ___ \\ \\ / /  ___|" << std::endl;
			std::cout << "| |  \\/ | | || | | | | | | |_/ /\\ V /| |__  " << std::endl;
			std::cout << "| | __| | | || | | | | | | ___ \\ \\ / |  __| " << std::endl;
			std::cout << "| |_\\ \\ \\_/ /\\ \\_/ / |/ /| |_/ / | | | |___ " << std::endl;
			std::cout << "\\_____/\\___/  \\___/|___/ \\____/  \\_/ \\____/ " << std::endl;
			return 0;
		}
	}

}
		

				
		
		
