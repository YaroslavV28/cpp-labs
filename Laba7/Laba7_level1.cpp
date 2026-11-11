#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("chcp 65001");
    srand(time(0));

    int number[5][3] = {};

    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 3; j ++) { 
            number[i][j] = (rand() % 50) + 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout << number[i][j] << " ";
            if (j == 2) { 
                sum += number[i][j];
            }
        }
        cout << "\n";
    }

    cout << sum;
}