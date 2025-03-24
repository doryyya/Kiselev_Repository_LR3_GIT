#include <iostream> 
#include <limits> 

using namespace std;

int check(string str, int minxs = INT_MIN, int maxs = INT_MAX)
{
    int x = 0;
    cout << str;

    while (!(cin >> x) || (cin.peek() != '\n') || (x > maxs) || (x < minxs))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << str;
    }
    return x;

}

double task_1(){
    int x;
    cout << "Введите вещественное число x: ";
    cin >> x;
    return x;
}

double task_2(){

}

double task_3(){

}

double task_4(){

}

int task_5(){

}

int main(){
    cout << "Task 1. Ввести вещественное число x" << endl;
    cout << "Task 2. Ввести вещественное число y" << endl;
    cout << "Task 3. Ввести вещественное число z" << endl;
    cout << "Task 4. Найти друбную часть от суммы этих 3-х чисел" << endl;
    cout << "Task 5. Округлить до ближайшего целого сумму этих 3-х чисел" << endl;
    cout << "Please enter the number of the defires function or 0 if you want yo close the app: " << endl;
    int x;
    cin >> x;
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

