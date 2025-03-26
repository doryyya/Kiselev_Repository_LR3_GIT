#include <iostream> 
#include <limits> 

using namespace std;

double x,y,z;


int check(string str, int minxs = INT_MIN, int maxs = INT_MAX)
{
    int x = 0;
    cout << str;

    while (!(cin >> x) || (cin.peek() != '\n'))
    {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << str;
    }
    return x;
}

void task_1(){
    cout << "Введите вещественное число x: ";
    cin >> x;
    cout << "x = " << x << endl;
}

void task_2(){
    cout << "Введите вещественное число y: ";
    cin >> y;
    cout << "y = " << y << endl;
}

void task_3(){
    cout << "Введите вещественное число z: ";
    cin >> z;
    cout << "z = " << z << endl;
}


void task_4(){
    double sum = x + y + z;
    int sumi = sum;
    sum -= sumi;
    cout << "Дробная часть суммы чисел равна: " << sum << endl;
}

void task_5(){
    double sum = x + y + z;
    int sumi = sum;
    sum -= sumi;
    if ((0 <= sum ) && (sum < 0.5)){cout << "Ближайшее целое число1: " << x + y + z - sum << endl;}
    else if ((0.5 <= sum) && (sum < 1)){cout << "Ближайшее целое число2: " << x + y + z - sum + 1 << endl;}
}

int main(){
    for(;;){
        cout << "Task 1. Ввести вещественное число x" << endl;
        cout << "Task 2. Ввести вещественное число y" << endl;
        cout << "Task 3. Ввести вещественное число z" << endl;
        cout << "Task 4. Найти друбную часть от суммы этих 3-х чисел" << endl;
        cout << "Task 5. Округлить до ближайшего целого сумму этих 3-х чисел" << endl;
        cout << "Please enter the number of the defires function or 0 if you want yo close the app: " << endl;
        int choice;
        choice = check("Введите число от 0 до 6: ",0,6);
        if (choice == 0){break;}
        switch (choice){
        case 0:
            choice = 0;
            break;
        case 1:
            task_1();
            break;
        case 2:
            task_2();
            break;
        case 3:
            task_3();
            break;
        case 4:
            task_4();
            break;
        case 5:
            task_5();
            break;
        case 6:
            cout << x << y << z << endl;
            break;
        default:
            cout << "Ошибка ввода" << endl;
            break;
        }
    }
}

