#pragma once
#include "personagem.hpp"
namespace Entes
{
	class Jogador : public Personagem
	{
	private:
		int pontos;
	public:
		Jogador();
		~Jogador();
		void executar();
	};
}