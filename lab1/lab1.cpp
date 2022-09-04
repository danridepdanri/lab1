

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Сonnection test;
	//test = test.Init(254, 4.34);
	test = test.Read();
	test.Display();
	test.Cost();
	system("PAUSE");
   
}

//17.Поле first — ціле додатнє число, координата курсору по горизонталі; поле
//second — ціле додатнє число, координата курсору по вертикалі.
//Реалізувати метод changex() — зміна горизонтальної координати курсору;
//реалізувати метод changey() — зміна вертикальної координати курсору.
//Методи повинні перевіряти вихід за кордон екрана.
