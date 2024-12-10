#pragma once
#include "ente.hpp"

namespace Entes
{
      class Entidade: public Ente
      {
      protected:
            int x;
            int y;
      public:
            Entidade();
            ~Entidade();
            virtual void executar();
            virtual void salvar();
            void salvarDataBuffer();
      };
}
