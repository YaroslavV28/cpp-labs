Базовый вариант:


#include <iostream>
int main() {
    system("chcp 65001");
    double hours; // часы
   
    std::cout << "Часы в минуты" << std::endl;
    std::cout << "Введите, пожалуйста, число" << std::endl;
    std::cin >> hours;
    if (std::cin.fail()) {
        std::cout << "Это не число. Повторите ввод";
        return 1;
    }
    double minutes = hours * 60;
   
    std::cout << hours << " часа - это " << minutes << " минут." << std::endl;
    return 0;
}