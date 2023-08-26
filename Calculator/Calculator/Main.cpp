#include <iostream>

void lines(int n) {
	std::string line(n, '=');
	std::cout << line << std::endl;
}

int main()
{
	int op;
	float n1;
	float n2;

	lines(20);
	std::cout << "C++ Calculator" << std::endl;
	lines(20);

	std::cout << "1. Add\n2. Subtract\n3. Multiply\n4. Division" << std::endl;
	std::cout << "Choose your operation: ";
	std::cin >> op;

	std::cout << "Enter first number: ";
	std::cin >> n1;

	std::cout << "Enter second number: ";
	std::cin >> n2;

	std::cout << "The result is: ";
	switch (op) {
		case 1:
			std::cout << n1 + n2 << std::endl;
			break;
		case 2:
			std::cout << n1 - n2 << std::endl;
			break;
		case 3:
			std::cout << n1 * n2 << std::endl;
			break;
		case 4:
			std::cout << n1 / n2 << std::endl;
			break;
	}
	lines(20);
	std::cin.get();
}