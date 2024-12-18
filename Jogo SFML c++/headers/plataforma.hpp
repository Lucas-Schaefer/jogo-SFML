#pragma once
#include "../headers/entidade.hpp"

namespace Entidades
{
	namespace Obstaculos
	{
		class Plataforma : public Entidade
		{
		private:

		public:
			Plataforma(const Vector2f pos, const Vector2f tam);

		};
	}

}