#pragma once

class Coffe{
public:
	Coffe(int grain);
	~Coffe();
	int getGrain();
	void setGrain(int grain);
private:
	int _grain;
};
enum Country {
	Russia, USA
};

class CoffeeGrinder :public virtual Coffe{//��������� ����� virtual- �������� ��� �������� ������ Coffe,  � ��� ����� ������ ���� ���������
public:
	CoffeeGrinder(int _grain, Country country);
	~CoffeeGrinder();
	
private:
	Country _country;
};
enum Temperature {
	High, Low
};


class TurkCoffee :public virtual Coffe {//��������� ����� virtual
public:
	TurkCoffee(int grain, Temperature temperature);
	~TurkCoffee();
private:
	Temperature _temperature;
};
enum Strong {
	Verystrong, Weak
};

class CoffeeMachine : public CoffeeGrinder, TurkCoffee {
public:
	CoffeeMachine(int grain, Country country, Temperature temperature, Strong strong);
	~CoffeeMachine();
private:
	Strong _strong;
};