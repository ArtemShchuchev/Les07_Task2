#include <iostream> // консоль - cout

#define SUB(a, b) ((a) - (b))

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");   // задаём русский текст
    system("chcp 1251");            // настраиваем кодировку консоли
    std::system("cls");

    std::cout << "Задача 2. Макрос SUB\n";
    std::cout << "--------------------\n" << std::endl;

	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;

    return 0;
}

/*
Задача 2. Макрос SUB
 
В этом задании вы создадите простой макрос.

Ваша задача — определить макрос SUB, который должен вычитать числа друг из друга и использоваться следующим образом:

int main (int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}
Программа должна выводить результат, указанный ниже:

Пример работы программы
Консоль
1
2
-2
*/
