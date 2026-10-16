from random import *
print("Игра Угадай число")
n=randint(1,100)
k=0
while k==0:
    a=int(input("Введите число: "))
    if a>n: print("Мое число меньше")
    if a<n: print("Мое число больше")
    if a==n:
        print("Вы угадали")
        k=100
