#include <iostream>
#include "entidade.hpp"
using namespace std;
class Projetil: public Entidade
{
  protected:
        bool ativo;
  public:
        Projetil();
        ~Projetil();
        void executar;
}
