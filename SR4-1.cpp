#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float v,r;
    cout << "Введите вес (кг): ";
    cin >> v;
    cout << "Введите рост (м): ";
    cin >> r;
    float im = v/(r*r);
    if(im<=18.5){cout << "Недостаточный вес" << "\n"; return 0;}
    else if(im>18.5 && im<25){cout << "Норма" << "\n"; return 0;}
    else if(im>24.99 && im<30){cout << "Избыточный вес" << "\n"; return 0;}
    else{cout << "Ожирение" << "\n"; return 0;}
}