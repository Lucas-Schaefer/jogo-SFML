#include<iostream>
#include<SFML/Graphics.hpp>
#include "gerenciador_grafico.hpp"
#define TELAX 1600.0f
#define TELAY 900.0f
using namespace std;
using namespace sf;
namespace Gerenciadores {
	Gerenciador_grafico* Gerenciador_grafico::pGerenciador = nullptr;
	Gerenciador_grafico* Gerenciador_grafico::getGerenciador()
	{
		if (pGerenciador == nullptr)
		{
			return new Gerenciador_grafico;
		}
		else
		{
			return pGerenciador;
		}
	}
}