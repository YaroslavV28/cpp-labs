#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() { 
    system("chcp 65001"); 
    srand(time(0));

    int number[5][5] = {}; 

    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) { 
            number[i][j] = (rand() % 100) + 1;
        }
    }

    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) {
            cout << number[i][j] << " ";
        }
        cout << endl;
    } 

    for (int i = 0; i < 5; i++) { 
        for (int k = 0; k < 5; k++) {
            for (int j = 1; j < 5; j++) { 
                if (number[i][j-1] > number[i][j]) { // 4 & 2 
                    int test;
                    test = number[i][j]; // 2 
                    number[i][j] = number[i][j-1]; // 4;
                    number[i][j-1] = test; // 2;
                }
            }
        }
    }

    cout << endl;
    cout << "Новая матрица" << endl;
    cout << endl;
    
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) { 
            cout << number[i][j] << " ";
        }
        cout  << endl;
    }
}