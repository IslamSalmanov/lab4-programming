#include <iostream>
int main(){
    double a,b,c;
    std::cout << "Первая сторона: ";
    std::cin >> a;
    std::cout << "Вторая сторона: ";
    std::cin >> b;
    std::cout << "Третья сторона: ";
    std::cin >> c;
    if(a+b>c && a+c>b && c+b>a){
        if(a==b && b==c){std::cout << "Равносторонний треугольник" << "\n"; return 0;}
        else if(a==b || a==c || b==c){std::cout << "Равнобедренный треугольник" << "\n"; return 0;}
        else{std::cout << "Разносторонний треугольник" << "\n"; return 0;}
    }
    else{std::cout << "Это не треугольник" << "\n"; return 0;}
}