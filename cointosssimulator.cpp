#include <iostream>
#include <string>
#include <cstdlib>	
#include <ctime>
#include <iomanip>

#include "Coin.h"


using namespace std;
int heads = 0;
int tails = 0;
double balance = 0.0;
double nbalance = 1.00;



int main()
{
	
	srand(time(0));
	
	Coin Quarter;
	Coin Dime;
	Coin Nickle;

	
	
	
		while (balance < nbalance) {
			{
				cout << setprecision(2) <<balance << endl;

				Quarter.toss();
				Dime.toss();
				Nickle.toss();

				if (Quarter.sideup() == "Heads")
				{
					heads++;
					balance = +balance + 0.25;
					cout << "Balance of .25 added " << endl;

					if (balance == nbalance)
					{
						cout << "Your balance is: " << balance << endl;
						cout << "You win!!!!!" << endl;
						return 0;

					}

						if (balance > nbalance)
						{
						cout << "Your balance is: " << balance << endl;
						cout << "You lose..." << endl;
						return 0;


						}

				}

				if (Quarter.sideup() == "Tails")
				{
					tails++;
				}

				if (Dime.sideup() == "Heads")
				{
					heads++;
					balance = +balance + 0.10;
					cout << "Balance of .10 added " << endl;
					if (balance == nbalance)
					{
						cout << "Your balance is: " << balance << endl;
						cout << "You win!!!!!" << endl;
						return 0;
						

					}

					if (balance > nbalance)
					{
						cout << "Your balance is: " << balance << endl;
						cout << "You lose..." << endl;
						return 0;
					}

				}

				if (Dime.sideup() == "Tails")
				{
					tails++;
				}

				if (Nickle.sideup() == "Heads")
				{
					heads++;
					balance = +balance + 0.05;
					cout << "Balance of .05 added " << endl;
					if (balance == nbalance)
					{
						cout << "Your balance is: " << balance << endl;
						cout << "You win!!!!!" << endl;
						return 0;
						

					}

					if (balance > nbalance)
					{
						cout << "Your balance is: " << balance << endl;
						cout << "You lose..." << endl;
						return 0;

					}

				}

				if (Nickle.sideup() == "Tails")
				{
					tails++;
				}
			}
		}
	


	
	

	

	return 0;
}