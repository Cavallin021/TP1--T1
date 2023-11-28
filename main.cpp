#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"
#include "Usuario.h"
#include "Usuario.cpp"
#include "database.h"

using namespace std;

int main(){
     int escolha;
     string validado;
     Database db;
     bool autenticado = false;
     cout << "Bem vindo ao Kanban!\n";
     while (!autenticado) {
          cout << "1. Criar conta\n";
          cout << "2. Autenticar\n";
          cout << "3. Sair\n";
          cout << "Escolha: ";
          cin >> escolha;
          cout << endl;

     switch (escolha) {
          case 1:{
          string nome,email,senha;
          UsuarioImpl conta;
          conta.criarConta(nome,email,senha);
          break;
          };
          case 2:{
          string email,senha;
          UsuarioImpl conta;
          if (conta.autenticar(email,senha)){
               validado = email;
               autenticado = true;

          };
          break;
          };
          case 3:{
          cout << "Saindo do programa...\n";
          return 0;
          };
     };
     };
     while (autenticado){
          cout << "1. Visualizar conta\n";
          cout << "2. Editar conta\n";
          cout << "3. Excluir conta\n";
          cout << "4. Desconectar\n";
          cout << "Escolha: ";
          cin >> escolha;
          cout << endl;

     switch (escolha) {
          case 1:{
               UsuarioImpl conta;
               conta.visualizarConta(validado);
          break;
          };
          case 2:{
               UsuarioImpl conta;
               if (conta.editarConta(validado)){
                    break;
               };
          };
          case 3:{
               UsuarioImpl conta;
               if (conta.excluirConta(validado)){
                    autenticado = false;
                    cout << "Conta excluida com sucesso!";
               }
          };
          case 4:{
               autenticado = false;
          };
     };
};
};
