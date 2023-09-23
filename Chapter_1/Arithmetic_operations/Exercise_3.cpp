#include <iostream>

int main(int argc, char const *argv[]) {

	float exchangeRate {};	// exchange rate
	float sumRubles {};		// full amount in rubles

	std::cout << "Enter exchange rate: ";	// ask user for exchange rate
	std::cin >> exchangeRate;

	std::cout << "Enter sum rubles: ";		// request the user for the full amount in rubles
	std::cin >> sumRubles;

	const float outputSumDollar { static_cast<int>(sumRubles / exchangeRate * 100.0f) / 100.0f };

	std::cout << "Total: $" << outputSumDollar << std::endl;

	return 0;

}
