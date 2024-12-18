#include <iostream>
#include "../headers/entidade.hpp"
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
