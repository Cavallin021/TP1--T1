#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main(){
    TULimite teste_limite;

    switch(teste_limite.run()){
        case TULimite::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TULimite::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUCodigo teste_codigo;

    switch(teste_codigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUEmail teste_email;

    switch(teste_email.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUSenha teste_senha;

    switch(teste_senha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA" << endl;
                                break;
    }
};
