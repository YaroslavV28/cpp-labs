#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    system("chcp 65001");
    srand(time(0));
    
    int number = rand() % 101;

    cout << number;

}