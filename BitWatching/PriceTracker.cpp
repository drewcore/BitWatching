#include "pch.h"
#include "PriceTracker.h"
#include <string>


PriceTracker::PriceTracker()
{
}

void PriceTracker::SetSource(int newSource)
{
	throw ref new Platform::NotImplementedException();

	SourceURL = newSource;
}

float PriceTracker::CheckPrice()
{
	return 0.0f;
}
