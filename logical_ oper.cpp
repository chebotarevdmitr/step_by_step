#include <iostream>

int main() {
    bool A = true;
    bool B = false;

    // Демонстрация логических операций
    std::cout << std::boolalpha; // Включение логического форматирования
    std::cout << "A && B = " << (A && B) << std::endl; // Ожидаемый результат: false
    std::cout << "A || B = " << (A || B) << std::endl; // Ожидаемый результат: true
    std::cout << "!A = " << (!A) << std::endl;         // Ожидаемый результат: false
    std::cout << "!B = " << (!B) << std::endl;         // Ожидаемый результат: true

    int firstNumber = 10;
    int secondNumber = 11;

    // Проверка условий для числовых переменных
    std::cout << "firstNumber < secondNumber: " << (firstNumber < secondNumber) << std::endl; // Ожидаемый результат: true
    std::cout << "firstNumber <= secondNumber: " << (firstNumber <= secondNumber) << std::endl; // Ожидаемый результат: true
    std::cout << "firstNumber != secondNumber: " << (firstNumber != secondNumber) << std::endl; // Ожидаемый результат: true
    std::cout << "firstNumber == secondNumber: " << (firstNumber == secondNumber) << std::endl; // Ожидаемый результат: false
    std::cout << "firstNumber >= secondNumber: " << (firstNumber >= secondNumber) << std::endl; // Ожидаемый результат: false
    std::cout << "firstNumber > secondNumber: " << (firstNumber > secondNumber) << std::endl;   // Ожидаемый результат: false

    bool firstCondition = true;
    bool secondCondition = false;

    // Проверка условий для логических переменных
    std::cout << "firstCondition && secondCondition: " << (firstCondition && secondCondition) << std::endl; // Ожидаемый результат: false
    std::cout << "!firstCondition && !secondCondition: " << (!firstCondition && !secondCondition) << std::endl; // Ожидаемый результат: false
    std::cout << "firstCondition || secondCondition: " << (firstCondition || secondCondition) << std::endl; // Ожидаемый результат: true

    return 0;
}

