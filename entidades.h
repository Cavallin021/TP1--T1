#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

class Conta {
    private:
        Email email;
        Texto nome;
        Senha senha;
    public:
        void setEmail(Email);
        Email getEmail() const;
        void setNome(Texto);
        Texto getNome() const;
        void setSenha(Senha);
        Senha getSenha() const;
};

class Quadro {
    private:
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Limite limite;
    public:
        void setCodigo(Codigo);
        Codigo getCodigo() const;
        void setNome(Texto);
        Texto getNome() const;
        void setDescricao(Texto);
        Texto getDescricao() const;
        void setLimite(Limite);
        Limite getLimite() const;
};

class Cartao {
    private:
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Coluna coluna;
    public:
        void setCodigo(Codigo);
        Codigo getCodigo() const;
        void setNome(Texto);
        Texto getNome() const;
        void setDescricao(Texto);
        Texto getDescricao() const;
        void setColuna(Coluna);
        Coluna getColuna() const;
};

#endif // ENTIDADES_H_INCLUDED
