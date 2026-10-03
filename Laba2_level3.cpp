#include <iostream>
#include <string>

using namespace std;

int main() {
    system("chcp 65001");

    const int INTERATION = 1000;

    double percent = 0.0;
    double Start_sum = 0.0;

    cout << "Введите начальную сумму: ";
    cin >> Start_sum;

    cout << "Введите процент: ";
    cin >> percent;

    // Расчёт через double
    double result = static_cast<double>(Start_sum);

    // Те же значения преобразуем в float
    float resultFloat = static_cast<float>(Start_sum);
    float percentFloat = static_cast<float>(percent);

    for (int i = 0; i < INTERATION; i++) {
        result = result * (1.0 + percent / 100.0);

        resultFloat =
            resultFloat * (1.0f + percentFloat / 100.0f);
    }

    cout << "Результат double: " << result << endl;
    cout << "Результат float: " << resultFloat << endl;

    return 0;
}