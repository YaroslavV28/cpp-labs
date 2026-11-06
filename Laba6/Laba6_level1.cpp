#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    int number[10] = {};

    for (int i = 0; i < 10; i++) {
        cin >> number[i];
    }

    int index = -1;

    for (int i = 0; i < 10; i++) {
        if (number[i] == 0) {
            index = i;
            break;
        }
    }

    cout << "Индекс первого нуля: " << index;

    return 0;
}