#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() { 
    system("chcp 65001"); 
    srand(time(0));

    int number[6][6] = {};

    for (int i = 0; i < 6; i++) { 
        for (int j = 0; j < 6; j++) { 
            number[i][j] = (rand() % 50) + 1;
        }
    }

    for (int i = 0; i < 6; i ++) { 
        for (int j = 0; j < 6; j++) { 
            cout << number[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < 6; i++) { 
        for (int j = 0; j < 6; j ++) { 
            if (i == j) {
                sum += number[i][j];
            } else if (i < j) { 
                sum += number[i][j];
            }
        }
    }
    cout << sum;
}