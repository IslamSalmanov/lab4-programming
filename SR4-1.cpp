#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    cout << "Перевод чисел" << "\n";
    int n;
    cout << "Введите систему счисления: ";
    cin >> n;
    if(cin.fail()){cout << "Ошибка! Это не число!" << "\n"; return 0;}
    int a;
    cout << "Введите число: ";
    cin >> a;
    if(cin.fail()){cout << "Ошибка! Это не число!" << "\n"; return 0;}
    if(a==0){cout << "Переведенное число: 0" << "\n"; return 0;}
    else{
        string s="";
        string b="0123456789ABCDEF";
        while(a>0){
            s=string(1, b[a%n])+s;
            a=a/n;
        }
        cout << "Переведенное число: " << s << "\n"; return 0;}
}