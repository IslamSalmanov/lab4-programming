#include <iostream>
#include <iomanip>
int main(){
    double a,b;
    char op;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите операцию ('+', '-', '*', '/'): ";
    std::cin >> op;
    std::cout << std::fixed << std::setprecision(2);
    switch(op){
        case '+': std::cout << "Результат: " << a + b << "\n"; break;
        case '-': std::cout << "Результат: " << a - b << "\n"; break;
        case '*': std::cout << "Результат: " << a * b << "\n"; break;
        case '/': 
            if(b==0){std::cout << "Ошибка: деление на ноль" << "\n";}
            else{std::cout << "Результат: " << a/b << "\n"; break;}
        default: std::cout << "Неизвестная операция";
    }
    return 0;
}