#include<iostream>
#include<string>
#include<windows.h>
#include"Person.h"
using namespace std;
int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Person p1("������� ����", 1970, '�', 1.77, 80);
	p1.Vivod();
}