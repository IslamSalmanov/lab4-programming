v=float(input("Введите вес (кг): "))
r=float(input("Введите рост (м): "))
im=v/r**2
if im <=18.5:
    print("Недостаточный вес")
elif im>18.5 and im<25:
    print("Норма")
elif im>24.99 and im<30:
    print("Избыточный вес")
else:
    print("Ожирение")