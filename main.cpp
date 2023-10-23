//---------------------------------------------------------------------
// Inclusão de cabeçalho.

#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main(){

//---------------------------------------------------------------------
// Teste da classe Limite

    TULimite teste_limite;

    switch(teste_limite.run()){
        case TULimite::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TULimite::FALHA  : cout << "FALHA" << endl;
                                break;
    }

//---------------------------------------------------------------------
// Teste da classe Codigo

    TUCodigo teste_codigo;

    switch(teste_codigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA" << endl;
                                break;
    }

//---------------------------------------------------------------------
// Teste da classe Email

    TUEmail teste_email;

    switch(teste_email.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA" << endl;
                                break;
    }

//---------------------------------------------------------------------
// Teste da classe Senha

    TUSenha teste_senha;

    switch(teste_senha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA" << endl;
                                break;
    }

//---------------------------------------------------------------------
// Teste da classe Coluna

    TUColuna teste_coluna;

    switch(teste_coluna.run()){
        case TUColuna::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA" << endl;
                                break;
    }

//---------------------------------------------------------------------
// Teste da classe Texto

    TUTexto teste_texto;

    switch(teste_texto.run()){
        case TUTexto::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUTexto::FALHA  : cout << "FALHA" << endl;
                                break;
    }

//---------------------------------------------------------------------
// Teste da classe Conta

    TUConta teste_conta;

    switch(teste_conta.run()){
        case TUConta::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUConta::FALHA  : cout << "FALHA" << endl;
                                break;
    }

//---------------------------------------------------------------------
// Teste da classe Quadro

    TUQuadro teste_quadro;

    switch(teste_quadro.run()){
        case TUQuadro::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUQuadro::FALHA  : cout << "FALHA" << endl;
                                break;
    }

//---------------------------------------------------------------------
// Teste da classe Cartao

    TUCartao teste_cartao;

    switch(teste_cartao.run()){
        case TUCartao::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCartao::FALHA  : cout << "FALHA" << endl;
                                break;
    }
};
