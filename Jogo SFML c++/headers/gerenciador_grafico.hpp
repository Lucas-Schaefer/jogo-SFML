#pragma once
#include<iostream>
#include"ente.hpp"
using namespace std;
class Gerenciador_Grafico
{
private:
      BiblioGrafica obj;
public:
      Gerenciador_Grafico();
      ~Gerenciador_Grafico();
      desenharEnte(Ente* pE);
}
