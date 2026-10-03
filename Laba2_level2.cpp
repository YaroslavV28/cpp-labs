#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    system("chcp 65001");
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;

    std::cout << "Введите координаты первой точки x1 и y1: ";
    std::cin >> x1 >> y1;

    std::cout << "Введите координаты второй точки x2 и y2: ";
    std::cin >> x2 >> y2;

    double differenceX = x2 - x1;
    double differenceY = y2 - y1;

    double distance = std::sqrt(
        differenceX * differenceX +
        differenceY * differenceY
    );

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Расстояние между точками: " << distance << '\n';

    return 0;
}