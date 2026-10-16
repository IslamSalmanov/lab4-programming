#include <iostream>
#include <iomanip>
int main(){
    int a;
    std::cout << "Введите ваше число: ";
    std::cin >>a;
    if( a%2==0){std::cout << "Ваше число чётное" << "\n"; return 0;}
    else{std::cout << "Ваше число нечётное" << "\n"; return 0;}
}