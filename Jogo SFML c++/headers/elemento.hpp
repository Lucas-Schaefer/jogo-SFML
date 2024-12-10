#pragma once
#include<iostream>
using namespace std;
class Elemento
{
private:
	Elemento*<TE>pProx;
	TE* pInfo;
public:
	Elemento();
	~Elemento();
	void incluir(TE* p);
	void setPRoximo(Elemento* <TE> pE);
	Elemento* <TE> getPRoximo const();
};