a=float(input("Первая сторона: "))
b=float(input("Вторая сторона: "))
c=float(input("Третья сторона: "))
if a+b>c and a+c>b and b+c>a:
    if a==b==c:
        print("Равносторонний треугольник")
    elif a==b or a==c or b==c:
        print("Равнобедренный треугольник")
    else:
        print("Разносторонний треугольник")
else:
    print("Это не треугольник")