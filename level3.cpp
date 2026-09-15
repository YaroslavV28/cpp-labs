Повышенный уровень:

#include <iostream>
#include <iomanip> // для std::fixed и std::setprecision (выделения чисел после запятой)
int main() {
    system("chcp 65001");
   
    double weight,  height; // вес, рост
    std::cout << "Напишите вес для расчета ИМТ." << std::endl; std::cin >> weight;
    if (std::cin.fail()) {
        std::cout << "Это не вес, напишите число. Начните заново.";
        std::cin.clear();
        std::cin.ignore(100, '\n');
        return 1;
    }
    if (weight <= 0) {
        std::cout << "Вес не может быть отрицательным. Начните заново";
        std::cin.clear();
        std::cin.ignore(100, '\n');
        return 1;
    }
   
    std::cout << "Напишите рост в метрах для расчета ИМТ." << std::endl; std::cin >> height;
   
    if (std::cin.fail()) {
        std::cout << "Это не рост, напишите число. Начните заново.";
        std::cin.clear();
        std::cin.ignore(100, '\n');
        return 1;
    }
   
    if (height <= 0) {
        std::cout <<"Рост не может быть отрицательным. Начните заново";
        std::cin.clear();
        std::cin.ignore(100, '\n');
        return 1;
    }
    double BMI;
    BMI = weight / (height * height);
    std::cout << "ИМТ составляет: " << std::fixed << std::setprecision(2) << BMI; // чтобы ИМТ был с двумя знаками после запятой
    return 0;
}