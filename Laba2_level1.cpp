#include <iostream>

int main() {
    system("chcp 65001");
    double celsius;
    double fahrenheit;

    std::cout << "Введите температуру в градусах Цельсия: ";
    std::cin >> celsius;

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    std::cout << celsius << " градусов Цельсия = " << fahrenheit << " градусов Фаренгейта";

    return 0;
}