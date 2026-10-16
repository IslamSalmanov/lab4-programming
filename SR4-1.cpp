#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    cout << "Игра Угадай число" << "\n";
    int n=1+rand()%100;
    int k=0;
    while(k==0){
        int a;
        cout << "Введите число: ";
        cin >> a;
        if(a>n){cout << "Мое число меньше" << "\n";}
        if(a<n){cout << "Мое число больше" << "\n";}
        if(a==n){cout << "Вы угадали" << "\n"; k=100;}
    }
    return 0;
}