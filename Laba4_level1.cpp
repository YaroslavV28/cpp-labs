#include <iostream>
#include <string>
using namespace std;

int main() { 
    // Включаем поддержку русского языка в консоли Windows
    system("chcp 65001"); 

    int count;        // Код времени суток от 1 до 4
    string result;    // Строка для хранения результата

    // Повторяем ввод, пока пользователь не введёт корректное число
    while (true) { 
        cout << "Введите число от 1 до 4" << endl;
        cin >> count;

        // Проверяем: введено ли число и находится ли оно в диапазоне 1-4
        if ((cin.fail()) or (count < 1) or (count > 4)) { 
            cout << "Введите корректное число от 1 до 4" << endl;

            // Сбрасываем состояние ошибки потока
            cin.clear();

            // Очищаем оставшиеся символы из буфера ввода
            cin.ignore(1000, '\n');
        } else { 
            // Если ввод корректный, выходим из цикла
            break;
        }
    }
    
    // Выбираем время суток в зависимости от введённого числа
    switch (count) {
        case 1:
            result = "Утро";
            break;

        case 2:
            result = "День";
            break;

        case 3:
            result = "Вечер";
            break;

        case 4:
            result = "Ночь";
            break;

        // Обработка непредвиденного значения
        default:
            result = "Ошибка";
            break;
    }

    // Выводим результат
    cout << result << endl;

    return 0;
}