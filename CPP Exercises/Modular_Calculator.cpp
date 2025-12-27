#include <iostream>

//Department: Input for user --> Tested
int getUserInput() {

    std::cout << "Enter a number. ";
    int input{};
    std::cin >> input;

    return input;
}

//Department: Input for math symbol --> Tested
char getMathematicalOperator() {

    std::cout << "Is the number + or - ? \n";
    char symbol{};
    std::cin >> symbol;


    return symbol;
}

//Department: Logic
int calculateResult(int e1, int e2, char op) {

    return 0;
}

//Department:output
void printResult(int finalValue) {

    //void does not need a function
}

int main() {

    char symbol = getMathematicalOperator();

    std::cout << "Test result of getUserInput: " << symbol << "\n";

    return 0;
}
