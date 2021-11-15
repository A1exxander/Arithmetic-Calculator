#include <iostream>

void	calculator();

double	getNumber(std::string);
char	getOperation(std::string);
double	add(double&, double&);
double	sub(double&, double&);
double	mul(double&, double&);
double	div(double&, double&);

int main() {

	calculator();
	
}

void calculator() {

	double numberOne{};
	double numberTwo{};
	double answer{};
	char operation{ ' ' };

	numberOne = getNumber("Enter a number : ");

	operation = getOperation("\nEnter an operation (+, -, *, / ) : ");

	numberTwo = getNumber("Enter a second number : ");


	while (operation == '+' || operation == '-' || operation == '*' || operation == '/') {


		switch (operation) {

		case '+':
			answer = add(numberOne, numberTwo);
			break;

		case '-':
			answer = sub(numberOne, numberTwo);
			break;

		case '*':
			answer = mul(numberOne, numberTwo);
			break;

		case '/':
			answer = div(numberOne, numberTwo);
			break;
		
		}

		operation = getOperation("\nEnter an operation (+, -, *, / ) | C to clear the first number | Any other key to exit : ");

		if (operation == 'C' || operation == 'c'){

			numberOne = getNumber("Enter a number : ");
			operation = getOperation("\nEnter an operation (+, -, *, / ) : ");
			numberTwo = getNumber("Enter a second number : ");

		}
		else if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {

			numberOne = answer;
			numberTwo = getNumber("\nEnter a second number : ");

		}
		else
			std::cout << "\nExiting\n";
	}

}


double getNumber(std::string message){

	double numberOne{};

	std::cout << message;
	std::cin >> numberOne;

	return numberOne;

}

char getOperation(std::string message) {

	char operation{' '};

	std::cout	<< message;
	std::cin	>> operation;

	return operation;

}

double add(double& x, double& y ){

	std::cout << "\n" << x << " + " << y << " = " << x + y;
	return x + y;

}

double sub(double& x, double& y) {

	std::cout << x << " - " << y << " = " << x - y;
	return x - y;

}

double mul(double& x, double& y) {

	std::cout << "\n" << x << " * " << y << " = " << x * y;
	return x * y;

}

double div(double& x, double& y) {

	std::cout << "\n" << x << " / " << y << " = " << x * y;
	return x / y;

}