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

//Department: Logic --> Tested( both '+' & '-' are working )
int calculateResult(int e1, int e2, char os) {

    if (os == '+') {

        return e1 + e2;
    }
    else if (os == '-') {
        return e1 - e2;
    }

     std::cout << "Error: Invalid operator entered." << '\n';

    return 0;
}

//Department:output
void printResult(int finalValue) {

    //void does not need a function
}

int main() {


   // Testing the calculateResult function
     // FIX: Pass THREE arguments: 10, 5, and '-'
    int finalValue = calculateResult(10, 5, '-'); 

    // Test the identifier 'finalValue'
    if (finalValue == 15) {
        std::cout << "Test Passed!" << std::endl;
    } else {
        std::cout << "Test Failed. Expected 15, got " << finalValue << std::endl;
    }

    return 0;
}
