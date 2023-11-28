#ifndef QUADRO_H
#define QUADRO_H

#include <string>

using namespace std;

class Cartao {
public:
    virtual void criarCartao(int codigoQuadro, const string& titulo, const string& descricao) = 0;
    virtual void visualizarCartao(int codigoCartao) const = 0;
    virtual void moverCartao(int codigoCartao, const string& novaColuna) = 0;
    virtual void eliminarCartao(int codigoCartao) = 0;

    virtual ~Cartao() {}
};


#endif
