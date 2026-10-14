#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() { 
    system("chcp 65001");
    
    int count;
    cout << "Введите число" << endl;
    // Ввод числа
    cin >> count;

    // Проверка кратности 3 и 5
    if ((count % 3 == 0) && (count % 5 == 0)) {
        cout << "Кратно 15" << endl;
    } else { 
        cout << "Не кратно 15" << endl;
    }
    return 0;
}