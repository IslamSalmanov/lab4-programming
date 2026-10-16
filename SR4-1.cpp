#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float x,y;
    cout << "Введите координату x: ";
    cin >> x;
    cout << "Введите координату y: ";
    cin >> y;
    if(x>0 && y>0){cout << "Точка в первой четверти" << "\n"; return 0;}
    else if(x>0 && y<0){cout << "Точка в четвертой четверти" << "\n"; return 0;}
    else if(x<0 && y>0){cout << "Точка во второй четверти" << "\n"; return 0;}
    else if(x<0 && y<0){cout << "Точка в третьей четверти" << "\n"; return 0;}
    else if(x==0 && y==0){cout << "Точка в начале координат" << "\n"; return 0;}
    else{cout << "Точка на оси координат" << "\n"; return 0;}
}