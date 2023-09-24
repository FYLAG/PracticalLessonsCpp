#include <iostream>

/*
	Create a currency exchange program: the program requests the current exchange rate
	of the dollar to the ruble, and the number of units (rubles) to convert
	and displays the converted amount in dollars on the console.
*/

int main(int argc, char const *argv[]) {

	float exchangeRate { };		// Exchange rate
	float sumRubles { };		// Full amount in rubles

	std::cout << "Enter exchange rate: ";	// Ask user for exchange rate
	std::cin >> exchangeRate;

	std::cout << "Enter sum rubles: ";		// Request the user for the full amount in rubles
	std::cin >> sumRubles;

	const float outputSumDollar { static_cast<int>(sumRubles / exchangeRate * 100.0f) / 100.0f };

	std::cout << "Total: $" << outputSumDollar << std::endl;

	return 0;

}