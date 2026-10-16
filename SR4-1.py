try:
    print("Перевод чисел")
    n=int(input("Введите систему счисления: "))
    s=''
    a=int(input("Введите число: "))
    if a==0:
        print(f'Переведенное число: 0')
    else:
        while a>0:
            b='0123456789ABCDEF'
            s=b[a%n]+s
            a=a//n
        print(f'Переведенное число: {s}')
except ValueError:
    print("Ошибка! Это не число!")