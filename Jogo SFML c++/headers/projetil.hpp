#include <iostream>
#include "entidade.hpp"
class Projetil: public Entidade
{
  protected:
        bool ativo;
  public:
        Projetil();
        ~Projetil();
        void executar;
}
