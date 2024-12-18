#pragma once

#include <iostream>
#include <vector>
#include "../headers/gerenciador_grafico.hpp"
#include "../headers/gerenciador_colisoes.hpp"
#include "../headers/jogador.hpp"
#include "../headers/inimigo.hpp"
#include "../headers/plataforma.hpp"
#include "../headers/personagem.hpp"

using namespace sf;
using namespace std;
using namespace Entidades::Personagens;
using namespace Entidades::Obstaculos;

namespace Gerenciadores
{
    class Gerenciador_Grafico;
    class Gerenciador_Colisoes;
}

class Principal
{
private:
    Gerenciadores::Gerenciador_Grafico* gerenciador_grafico;
    Gerenciadores::Gerenciador_Colisoes* gerenciador_colisoes;

    Entidades::Personagens::Jogador* jogador;
    vector<Entidades::Personagens::Inimigo*> inimigos;
    vector<Entidades::Personagens::Personagem*> personagens;
    vector<Entidades::Obstaculos::Plataforma*> plataformas;

    Clock clock;
    Time tempoAnterior;
    Time tempoAtual;

public:
    Principal();
    ~Principal();
    void Executar();
    void instanciaEntidades();
    void AtualizarPersonagens();
    void DesenharElementos();

};
