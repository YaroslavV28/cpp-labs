Средний уровень: 

#include <iostream>
int main() {
    system("chcp 65001");
    double width, height; // ширина, высота
    std:: cout << "Напишите ширину прямоугольника" << std::endl; std::cin >> width;
    if (std::cin.fail()) {
        std::cout << "Это не ширина, повторите попытку" << std::endl;
        return 1;
    }
   if (width < 0) {
        std::cout << "Высота не может быть отрицательной. Повторите попытку";
        return 1;
    }
    std::cout << "Напишите высоту прямоугольника" << std::endl; std::cin >> height;
    if (std::cin.fail()) {
        std::cout << "Это не ширина, повторите попытку" << std::endl;
        return 1;
    }
   
    if (height < 0) {
        std::cout << "Высота не может быть отрицательной. Повторите попытку";
        return 1;
    }
    double perimeter, square; // периметр, площадь
    perimeter = width * 2 + height * 2;
    square = width * height;
    std::cout << "Периметр этого прямоугольника: " << perimeter << " . Площадь: " << square;
    return 0;
}
