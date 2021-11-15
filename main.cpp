#include <iostream>

double getInput();
char getOperation();

namespace operations {

	double add(const double x, const double y) {

		std::cout << "\n" << x << " + " << y << " = " << x + y;
		return x + y;

	}

	double sub(const double x, const double y) {

		std::cout << x << " - " << y << " = " << x - y;
		return x - y;

	}

	double mul(const double x, const double y) {

		std::cout << "\n" << x << " * " << y << " = " << x * y;
		return x * y;

	}

	double div(const double x, const double y) {

		std::cout << "\n" << x << " / " << y << " = " << x * y;
		return x / y;

	}
}

int main() {

	char repeat = { 'Y' };

	while (repeat == 'Y' || repeat == 'y') {
		double x{};
		double y{};
		char operation{};
		x = getInput();
		operation = getOperation();
		y = getInput();

		switch (operation) {
			case '+' :
					operations::add(x, y);
					break;
			case '-' :
					operations::sub(x, y);
					break;
			case '*' :
					operations::mul(x, y);
					break;
			case '/' :
					operations::div(x, y);
					break;
		}

		std::cout << "\nRepeat? : ";
		std::cin >> repeat;

	}
	std::cout << "\nThank you!";
	return 0;
}




double getInput() {
	double input{};
	std::cout << "\nEnter a number : ";
	std::cin >> input;
	return input;
}



char getOperation() {

	char operation{' '};

	std::cout << "\nEnter an operation : + - * / or any other key to exit : ";
	std::cin	>> operation;

	return operation;

}

