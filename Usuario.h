#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
public:
    virtual void criarConta(std::string& nome,std::string& email,std::string& senha) = 0;
    virtual bool autenticar(std::string& email, std::string& senha) = 0;
    virtual void visualizarConta(std::string& email) = 0;
    virtual bool editarConta(std::string& validado) = 0;
    virtual bool excluirConta(std::string& validado) = 0;

    virtual ~Usuario() {}
};

#endif
