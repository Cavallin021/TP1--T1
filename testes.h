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
    const string VALOR_VALIDO   = "user@example.com";
    const string VALOR_INVALIDO = "user.@example.com";
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
    const string VALOR_INVALIDO = "Jk79$";
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
#endif
