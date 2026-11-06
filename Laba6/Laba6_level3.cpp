#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("chcp 65001");
    srand(time(0));
    
    int number[20] = {};
    
    for (int i = 0; i < 20; i++) { 
        number[i] = rand() % 101; 
    }

    for (int i = 0; i < 20; i++) { 
        cout << number[i] << " "; 
    }

    int go = 1;
    int count = 1;
    for (int i = 1; i < 20; i++) { 
        if (number[i] > number[i -1]) { 
            count += 1;
        } else { 
            count = 1;
        }

        if (go < count) { 
                go = count;
                
            }
    }

    cout << endl;
    cout << "Самая длинная последовательность: " << go;
}