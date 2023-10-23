//---------------------------------------------------------------------
// Inclus�o de cabe�alho.

#include "dominios.h"
#include "regex"

//-----------------------------------------------------------------------
// Implementa��es de m�todos da classe Limite

// M�todo para valida��o com lan�amento de exce��o.

void Limite::validar(int limite){
    if (limite != 5 && limite != 10 && limite != 15 && limite != 20)    // Limite s� pode assumir os valores de 5, 10 , 15 ou 20
        throw invalid_argument("Argumento invalido.");
};

// M�todo para armazenamento de valor.

void Limite::setValor(int valor){
    validar(valor);
    this->valor = valor;
};

// M�todo para acesso a atributo valor.

int Limite::getValor() const {
    return valor;
};

//-----------------------------------------------------------------------
// Implementa��es de m�todos da classe Codigo

// M�todo para valida��o com lan�amento de exce��o.

void Codigo::validar(string LLDD){
    if (LLDD.length() != 4){                                // O tamanho do c�digo deve ser igual a quatro caracteres
          throw invalid_argument("Argumento invalido.");
    }
    if (!isupper(LLDD[0]) || !isupper(LLDD[1])){            // Os dois primeiros caracteres devem ser letras mai�sculas
          throw invalid_argument("Argumento invalido.");
    }
    if (!isdigit(LLDD[2]) || !isdigit(LLDD[3])){            // Os dois �ltimos caracteres devem ser d�gitos
          throw invalid_argument("Argumento invalido.");
    };
};

// M�todo para armazenamento de c�digo.

void Codigo::setLLDD(string LLDD){
    validar(LLDD);
    this->LLDD = LLDD;
};

// M�todo para acesso a atributo codigo.

string Codigo::getLLDD() const {
    return LLDD;
};

//-----------------------------------------------------------------------
// Implementa��es de m�todos da classe Email

// M�todo para valida��o com lan�amento de exce��o.

void Email::validar(string email){
     regex email_pattern("^(?!.*\\.@)[a-zA-Z0-9.]{2,10}@[a-zA-Z0-9.]{2,20}$");  // Padr�o de email esperado
     if (!regex_match(email, email_pattern)) {                                  // O email deve estar no padr�o esperado
          throw invalid_argument("Argumento invalido.");
};
};

// M�todo para armazenamento de email.

void Email::setEmail(string email){
    validar(email);
    this->email = email;
};

// M�todo para acesso a atributo email.

string Email::getEmail() const {
    return email;
};

//-----------------------------------------------------------------------
// Implementa��es de m�todos da classe Senha

// M�todo para valida��o com lan�amento de exce��o.

void Senha::validar(string senha){
     if(senha.length()!=5){                                // O tamanho da senha deve ser igual a cinco caracteres
          throw invalid_argument("Argumento invalido.");
     };
     bool maiuscula = false, minuscula=false,digito=false,especial=false,duplicado=false;
     string caracteres_de_pontuacao = ".;?,!";
     for (int i=0;i<senha.length();i++){
       if(isupper(senha[i])){                                               // A senha deve ter um caracter que seja uma letra mai�scula
          maiuscula = true;
       }
       else if(islower(senha[i])){                                          // A senha deve ter um caracter que seja uma letra min�scula
          minuscula = true;
       }
       else if(isdigit(senha[i])){                                          // A senha deve ter um caracter que seja um d�gito
          digito = true;
       }
       else if(caracteres_de_pontuacao.find(senha[i]) != string::npos){     // A senha deve ter um caracter que seja um sinal de pontua��o
         especial = true;
       };

       for (int j=0;j < i;j++){
          if(senha[i] == senha[j]){                                          // A senha n�o pode ter caracter duplicado
               duplicado = true;
          };
       };

     };
     if(!maiuscula||!minuscula||!digito||!especial||duplicado){
          throw invalid_argument("Argumento invalido.");
     };
};

// M�todo para armazenamento de senha.

void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
};

// M�todo para acesso a atributo senha.

string Senha::getSenha() const {
    return senha;
};

//-----------------------------------------------------------------------
// Implementa��es de m�todos da classe Coluna

// M�todo para valida��o com lan�amento de exce��o.

void Coluna::validar(string coluna){
    if (coluna != "SOLICITADO" && coluna != "EM EXECUCAO" && coluna != "CONCLUIDO")     // A coluna deve pertencer a um dos tr�s padr�es esperados
        throw invalid_argument("Argumento invalido.");
};

// M�todo para armazenamento de coluna.

void Coluna::setColuna(string coluna){
    validar(coluna);
    this->coluna = coluna;
};

// M�todo para acesso a atributo coluna.

string Coluna::getColuna() const {
    return coluna;
};

//-----------------------------------------------------------------------
// Implementa��es de m�todos da classe Texto

// M�todo para valida��o com lan�amento de exce��o.

void Texto::validar(string texto){
     string caracteres_proibidos = "������������";
        if (texto.empty() || texto.length() > 30 || texto.length() < 5) {   // O tamanho do texto deve estar entre 5 e 30 caracteres
            throw invalid_argument("Argumento inv�lido.");
        }
        if (!isupper(texto[0])){                                            // O primeiro caracter do texto deve ser uma letra mai�scula
            throw invalid_argument("Argumento inv�lido.");
          };
        for (int i = 0; i < texto.length() - 1; i++) {
            if (isspace(texto[i]) && isspace(texto[i + 1])) {               // O texto n�o pode ter dois espa�os em branco seguidos
                throw invalid_argument("Argumento inv�lido.");
            }
            if (ispunct(texto[i]) && ispunct(texto[i + 1])) {               // O texto n�o pode ter dois sinais de pontua��o seguidos
                throw invalid_argument("Argumento inv�lido.");
            }
            if (ispunct(texto[i]) && texto[i] != ',' && texto[i] != ';' && !isupper(texto[i + 1])) {    // Primeiro caracter ap�s sinal de pontua��o /9exceto v�rgula e ponto-e-v�rgula) deve ser uma letra mai�scula
                throw invalid_argument("Argumento inv�lido.");
            }
            for (int j = 0; j < caracteres_proibidos.length(); j++) {       //O texto n�o pode conter caracteres que sejam letras acentuadas
                if (texto[i] == caracteres_proibidos[j]) {
                    throw invalid_argument("Argumento inv�lido.");
                }
            }
        }
};

// M�todo para armazenamento de coluna.

void Texto::setTexto(string texto){
    validar(texto);
    this->texto = texto;
};

// M�todo para acesso a atributo coluna.

string Texto::getTexto() const {
    return texto;
};
