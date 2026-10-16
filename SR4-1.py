x=float(input("Введите координату x: "))
y=float(input("Введите координату y: "))
if x>0 and y>0:
    print("Точка в первой четверти")
elif x>0 and y<0:
    print("Точка в четвертой четверти")
elif x<0 and y>0:
    print("Точка во второй четверти")
elif x<0 and y<0:
    print("Точка в третьей четверти")
elif x==0 and y==0:
    print("Точка в начале координат")
else:
    print("Точка на оси координат")