#include <iostream>
#include "elemento.hpp"
using namespace std;
class Lista
{
  private:
      Elemento<TL> * pPrimeiro;
      Elemento<TL> * pUltimo;
  public:
      Lista();
      ~Lista();
      void incluir(TL* p);
      void limpar();
}
