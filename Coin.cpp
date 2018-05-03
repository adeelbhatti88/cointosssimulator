#include "Coin.h"
#include <iostream>
#include <string>
#include <cstdlib>	
#include <ctime>



Coin::Coin()
{
	

}

Coin::Coin(int r)
{
	if (r == 1)
	{
		sideUp = "Heads";
	}

	if (r == 2)
	{
		sideUp = "Tails";
	}

}


void Coin::toss()
{
	int random;

	

	random = 1 + (rand() % 2);

	if (random == 1)
	{
		sideUp = "Heads";
	}

	if (random == 2)
	{
		sideUp = "Tails";
	}

	

}


Coin::~Coin()
{
}
