#include "Coffe.h"
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

//�������� ������������ ������������ ����������� � ��� ��� ��������� D �� �������� ����� �������(����� �� ������ �������) 
//���� ��� ���������� �������� ����� ����� B � C ����������, ������� ��� �������� ��������� �������� ������ A � ��� ��� ������
//������ ����:
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
	
	//D d();//������� ������ ������ ����������
	//d.getNum();// ����� ����������� �������� ������. �� ���������� ����������� B,C. �� D �� ����� ��� ����� ������� B ��� C
	//d.setNum(); // �� ���� ������ � ����� ������ �� ��� �� �������
	//d.B::setNum();//����� ����������� ���������� ��� � ������, �� ��� ���� ������������ �������
	//�� ��������� ������ ���������� � ��� ������������� ��������� ����������� ������������
	//���������� ������������ ����������� ������������

	CoffeeMachine a(50, Country::USA, Temperature::High, Strong::Weak);
	std::cout << a.getGrain() << std::endl;






}
