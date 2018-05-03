#pragma once
#include <iostream>
#include <string>

using namespace std;
class Coin
{
public:
	Coin();
	Coin(int);
	~Coin();

	void toss();

	string sideup()
	{

		return sideUp;
	}


private:
	string sideUp;
};

