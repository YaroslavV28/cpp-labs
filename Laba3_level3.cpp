#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() { 
    system("chcp 65001");
    
    double price; 
    int age, day; 

    // Ввод возраста
    cout << "Напишите возраст" << endl;
    cin >> age; 
    
    // Проверка корректности возраста
    while ((cin.fail()) or (age < 0) or (age > 120)) {
        cout << "Это не возраст. Повторите попытку" << endl;

        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Введите возраст";
        cin >> age;
    }
    
    // Очистка оставшихся символов после ввода возраста
    cin.ignore(1000, '\n');
    
    // Ввод дня недели
    cout << "Напишите день недели (1-7)" << endl;
    cin >> day;

    // Проверка корректности дня недели
    while ((cin.fail()) or (day < 1) or (day > 7)) { 
        cout << "Это не день недели (1-7)" << endl;

        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Введите день недели (1-7)" << endl;
        cin >> day;
    }

    // Определение базовой стоимости билета по возрасту
    if (age < 7) {
        price = 0;
    } else if ((age >= 7) and (age < 18)) {
        price = 200;
    } else if ((age >= 18) and (age <= 65)) {
        price = 500;
    } else {
        price = 250;
    }

    int day_price; 

    // Увеличение стоимости билета на 20% в выходные дни
    if ((day == 6) or (day == 7)) { 
        day_price = (static_cast<double>(price) / 100) * 20;
        price += day_price;
    } else {
        price = price;
    }

    // Вывод итоговой стоимости билета
    cout << "Цена за билет: " << price << endl;

    return 0;
}