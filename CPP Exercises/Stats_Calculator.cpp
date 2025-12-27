#include <iostream>

int main() {

    std::cout << "Enter your first integer: ";
    int num1{};
    std::cin >> num1;

    std::cout << "Enter your second integer: ";
    int num2{};
    std::cin >> num2;

    std::cout << "Enter your third integer: ";
    int num3{};
    std::cin >> num3;

    std::cout << "Your sum is: \n" << num1 + num2 + num3 << "\n";
    std::cout << "The average of the three integers is: \n" << (num1 + num2 + num3) / 3 << "\n";
    std::cout << "Here's what your three integers multiplied and subtracted by integer 3 and it averaged is: \n"
    << ((num1 * num2 * num3) - num3) / 3 << "\n";

    return 0;
}
