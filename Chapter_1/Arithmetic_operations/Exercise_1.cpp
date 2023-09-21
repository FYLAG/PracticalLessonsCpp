#include <iostream>

// Create a program that converts meters to kilometers.
int main(int argc, char const *argv[]) {

	const int km_convert_m = 1000;

    int meters;

    std::cout << "Enter a number of meters: ";
    std::cin >> meters;

    const int result_kilometers = meters / km_convert_m;
    const int result_meters = meters % km_convert_m;

    std::cout << "Total " << result_kilometers << " kilometers and " << result_meters << " meters." << std::endl;

	return 0;
}
