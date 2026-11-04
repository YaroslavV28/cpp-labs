#include <iostream>
#include <string>
using namespace std;
#include <cmath>
int main() { 
    system("chcp 65001");
    
    double a; // начало интервала 
    double b; // конец интервала
    double h; // шаг 
    double y; // функция

        while (true) { 
        cout << "Введите начало интервала" << endl;
        cin >> a; 
        if (cin.fail()) { 
            cout << "Повторите попытку";
            cin.clear();
            cin.ignore(1000, '\n');
        } else { 
        break;
        }
    }
    
    while (true) { 
        cout << "Введите конец интервала" << endl;
        cin >> b; 
        if (cin.fail() or (b < a)) { 
            cout << "Повторите попытку";
            cin.clear();
            cin.ignore(1000, '\n');
        } else { 
        break;
        }
    }

    
    while (true) { 
        cout << "Введите шаг" << endl;
        cin >> h; 
        if (cin.fail() or (h <= 0)) { 
            cout << "Повторите попытку";
            cin.clear();
            cin.ignore(1000, '\n');
        } else { 
        break;
        }
    }  

    int count = 0;
    for (double x = a; x <= b; x += h) { 
        
        y = pow(2, x);
        if (round(y) == y) { 
            count += 1;
        }
        
        cout << x << " " << y << endl;
    }
    cout << count;
}