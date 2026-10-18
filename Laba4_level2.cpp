#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() { 
    // Включаем поддержку русского языка в консоли Windows
    system("chcp 65001"); 

    double square; // Переменная для хранения площади
    int count;     // Номер выбранной фигуры

    // Проверка корректности выбора пункта меню
    while (true) { 
        cout << "Введите число от 1 до 4" << endl;
        cin >> count;

        // Проверяем, что введено число от 1 до 4
        if ((cin.fail()) or (count < 1) or (count > 4)) { 
            cout << "Ввели некорректное число" << endl;

            // Сбрасываем ошибку потока
            cin.clear();

            // Очищаем остаток неправильного ввода
            cin.ignore(1000, '\n');
        } else {
            // Если ввод корректный, выходим из цикла
            break;
        }
    }

    // Выбор формулы площади в зависимости от номера фигуры
    switch (count) { 

        // Площадь круга
        case 1: {
            const double PI = 3.14; // Константа числа PI
            double Radius;          // Радиус круга

            cout << "Введите Радиус для Нахождения Площади Круга" << endl;
            cin >> Radius;

            // Проверяем корректность радиуса
            while ((cin.fail()) or (Radius <= 0)) {
                cout << "Это не радиус" << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Введите Радиус" << endl;
                cin >> Radius;
            }

            // Формула площади круга
            square = PI * Radius * Radius;
            break;
        }
        
        // Площадь прямоугольника
        case 2: {
            double width, height; // Ширина и высота прямоугольника

            cout << "Введите Ширину для Нахождения Площади Прямоугольника" << endl;
            cin >> width;

            // Проверяем корректность ширины
            while ((cin.fail()) or (width <= 0)) {
                cout << "Это не Ширина" << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Введите Ширину" << endl;
                cin >> width;                
            }
            
            cout << "Введите Высоту для Нахождения Площади Прямоугольника" << endl;
            cin >> height;
            
            // Проверяем корректность высоты
            while ((cin.fail()) or (height <= 0)) {
                cout << "Это не Высота" << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Введите Высоту" << endl;
                cin >> height;                
            }
            
            // Формула площади прямоугольника
            square = width * height;
            break;
        }

        // Площадь треугольника
        case 3: { 
            double height, base; // Высота и основание треугольника

            cout << "Введите Высоту для Нахождения Площади Треугольника" << endl;
            cin >> height; 

            // Проверяем корректность высоты
            while ((cin.fail()) or (height <= 0)) {
                cout << "Это не Высота" << endl; 

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Введите Высоту" << endl;
                cin >> height;
            }

            cout << "Введите Основание для Нахождение Площади Треугольника" << endl;
            cin >> base;

            // Проверяем корректность основания
            while ((cin.fail()) or (base <= 0)) {
                cout << "Это не Основание" << endl; 

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Введите Основание" << endl;
                cin >> base;
            }

            // Формула площади треугольника
            square = (height * base) / 2;
            break;
        }
        
        // Площадь квадрата
        case 4: { 
            double side; // Сторона квадрата

            cout << "Введите Сторону для Нахождения Площади квадрата" << endl;
            cin >> side;

            // Проверяем корректность стороны
            while ((cin.fail()) or (side <= 0)) {
                cout << "Это не Сторона" << endl; 

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Введите Сторону" << endl;
                cin >> side;
            }

            // Формула площади квадрата
            square = side * side;
            break;
        }

        // Обработка непредвиденного значения
        default:
            cout << "Ошибка" << endl;
            return 1;
    }

    // Вывод площади с двумя знаками после запятой
    cout << "Площадь: "
         << std::fixed
         << std::setprecision(2)
         << square
         << endl;

    return 0;
}