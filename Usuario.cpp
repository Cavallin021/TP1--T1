#include "Usuario.h"
#include "dominios.h"
#include <iostream>
#include "database.h"

using namespace std;

class UsuarioImpl : public Usuario {
public:
     void criarConta(string& nome,string& email,string& senha) override {
          while (true) {
               cout << "Digite seu usuario:" << endl;
               cin >> nome;
               if (validarNome(nome)) {
                         break;
               } else {
                    cout << "Usuario invalido. Tente novamente." << endl;
            }
        }

          while (true) {
               cout << "Digite seu email:" << endl;
               cin >> email;
               if (validarEmail(email)) {
                         break;
               } else {
                    cout << "Email invalido. Tente novamente." << endl;
            }
        }

        while (true) {
               cout << "Digite sua senha:" << endl;
               cin >> senha;
               if (validarSenha(senha)) {
                         break;
               } else {
                    cout << "Senha invalida. Tente novamente." << endl;
            }
        }
        if (validarNome(nome) && validarEmail(email) && validarSenha(senha)){
          db.openDatabase("BancoDeDados.db");
          db.insertAccount(nome,email,senha);
          db.closeDatabase();
          cout << "Conta criada com sucesso!" << endl;
        };
     }

bool autenticar(string& email, string& senha) {
    while (true) {
        cout << "Digite seu email: " << endl;
        cin >> email;
        cout << "Digite sua senha: " << endl;
        cin >> senha;

        db.openDatabase("BancoDeDados.db");
        if (db.verifyAccount(email, senha)) {
            cout << "\nLogado!\n" <<endl;
            db.closeDatabase();
            return true;
        } else {
            cout << "Dados incorretos! Tente novamente\n";
            db.closeDatabase();
        }
    }
}

void visualizarConta(string& email) {
     db.openDatabase("BancoDeDados.db");
     db.visualizarConta(email);
     db.closeDatabase();
    }

bool editarConta(string& validado) {
    bool sair = false;
    while (!sair) {
        int escolha;
        cout << "Selecione a opção que deseja alterar: \n";
        cout << "1. Usuario: \n";
        cout << "2. Senha: \n";
        cout << "3. Sair: \n";
        cout << "Escolha: ";
        cin >> escolha;
        cout << endl;

        switch (escolha) {
            case 1: {
                string novoNome;
                bool nomeValido = false;
                while (!nomeValido) {
                    cout << "Para cancelar a operação digite 'exit'\nPara alterar o usuário, digite o novo usuário: ";
                    cin >> novoNome;
                    if (novoNome == "exit" || novoNome == "Exit" || novoNome == "EXIT") {
                        nomeValido = true;
                    }
                    if (validarNome(novoNome)) {
                        nomeValido = true;
                        db.openDatabase("BancoDeDados.db");
                        db.alterarNome(validado, novoNome);
                        db.closeDatabase();
                    }
                }
                break;
            }
            case 2: {
                db.openDatabase("BancoDeDados.db");
                string novaSenha, email;
                bool senhaValida = false;
                while (!senhaValida) {
                    cout << "Digite a nova senha: ";
                    cin >> novaSenha;
                    if (validarSenha(novaSenha)) {
                        senhaValida = true;
                        break;
                    }
                    cout << "Senha Inválida! Tente novamente!\n";
                }
                email = validado;
                db.alterarSenha(email, novaSenha);
                db.closeDatabase();
                break;
            }
            case 3: {
                cout << "Retornando à página de usuário!\n";
                sair = true;
                return true;
            }
            case 4:{
            };
            default: {
                cout << "Opção inválida! Tente novamente.\n";
                break;
            }
        };
    }
}


    bool excluirConta(string& validado) {
               string exclusao;
               cout << "Voce deseja deletar sua conta?(Y/N)";
               cin >> exclusao;
               if (exclusao == "Y" || exclusao == "y"){
                    db.openDatabase("BancoDeDados.db");
                    db.excluirConta(validado);
                    db.closeDatabase();
               };
               if (exclusao == "N" || exclusao == "n"){
                    cout << "Retornando a pagina de usuario\n";
                    return true;
               };
    }

     bool validarNome(const string& nome) {
        Texto Nome;
        try {
            Nome.setTexto(nome);
            Nome.getTexto();
            return true;
        } catch (const invalid_argument& e) {
            return false;}
    }

        bool validarSenha (const string& senha){
         Senha Senha;
          try {
               Senha.setSenha(senha);
               Senha.getSenha();
               return true;
          } catch (const invalid_argument& e) {
               return false;}
    }

private:
    Database db;

    bool validarEmail(const string& email){
         Email Email;
          try {
               Email.setEmail(email);
               Email.getEmail();
               return true;
          } catch (const invalid_argument& e) {
               return false;}

    }

};

