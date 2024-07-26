#include <iostream>

// List of all the functions (Function declaration)
void prtMainmenu();
int inpMainmenu();
void inpMainmenu_processing(int userInp);

int main() {
	while (true) {
		prtMainmenu();
		inpMainmenu_processing(inpMainmenu());
	}
}

//Function Definitions

void prtMainmenu() {
	//Making a Menu for the user
	std::cout << "------------------Menu------------------" << std::endl;
	std::cout << "1. Help" << std::endl;
	std::cout << "2. Print exchange stats" << std::endl;
	std::cout << "3. Make an Offer" << std::endl;
	std::cout << "4. Make a bid" << std::endl;
	std::cout << "5. Pring wallet" << std::endl;
	std::cout << "6. Continue" << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "Choose 1-6: ";
}

int inpMainmenu() {
	int userInp;
	std::cin >> userInp;
	std::cout << "You chose: " << userInp<< std::endl;
	return userInp;
}


void inpMainmenu_processing(int userInp) {
		if (userInp== 1) {
			std::cout << "Help-You must make lots of money\n" << std::endl;
		}
		else if (userInp == 2) {
			std::cout << "Market looks aight\n" << std::endl;
		}
		else if (userInp == 3) {
			std::cout << "Make an offer\n" << std::endl;
		}
		else if (userInp == 4) {
			std::cout << "Make a bid\n" << std::endl;
		}
		else if (userInp == 5) {
			std::cout << "You have nothing atm\n" << std::endl;
		}
		else if (userInp == 6) {
			std::cout << "Going to next time frame.\n" << std::endl;
		}
		else {
			std::cout << "Please enter a valid input. \n" << std::endl;
		}
}
 