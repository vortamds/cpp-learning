#include <iostream>

int main() {
    double num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << "Subtract: " << num1 - num2 << std::endl;
    std::cout << "Multiply: " << num1 * num2 << std::endl;
    std::cout << "Divide: " << num1 / num2 << std::endl;

    return 0;
}