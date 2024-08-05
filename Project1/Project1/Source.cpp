#include <iostream>

// List of all the functions (Function declaration)
void prtMainmenu();
int inpMainmenu();
void inpMainmenu_processing(int userInp);
void prtHelp();
void prtExchangeStats();
void makeOffer();
void makeBid();
void prtWallet();
void gotoNextTimeFrame();

// Global Variables
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

void prtHelp() {
	std::cout << "\nHelp-You must make lots of money\n\n";
}

void prtExchangeStats() {
	std::cout << "\nMarket looks aight\n\n";
}

void makeOffer() {
	std::cout << "\nMake an offer\n\n";
}

void makeBid() {
	std::cout << "\nMake a bid\n\n";
}

void prtWallet() {
	std::cout << "\nYou have nothing atm\n\n";
}

void gotoNextTimeFrame() {
	std::cout << "\nGoing to next time frame.\n\n";
}

void inpMainmenu_processing(int userInp) {
		switch(userInp) {
		case 1:
			prtHelp();
			break;
		
		case 2:
			prtExchangeStats();
			break;

		case 3:
			makeOffer();
			break;

		case 4:
			makeBid();
			break;

		case 5:
			prtWallet();
			break;

		case 6:
			gotoNextTimeFrame();
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
 