#include <iostream>
#include "Calculator.h"
#include "Logger.h"

int main() {
    std::cout << "Complex Code Example" << std::endl;

    Calculator calculator;
    int result = calculator.add(5, 7);

    Logger::log("The sum is: " + std::to_string(result));

    return 0;
}
