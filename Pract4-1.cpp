#include <iostream>
#include <iomanip>
int main(){
    double a,b,c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;
    if(a>=b && a>=c){std::cout << "Максимальное: " << a << "\n"; return 0;}
    else if(b>=a && b>=c){std::cout << "Максимальное: " << b << "\n"; return 0;}
    else{std::cout << "Максимальное: " << c << "\n"; return 0;}
}