#include <iostream>
#include "entidade.hpp"
namespace Entes
{
    class Personagem: public Entidade
    {
      protected:
            int: num_vidas
      public:
            Personagem();
            ~Personagem();
            salvarDataBuffer();
            virtual void mover();
            virtual void executar();
    }
}
