﻿

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

// ------------------------------ TASK -------------------------------- // 
//15.Поле first — ціле додатнє число, тривалість телефонної розмови у
//хвилинах; поле second — дробове додатнє число, вартість однієї хвилини
//в гривнях.Реалізувати метод cost() — обчислення загальної вартості
//розмови.
// ------------------------------ TASK -------------------------------- // 
