#include "dominios.h"
#include "regex"

void Limite::validar(int limite){
    if (limite != 5 && limite != 10 && limite != 15 && limite != 20)
        throw invalid_argument("Argumento invalido.");
};

void Limite::setValor(int valor){
    validar(valor);
    this->valor = valor;
};
int Limite::getValor() const {
    return valor;
};

void Codigo::validar(string LLDD){
    if (LLDD.length() != 4){
          throw invalid_argument("Argumento invalido.");
    }
    if (!isupper(LLDD[0]) || !isupper(LLDD[1])){
          throw invalid_argument("Argumento invalido.");
    }
    if (!isdigit(LLDD[2]) || !isdigit(LLDD[3])){
          throw invalid_argument("Argumento invalido.");
    };
};

void Codigo::setLLDD(string LLDD){
    validar(LLDD);
    this->LLDD = LLDD;
};

string Codigo::getLLDD() const {
    return LLDD;
};

void Email::validar(string email){
     regex email_pattern("^[a-zA-Z0-9]{2,10}@[a-zA-Z0-9]{2,20}(\\.[a-zA-Z0-9]{2,20})+$");
     if (!regex_match(email, email_pattern)) {
          throw invalid_argument("Argumento invalido.");
};
};

void Email::setEmail(string email){
    validar(email);
    this->email = email;
};
string Email::getEmail() const {
    return email;
};

void Senha::validar(string senha){
     if(senha.length()!=5){
          throw invalid_argument("Argumento invalido.");
     };
     bool maiuscula = false, minuscula=false,digito=false,especial=false,duplicado=false;
     for (int i=0;i<senha.length();i++){
       if(isupper(senha[i])){
          maiuscula = true;
       }
       else if(islower(senha[i])){
          minuscula = true;
       }
       else if(isdigit(senha[i])){
          digito = true;
       }
       else{
         especial = true;
       };

       for (int j=0;j < i;j++){
          if(senha[i] == senha[j]){
               duplicado = true;
          };
       };

     };
     if(!maiuscula||!minuscula||!digito||!especial||duplicado){
          throw invalid_argument("Argumento invalido.");
     };
};

void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
};
string Senha::getSenha() const {
    return senha;
};
