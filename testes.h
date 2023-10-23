#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

class TULimite {
private:
    const int VALOR_VALIDO   = 10;
    const int VALOR_INVALIDO = 30;
    Limite *limite;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUCodigo {
private:
    const string VALOR_VALIDO   = "JK30";
    const string VALOR_INVALIDO = "JkJ0";
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUEmail {
private:
    const string VALOR_VALIDO   = "joao@gmail.com";
    const string VALOR_INVALIDO = "joaovictor@.gmail.com";
    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUSenha {
private:
    const string VALOR_VALIDO   = "Jkj9.";
    const string VALOR_INVALIDO = "JJ79.";
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUColuna {
private:
    const string VALOR_VALIDO   = "EM EXECUCAO";
    const string VALOR_INVALIDO = "QUALQUER STRING DIFERENTE DAS 3";
    Coluna *coluna;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUTexto {
private:
    const string VALOR_VALIDO   = "Ddasdadeexto";
    const string VALOR_INVALIDO = "Ddasdadéexto";
    Texto *texto;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUConta {
private:
    const Email EMAIL;
    const Texto NOME;
    const Senha SENHA;
    Conta *conta;
    int estado;
    void setUp();
    void tearDown();
    void testarSetGetEmail();
    void testarSetGetNome();
    void testarSetGetSenha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUQuadro {
private:
    const Codigo CODIGO;
    const Texto NOME;
    const Texto DESCRICAO;
    Limite LIMITE;
    Quadro *quadro;
    int estado;
    void setUp();
    void tearDown();
    void testarSetGetCodigo();
    void testarSetGetNome();
    void testarSetGetDescricao();
    void testarSetGetLimite();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUCartao {
private:
    const Codigo CODIGO;
    const Texto NOME;
    const Texto DESCRICAO;
    const Coluna COLUNA;
    Cartao *cartao;
    int estado;
    void setUp();
    void tearDown();
    void testarSetGetCodigo();
    void testarSetGetNome();
    void testarSetGetDescricao();
    void testarSetGetColuna();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TESTES_H_INCLUDED
