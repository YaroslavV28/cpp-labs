#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() { 
    // Включаем поддержку русского языка в консоли Windows
    system("chcp 65001"); 
    srand(time(0));

    int count; 


    // переменные для рекордов
    int Count_Try_10 = 0;
    int Count_Try_50 = 0;
    int Count_Try_100 = 0;
    int Record_10 = 105, Record_50 = 105, Record_100 = 105;
    
    while (true) { 
        cout << "Игра \"Угадай число.\" Меню: " << endl;
        cout << "1 - Новая игра" << endl;
        cout << "2 - Правила" << endl;
        cout << "3 - Рекорды" << endl;
        cout << "0 - Выход" << endl;
        cin >> count;
        while ((cin.fail()) or (count < 0) or (count > 3)) { 
            cout << "Некорректное число." << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Игра \"Угадай число.\" Меню: " << endl;
            cout << "1 - Новая игра" << endl;
            cout << "2 - Правила" << endl;
            cout << "3 - Рекорды" << endl;
            cout << "0 - Выход" << endl;
            cin >> count;
        }
        
        switch (count) { 
        case 1: {
            int choise;
            // проверка первого блока на число 
            while (true) { 
                cout << "Выберите выбор сложности. Введите число" << endl;
                cout << "1 - число от 1 до 10" << endl;
                cout << "2 - число от 1 до 50" << endl;
                cout << "3 - число от 1 до 100" << endl;
                cin >> choise;

                if ((cin.fail()) or (choise < 1) or (choise > 3)) {
                    cout << "Некорректное число." << endl;

                    cin.clear();
                    cin.ignore(1000, '\n');

                    
                } else { 
                    break;
                }
            }   
                // первый блок ветвь 2
                switch (choise) { 
                        case 1: {
                            cout << "Вы выбрали игру: \"число от 1 до 10\"" << endl;
                            Count_Try_10 = 0;
                            int Secret_Count = (rand() % 10) + 1;
                            int Count_User;
                            
                                while (true) { 
                                    cout << "Введите число от 1 до 10" << endl;
                                    cin >> Count_User;
                                    
                                    if ((cin.fail()) or (Count_User < 1) or (Count_User > 10)) {
                                        cout << "Некорректный ввод" << endl;

                                        cin.clear();
                                        cin.ignore(1000, '\n');
                                        
                                    } else if (Count_User == Secret_Count) { 
                                        cout << "Вы угадали число" << endl;
                                        Count_Try_10 += 1;
                                        
                                        if (Record_10 > Count_Try_10) {
                                            Record_10 = Count_Try_10;
                                        }
                                        break;
                                    }  else { 
                                        cout << "Число не угадали. Пробуйте дальше" << endl;
                                        Count_Try_10 += 1;    
                                            if (Secret_Count > Count_User) { 
                                                cout << "Подсказка. Число больше, чем " << Count_User << endl;
                                            } else {
                                                cout << "Подсказка. Число меньше, чем " << Count_User << endl;
                                            }
                                    }
                                }   
                        break;
                        } 

                        case 2: {
                            cout << "Вы выбрали игру: \"число от 1 до 50\" " << endl;
                            Count_Try_50 = 0;
                            int Secret_Count = (rand() % 50) + 1;
                            int Count_User;
                            

                                while (true) { 
                                    cout << "Введите число от 1 до 50" << endl;
                                    cin >> Count_User;

                                    if ((cin.fail()) or (Count_User < 1) or (Count_User > 50)) {
                                        cout << "Некорректный ввод" << endl;
                                        cin.clear();
                                        cin.ignore(1000, '\n');
                                    } else if (Count_User == Secret_Count) {
                                        cout << "Вы угадали число" << endl;
                                        Count_Try_50 += 1;
                                        
                                        if (Record_50 > Count_Try_50) {
                                            Record_50 = Count_Try_50;
                                        }
                                        break;
                                    }  else { 
                                        cout << "Число не угадали. Пробуйте дальше" << endl;
                                        Count_Try_50 += 1;    
                                            if (Secret_Count > Count_User) { 
                                                cout << "Подсказка. Число больше, чем " << Count_User << endl;
                                            } else {
                                                cout << "Подсказка. Число меньше, чем " << Count_User << endl;
                                            }
                                    }
                                }
                            break;
                        }
                    


                        case 3: {
                            cout << "Вы выбрали игру: \"число от 1 до 100\" " << endl;
                            Count_Try_100 = 0;
                            int Secret_Count = (rand() % 100) + 1;
                            int Count_User;

                                while (true) { 
                                    cout << "Введите число от 1 до 100" << endl;
                                    cin >> Count_User;

                                    if ((cin.fail()) or (Count_User < 1) or (Count_User > 100)) {
                                        cout << "Некорректный ввод" << endl;
                                        cin.clear();
                                        cin.ignore(1000, '\n');
                                    } else if (Count_User == Secret_Count) {
                                        cout << "Вы угадали число" << endl;
                                        Count_Try_100 += 1;
                                        
                                        if (Record_100 > Count_Try_100) {
                                            Record_100 = Count_Try_100;
                                        }
                                        
                                        break;
                                    }  else { 
                                        cout << "Число не угадали. Пробуйте дальше" << endl;
                                        Count_Try_100 += 1;    
                                            if (Secret_Count > Count_User) { 
                                                cout << "Подсказка. Число больше, чем " << Count_User << endl;
                                            } else {
                                                cout << "Подсказка. Число меньше, чем " << Count_User << endl;
                                            }
                                    }
                                }
                            break;
                        }
                        
                        default:
                            cout << "Некорректный выбор сложности" << endl;
                            break;
                
                }

            break;        
        }            
        case 2: {
            cout << "Правила игры:" << endl;
            cout << "1. Выберите уровень сложности." << endl;
            cout << "2. Программа загадывает случайное число." << endl;
            cout << "3. Вводите свои варианты числа." << endl;
            cout << "4. После каждой попытки программа подсказывает, больше или меньше загаданное число." << endl;
            cout << "5. Игра заканчивается, когда вы угадаете число." << endl;
            break;
        }
                    
        case 3: {
            if (Record_10 == 105) {
                cout << "Угадать число от 1 до 10: Рекорда еще нет" << endl;
            } else {
                cout << "\"Угадать число от 1 до 10\" Рекорд: " << Record_10 << " " << "Попыток" << endl;
            }
            
            if (Record_50 == 105) {
                cout << "Угадать число от 1 до 50: Рекорда еще нет" << endl;
            } else {
                cout << "\"Угадать число от 1 до 50\" Рекорд: " << Record_50 << " " << "Попыток" << endl;
            }
            
            if (Record_100 == 105) {
                cout << "Угадать число от 1 до 100: Рекорда еще нет" << endl;
            } else {
                cout << "\"Угадать число от 1 до 100\" Рекорд: " << Record_100 << " " << "Попыток" << endl;
            }
        
        break;
        }
            
        
        case 0:
            cout << "Выход из игры" << endl;
            return 0;

        default:
            cout << "Неизвестая команда. Повторите попытку" << endl;
            break;
    }
    }
    
            

}