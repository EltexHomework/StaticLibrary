# Задание №7 - Статические библиотеки
## Сборщик проекта
В качестве сборщика проекта используется Makefile. Для компиляции проекта необходимо ввести следующую команду в корне проекта:
``` bash
make
```

Для очистки бинарных файлов можно воспользоваться командой:
``` bash
make clean
```

## Задание
Реализовать программу калькулятор с функционалом над целыми числами: сложение, вычитание, умножение, деление. При запуске программы на экране появляется текстовое меню:
1) Сложение
2) Вычитание
3) Умножение
4) Деление
5) Выход
Далее пользователь вводит номер пункта меню, вводит параметры и на экран выводится результат выбранной операции. Затем пользователь возвращается в меню пока не выберет пункт 5.
За отрисовку меню и логику калькулятора отвечает модуль main.c. Функционал вынесен в статическую библиотеку libcalc.a (каждая операция в отдельном модуле (add.c, sub.c, mul.c, div.c)).

## Результаты тестирования программы
- Сложение
```
___MENU___
1) Add
2) Substract
3) Multiply
4) Divide
5) Exit
Enter option: 1
Enter first number: 5
Enter second number: 2
Result of sum: 7
```
- Вычитание
```
___MENU___
1) Add
2) Substract
3) Multiply
4) Divide
5) Exit
Enter option: 2   
Enter first number: 5
Enter second number: 2
Result substraction: 3
```
- Умножение
```
___MENU___
1) Add
2) Substract
3) Multiply
4) Divide
5) Exit
Enter option: 3
Enter first number: 5
Enter second number: 2
Result of multiplication: 10
```
- Деление
```
___MENU___
1) Add
2) Substract
3) Multiply
4) Divide
5) Exit
Enter option: 4       
Enter first number: 5
Enter second number: 2
Result if division: 2
```
- Выход
```
___MENU___
1) Add
2) Substract
3) Multiply
4) Divide
5) Exit
Enter option: 5
```

## Демонстрация работы программ

