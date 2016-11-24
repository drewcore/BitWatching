#pragma once
#include <string>
using namespace std;
ref class PriceTracker sealed
{
public:
	// constructor
	PriceTracker();

	// set the source for the tracker to look to
	void SetSource(int newSource);
	
	// checks current price 
	float CheckPrice();


private:
	int SourceURL;
	float LastCheckedPrice;
	float CurrentPrice;
};

