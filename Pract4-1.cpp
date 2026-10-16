#include <iostream>
#include <iomanip>
#include <cmath>
int main(){
    double a,b,c;
    std::cout << "ВВедите a: ";
    std::cin >> a;
    std::cout << "ВВедите b: ";
    std::cin >> b;
    std::cout << "ВВедите c: ";
    std::cin >> c;
    if(a==0){std::cout << "Это не квадратное уравнение" << "\n"; return 0;}
    else{
        double D=b*b-4.0*a*c;
        if(D>0){
            double x1=(-b+std::sqrt(D))/2.0*a;
            double x2=(-b-std::sqrt(D))/2.0*a;
            std::cout << "Два корня: " << "x1 = " << x1 << " x2 = " << x2 << "\n";
            return 0;
        }
        else if(D==0){
            double x1=-b/2.0*a;
            std::cout << "Один корень: " << "x = " << x1 << "\n";
            return 0;
        }
        else{std::cout << "Нет корней" << "\n"; return 0;}
    }
}