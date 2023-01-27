#include "Coffe.h"



Coffe::Coffe(int grain): _grain(grain) {}
Coffe::~Coffe(){}
int Coffe::getGrain() {
	return _grain;
}
void Coffe::setGrain(int grain) {
	_grain = grain;
}

CoffeeGrinder::CoffeeGrinder(int grain, Country country) :
	Coffe(grain), _country(country) {}
CoffeeGrinder::~CoffeeGrinder() {}


TurkCoffee::TurkCoffee(int grain, Temperature temperature):
	Coffe(grain), _temperature(temperature){}
TurkCoffee::~TurkCoffee(){}

CoffeeMachine::CoffeeMachine(int grain, Country country, Temperature temperature, Strong strong):
	Coffe(grain), CoffeeGrinder(grain, country), TurkCoffee(grain, temperature),_strong(strong){}

CoffeeMachine::~CoffeeMachine(){}