
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
   
    int x; 
    cout << "Введите число: ";
    cin >> x;
    cout << "-----Проверяем-----\n";
    if ( x % 2 == 0) {
        cout << "Число " << x << " - четное\n";
    }
    else {
        cout << "Число " << x << " - нечетное";

    }
}

