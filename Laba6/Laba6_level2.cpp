#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("chcp 65001");
    srand(time(0));

    int number[20] = {};
    for (int i = 0; i < 20; i++) { 
        number[i] = 50 - (rand() % 101);
    }

    for (int i = 0; i < 20; i++) { 
        cout << number[i] << " ";
    }

    int count = 0;
    cout << endl;
    for (int i = 1; i < 19; i++) { 
        if (number[i] < number[i -1] and number[i] < number[i +1]) {
            count += 1;
            cout << number[i] << " ";
        }
    }
    cout << endl;
    cout << count;
}