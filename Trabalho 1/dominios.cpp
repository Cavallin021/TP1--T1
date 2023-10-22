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
     regex email_pattern("^(?!.*\\.@)[a-zA-Z0-9.]{2,10}@[a-zA-Z0-9.]{2,20}$");
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
     string caracteres_de_pontuacao = ".;?,!";
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
       else if(caracteres_de_pontuacao.find(senha[i]) != string::npos){
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

void Coluna::validar(string coluna){
    if (coluna != "SOLICITADO" && coluna != "EM EXECUCAO" && coluna != "CONCLUIDO")
        throw invalid_argument("Argumento invalido.");
};

void Coluna::setColuna(string coluna){
    validar(coluna);
    this->coluna = coluna;
};
string Coluna::getColuna() const {
    return coluna;
};

void Texto::validar(string texto){
     string caracteres_proibidos = "áéíóúàèìòùãõ";
        if (texto.empty() || texto.length() > 30 || texto.length() < 5) {
            throw invalid_argument("Argumento inválido.");
        }
        if (!isupper(texto[0])){
            throw invalid_argument("Argumento inválido.");
          };
        for (int i = 0; i < texto.length() - 1; i++) {
            if (isspace(texto[i]) && isspace(texto[i + 1])) {
                throw invalid_argument("Argumento inválido.");
            }
            if (ispunct(texto[i]) && ispunct(texto[i + 1])) {
                throw invalid_argument("Argumento inválido.");
            }
            if (ispunct(texto[i]) && texto[i] != ',' && texto[i] != ';' && !isupper(texto[i + 1])) {
                throw invalid_argument("Argumento inválido.");
            }
            for (int j = 0; j < caracteres_proibidos.length(); j++) {
                if (texto[i] == caracteres_proibidos[j]) {
                    throw invalid_argument("Argumento inválido.");
                }
            }
        }
};

void Texto::setTexto(string texto){
    validar(texto);
    this->texto = texto;
};
string Texto::getTexto() const {
    return texto;
};
