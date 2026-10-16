a=float(input("Введите первое число: "))
b=float(input("Введите второе число: "))
op=input("Введите операцию ('+', '-', '*', '/'): ").strip()
match op:
    case "+":
        print(f"Результат: {a+b}")
    case "-":
        print(f"Результат: {a-b}")
    case "*":
        print(f"Результат: {a*b}")
    case "/":
        if b==0:
            print("Ошибка: деление на ноль")
        else:
            print(f"Результат: {a/b}")
    case _:
        print("Неизвестная ошибка")