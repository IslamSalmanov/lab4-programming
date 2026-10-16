#include <iostream>
int main(){
    int n;
    std::cout << "Введите год: ";
    std::cin >> n;
    if(n%100!=0 && n%4==0){std::cout << n << " - високосный год" << "\n"; return 0;}
    else if(n%400==0){std::cout << n << " - високосный год" << "\n"; return 0;}
    else{std::cout << n << " - не високосный год" << "\n"; return 0;}
}