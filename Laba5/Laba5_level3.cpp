#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("chcp 65001");

    double epsilon; // точность
    double sum = 0; // сумма ряда
    double term = 1; // текущий член ряда
    int count = 0; // количество членов ряда

    while (true) {
        cout << "Введите точность" << endl;
        cin >> epsilon;

        if (cin.fail()) {
            cout << "Повторите попытку" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (epsilon <= 0 || epsilon >= 1) {
            cout << "Повторите попытку" << endl;
        }
        else {
            break;
        }
    }

    for (int n = 0; term >= epsilon; n++) {
        sum += term;
        count += 1;

        term = term / (n + 1);
    }

    cout << "Число e = " << sum << endl;
    cout << "Количество членов ряда = " << count << endl;

    return 0;
}