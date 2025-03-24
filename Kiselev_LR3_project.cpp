#include <iostream> 
#include <limits> 

using namespace std;


int main(){
    cout << "Task 1. Ввести вещественное число x";
    cout << "Task 2. Ввести вещественное число y";
    cout << "Task 3. Ввести вещественное число z";
    cout << "Task 4. Найти друбную часть от суммы этих 3-х чисел";
    cout << "Task 5. Округлить до ближайшего целого сумму этих 3-х чисел" << endl;
    cout <<
    int x;
    switch (x){
    case 1:
        break;
    case 2:
        cout << "Ввести вещественное число y";
        break;
    case 3:
        cout << "Ввести вещественное число z";
        break;
    case 4:
        cout << "Найти друбную часть от суммы этих 3-х чисел";
        break;
    case 5:
        cout << "Округлить до ближайшего целого сумму этих 3-х чисел";
        break;
    default:
        cout << "Ошибка ввода";
        break;
    }
}

