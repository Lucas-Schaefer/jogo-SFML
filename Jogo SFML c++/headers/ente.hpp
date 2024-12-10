#pragma once
#include<iostream>
using namespace std;
class Ente
{
protected: 
	int id;
	static Gerenciadores::Gerenciador_grafico* gerenciador_grafico;
public:
	Ente();
	~Ente();
	int getId();
};