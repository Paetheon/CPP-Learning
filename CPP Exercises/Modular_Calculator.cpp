#include <iostream>


int getUserInput() {

    std::cout << "Enter a number. ";
    int input{};
    std::cin >> input;

    return input;
}


char getMathematicalOperator() {

    std::cout << "Is the number + or - ? \n";
    char symbol{};
    std::cin >> symbol;


    return symbol;
}


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


void printResult(int finalValue) {

  std::cout << "The final calculation is: " << finalValue << std::endl;
}

int main() {

    int  e1 = getUserInput();
    int  e2 = getUserInput();
    char os = getMathematicalOperator();
    
    int result = calculateResult(e1, e2, os);

    printResult(result);

    return 0;
}
