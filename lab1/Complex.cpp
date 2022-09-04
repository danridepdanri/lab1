#include"Complex.h"
#include<iostream>
using namespace std;

Ñonnection Ñonnection::Init(int x, double y)
{
	Ñonnection tmp;
	if (x > 0 ) {
		tmp.first = x;
	}
	else {
		cout << "first must be > 0.  Return def. 1  " << endl; // âîçâðàùàåì äåôîëòíîå 1, åñëè Õ (first) < 0 
		tmp.first = 1;
	}
	if (y > 0 ) {
		tmp.second = y;
	}
	else {
		cout << "second must be > 0. Return def. 1 " << endl; // âîçâðàùàåì äåôîëòíîå 1, åñëè second < 0
		tmp.second = 1;
	}

	return tmp;
}

Ñonnection Ñonnection::Read()
{
	Ñonnection tmp;
	cout << "Input first (time in minutes)" << endl;
	cin >> tmp.first;
	if (tmp.first > 0) {
		tmp.first = tmp.first;
	}
	else {
		cout << "Def. 1, first must be > 0" << endl; // âîçâðàùàåì äåôîëòíîå 1, åñëè first < 0 
		tmp.first = 1;
	}
	cout << "Input second (cost in ua. Type double) " << endl;
	cin >> tmp.second;
	if (tmp.second > 0) {
		tmp.second = tmp.second;
	}
	else {
		cout << "Def. 1, second must be > 0" << endl; //  âîçâðàùàåì äåôîëòíîå 1, åñëè second < 0 
		tmp.second = 1;
	}
	return tmp;
}

void Ñonnection::Display()
{
	cout << "first= " << first << " minute;" << endl;
	cout << endl;
	cout << "second= " << second << " UA;" << endl;
}

void Ñonnection::Cost()
{
	double res;
	res = first * second;
	cout << "Result in UA: " << res << endl;
}
Ñonnection Ñonnection::Add(Ñonnection M)
{
	Ñonnection tmp;
	tmp.first = this->first + M.first;
	tmp.second = this->second + M.second;
	return tmp;
}
