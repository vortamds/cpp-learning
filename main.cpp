#include <iostream>
int main() {
    int a = 10;
    int b = 3;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    // a++;
    std::cout << "a++ = " << a << std::endl;
    std::cout << "a < b = " << (a < b) << std::endl;
    std::cout << "a == b = " << (a == b) << std::endl;
    std::cout << "(a > b) && (b > 0) = " << ((a > b) && (b > 0)) << std::endl;
    std::string name = "milad";
    int year = 2009;
    double height = 1.72;
    char first_latter = 'A';
    bool is_programmer = true;
    unsigned long long national_code = 123456;
    std::cout << "Name = " << name << std::endl;
    std::cout << "Year = " << year << std::endl;
    std::cout << "Height = " << height << std::endl;
    std::cout << "First Latter = " << first_latter << std::endl;
    std::cout << "Programmer = " << is_programmer << std::endl;
    std::cout << "National Code = " << national_code << std::endl;
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