//---------------------------------------------------------------------
// Estrutura de código para declaração de classe entidade.

//---------------------------------------------------------------------
// Diretivas para evitar duplicação quando da inclusão de cabeçalho.

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

//---------------------------------------------------------------------
// Inclusão de cabeçalho.

#include "dominios.h"
#include <string>

using namespace std;

///
/// Padr&atilde;o para a Conta.
///

//---------------------------------------------------------------------
// Declaração da classe Conta.

class Conta {
    private:
        Email email;
        Texto nome;
        Senha senha;
    public:

///
/// Armazena o email informado caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o email informado seja inv&aacute;lido.
///
/// @param email.
///
/// @throw invalid_argument.
///

        void setEmail(Email);

///
/// Retorna email.
///
/// @return Email.
///
        Email getEmail() const;

///
/// Armazena o texto informado caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o texto informado seja inv&aacute;lido.
///
/// @param texto.
///
/// @throw invalid_argument.
///

        void setNome(Texto);

///
/// Retorna texto.
///
/// @return Texto.
///

        Texto getNome() const;

///
/// Armazena a senha informada caso a mesma seja v&aacute;lida.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso a senha informada seja inv&aacute;lida.
///
/// @param senha.
///
/// @throw invalid_argument.
///

        void setSenha(Senha);

///
/// Retorna senha.
///
/// @return Senha.
///

        Senha getSenha() const;
};

///
/// Padr&atilde;o para o Quadro.
///

//---------------------------------------------------------------------
// Declaração da classe Quadro.

class Quadro {
    private:
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Limite limite;
    public:

///
/// Armazena o c&oacute;digo informado caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o c&oacute;digo informado seja inv&aacute;lido.
///
/// @param LLDD C&oacute;digo.
///
/// @throw invalid_argument.
///

        void setCodigo(Codigo);

///
/// Retorna LLDD.
///
/// @return C&oacute;digo.
///

        Codigo getCodigo() const;

///
/// Armazena o texto informada caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o texto informado seja inv&aacute;lido.
///
/// @param texto.
///
/// @throw invalid_argument.
///

        void setNome(Texto);

///
/// Retorna texto.
///
/// @return texto.
///

        Texto getNome() const;

///
/// Armazena o texto informada caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o texto informado seja inv&aacute;lido.
///
/// @param texto.
///
/// @throw invalid_argument.
///

        void setDescricao(Texto);

///
/// Retorna texto.
///
/// @return texto.
///

        Texto getDescricao() const;

///
/// Armazena o valor informado caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o limite informado seja inv&aacute;lido.
///
/// @param valor Limite.
///
/// @throw invalid_argument.
///

        void setLimite(Limite);

///
/// Retorna valor.
///
/// @return Limite.
///

        Limite getLimite() const;
};

///
/// Padr&atilde;o para o Cartao.
///

//---------------------------------------------------------------------
// Declaração da classe Cartao.

class Cartao {
    private:
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Coluna coluna;
    public:

///
/// Armazena o c&oacute;digo informado caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o c&oacute;digo informado seja inv&aacute;lido.
///
/// @param LLDD C&oacute;digo.
///
/// @throw invalid_argument.
///

        void setCodigo(Codigo);

///
/// Retorna LLDD.
///
/// @return C&oacute;digo.
///

        Codigo getCodigo() const;

///
/// Armazena o texto informada caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o texto informado seja inv&aacute;lido.
///
/// @param texto.
///
/// @throw invalid_argument.
///

        void setNome(Texto);

///
/// Retorna texto.
///
/// @return texto.
///

        Texto getNome() const;

///
/// Armazena o texto informada caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o texto informado seja inv&aacute;lido.
///
/// @param texto.
///
/// @throw invalid_argument.
///

        void setDescricao(Texto);

///
/// Retorna texto.
///
/// @return texto.
///

        Texto getDescricao() const;

///
/// Armazena a coluna informada caso a mesma seja v&aacute;lida.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso a coluna informada seja inv&aacute;lida.
///
/// @param coluna.
///
/// @throw invalid_argument.
///

        void setColuna(Coluna);

///
/// Retorna coluna.
///
/// @return coluna.
///

        Coluna getColuna() const;
};

#endif // ENTIDADES_H_INCLUDED
