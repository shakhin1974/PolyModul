#include "Person.h"
#include<iostream>
using namespace std;
Person::Person(string fio, int god, char pol, float rost, int ves)
{
	this->fio = fio;
	this->god = god;
	God(this->god);
	this->pol = pol;
	Pol(this->pol);
	this->rost = rost;
	Rost(this->rost);
	this-> ves = ves;
	Ves(this->ves);
	
}
void Person::Vivod()
{
	cout << fio << " " << god << " " << pol << " " << rost << " " << ves << endl;
}
void Person::God(int &g) 
{ 
	if (g < 1970){
		g = 0 ;
	}
	if (g > 2009) {
		g = 0;
	}
	else
	{
		g = g;
	}
	
		
}
void Person::Pol(char& p)
{
	if (p=='Ì' or p=='Æ') {
		p = p;
	}
	else
	{
		p = 0;
	}
}
void Person::Rost(float& r)
{
	if (r < 1.4 ) {
		r = 0.0;
	}
	else
	{
		r = r;
	}
}

void Person::Ves(int& v)
{
	if (v < 30) {
		v = 0;
	}
	if (v > 180) 
	{
		v = 0;
	}
	else
	{
		v = v;
	}

}