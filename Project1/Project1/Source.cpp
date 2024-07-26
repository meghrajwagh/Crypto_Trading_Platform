#include <iostream>

// List of all the functions (Function declaration)
// Comment
void prtMainmenu();
int inpMainmenu();
void inpMainmenu_processing(int userInp);
bool cond = true;
int main() {
	while (cond) {
		prtMainmenu();
		inpMainmenu_processing(inpMainmenu());
	}
}

//Function Definitions

void prtMainmenu() {
	//Making a Menu for the user
	std::cout << "------------------Menu------------------\n";
	std::cout << "1. Help\n";
	std::cout << "2. Print exchange stats\n";
	std::cout << "3. Make an Offer\n";
	std::cout << "4. Make a bid\n";
	std::cout << "5. Pring wallet\n";
	std::cout << "6. Continue\n";
	std::cout << "9. Exit\n";
	std::cout << "========================================\n";
	std::cout << "Choose 1-6 or 9: ";
}

int inpMainmenu() {
	int userInp;
	std::cin >> userInp;
	std::cout << "You chose: " << userInp<< std::endl;
	return userInp;
}


void inpMainmenu_processing(int userInp) {
		switch(userInp) {
		case 1:
			std::cout << "\nHelp-You must make lots of money\n\n";
			break;
		
		case 2:
			std::cout << "\nMarket looks aight\n\n";
			break;

		case 3:
			std::cout << "\nMake an offer\n\n";
			break;

		case 4:
			std::cout << "\nMake a bid\n\n";
			break;

		case 5:
			std::cout << "\nYou have nothing atm\n\n";
			break;

		case 6:
			std::cout << "\nGoing to next time frame.\n\n";
			break;

		case 9:
			cond = false;
			std::cout << "\nExiting the Program.\nThank You\n";
			break;
					
		default:
			std::cout << "\nPlease enter a valid input. \n\n";
			break;
		}
}
 