#include<iostream>
#include "ente.hpp"
using namespace std;
Gerenciadores::Gerenciador_grafico* Ente::gerenciador_grafico = Gerenciadores:: Gerenciador_grafico:: getGerenciador();
Ente::Ente():id(){}
Ente::~Ente(){}
int Ente::getId() {
	return id;
}