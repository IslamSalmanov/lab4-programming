from math import *
a=float(input("Введите a: "))
b=float(input("Введите b: "))
c=float(input("Введите c: "))
D=b**2-4*a*c
if a==0:
    print("Не квадратное ураввнение")
else:
    if D>0:
        x1=(-b + sqrt(D))/(2*a)
        x2=(-b - sqrt(D))/(2*a)
        print(f'Два корня: x1 = {x1:.2f}, x2 = {x2:.2f}')
    elif D==0:
        x=(-b/2*a)
        print(f'Один корень: x = {x:.2f}')
    else: print("Нет корней")