#include <iostream>
int main(){
    int a;
    std::cout << "Введите ваш возраст: ";
    std::cin >> a;
    if(a<0){std::cout << "Неккоректный выбор" << "\n"; return 0;}
    if(a<13){std::cout << "Ребёнок" << "\n"; return 0;}
    else if(a<18){std::cout << "Подросток" << "\n"; return 0;}
    else if(a<65){std::cout << "Взрослый" << "\n"; return 0;}
    else{std::cout << "Пожилой" << "\n"; return 0;}
}