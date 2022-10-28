#include <iostream>
#include <string>

int main() {
	std::string exponenta, mantisa, fractional_str;
	char point = '.';
	double fractional_number;

	std::cout << "Input fractional number:";
	std::cin >> exponenta >> mantisa;

	fractional_str = exponenta + point + mantisa;
	fractional_number = std::stod(fractional_str);

	std::cout << std::endl << "Fractional number = " << fractional_number;
}