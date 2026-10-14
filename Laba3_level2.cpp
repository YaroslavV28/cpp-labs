#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() { 
    system("chcp 65001");
    
    int age;
    string gender;

    // Ввод возраста
    cout << "Введите возраст" << endl;
    cin >> age; 

    // Проверка корректности возраста и типа введённых данных
    while ((cin.fail())  (age < 0)  (age > 120) ) {
        cout << "Это не возраст. Повторите попытку" << endl;

        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Введите возраст" << endl;
        cin >> age;
    }
    
    // Ввод и проверка пола
    while (true) { 
        cout << "Введите пол (M/F)" << endl;
        cin >> gender;

        if (gender == "M") { 
            break;
        } else if (gender == "F") { 
            break;
        } else {
            cout << "Это не пол (M/F)" << endl;
            cout << "Повторите попытку" << endl;
        }
    }
   
    // Определение категории по возрасту и полу
    if ((age < 18) && (gender == "M") ) {
        cout << "Юноша" << endl;
    } else if ((age >= 18) && (gender == "M") ) { 
        cout << "Мужчина" << endl;
    } else if ((age < 18) && (gender == "F")) { 
        cout << "Девушка" << endl;
    } else { 
        cout << "Женщина" << endl;
    }
    
    return 0;
}