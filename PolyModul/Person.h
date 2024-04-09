#pragma once
#include<string>
using namespace std;
class Person
{
public:
	Person(string, int, char, float, int);
	void Vivod();
	void God(int& g);
	void Pol(char& p);
	void Rost(float& r);
	void Ves(int& v);
private:
	string fio{};
	int god{};
	char pol{};
	float rost{};
	int ves{};
};

