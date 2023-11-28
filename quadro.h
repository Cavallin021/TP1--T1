#ifndef QUADRO_H
#define QUADRO_H

#include <string>

using namespace std;

class Quadro {
public:
    virtual void criarQuadro(const string& nome, int workInProgressLimit) = 0;
    virtual void visualizarQuadro(int codigoQuadro) const = 0;
    virtual void eliminarQuadro(int codigoQuadro) = 0;

    virtual ~Quadro() {}
};

#endif
