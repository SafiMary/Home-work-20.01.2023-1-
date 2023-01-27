#include "Coffe.h"
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

//Проблема ромбовидного наследования заключается в том что наследник D не понимает какую функцию(метод он должен вызвать) 
//ведь ему приходится выбирать между двумя B и C родителями, которые оба содержат экземпляр базового класса A и все его методы
//пример кода:
//class A {
//public:
//	A(int num): _num(num){}
//	~A(){}
//	int getNum() {
//		return _num;
//	}
//private:
//	int _num;
//};
//
//class B :public  A {
//public:
//void setNum(int num1) {
//	_num1 = num1;
//}
//private:
//	int _num1;
//};
//
//
//class C :public  A {
//public:
//void setNum(int num2) {
//		_num2 = num2;
//}
//private:
//	int _num2;
//};
//
//
//class D : public B, C {
//public:
//
//private:
//	int _num3;
//};
//



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//D d();//создали объект класса наследника
	//d.getNum();// метод принадлежит базовому классу. он передается наследникам B,C. Но D не знает чей метод вызвать B или C
	//d.setNum(); // не даст доступ к этому методу по той же причине
	//d.B::setNum();//можно попробовать обратиться так к методу, но это тоже неправильное решение
	//Во избежание ошибок компиляции и при необходимости составить ромбовидное наследование
	//достаточно использовать виртуальное наследование

	CoffeeMachine a(50, Country::USA, Temperature::High, Strong::Weak);
	std::cout << a.getGrain() << std::endl;






}
