//---------------------------------------------------------------------
// Inclusão de cabeçalho.

#include "dominios.h"
#include "regex"

//-----------------------------------------------------------------------
// Implementações de métodos da classe Limite

// Método para validação com lançamento de exceção.

void Limite::validar(int limite){
    if (limite != 5 && limite != 10 && limite != 15 && limite != 20)    // Limite só pode assumir os valores de 5, 10 , 15 ou 20
        throw invalid_argument("Argumento invalido.");
};

// Método para armazenamento de valor.

void Limite::setValor(int valor){
    validar(valor);
    this->valor = valor;
};

// Método para acesso a atributo valor.

int Limite::getValor() const {
    return valor;
};

//-----------------------------------------------------------------------
// Implementações de métodos da classe Codigo

// Método para validação com lançamento de exceção.

void Codigo::validar(string LLDD){
    if (LLDD.length() != 4){                                // O tamanho do código deve ser igual a quatro caracteres
          throw invalid_argument("Argumento invalido.");
    }
    if (!isupper(LLDD[0]) || !isupper(LLDD[1])){            // Os dois primeiros caracteres devem ser letras maiúsculas
          throw invalid_argument("Argumento invalido.");
    }
    if (!isdigit(LLDD[2]) || !isdigit(LLDD[3])){            // Os dois últimos caracteres devem ser dígitos
          throw invalid_argument("Argumento invalido.");
    };
};

// Método para armazenamento de código.

void Codigo::setLLDD(string LLDD){
    validar(LLDD);
    this->LLDD = LLDD;
};

// Método para acesso a atributo codigo.

string Codigo::getLLDD() const {
    return LLDD;
};

//-----------------------------------------------------------------------
// Implementações de métodos da classe Email

// Método para validação com lançamento de exceção.

void Email::validar(string email){
     regex email_pattern("^(?!.*\\.@)[a-zA-Z0-9.]{2,10}@[a-zA-Z0-9.]{2,20}$");  // Padrão de email esperado
     if (!regex_match(email, email_pattern)) {                                  // O email deve estar no padrão esperado
          throw invalid_argument("Argumento invalido.");
};
};

// Método para armazenamento de email.

void Email::setEmail(string email){
    validar(email);
    this->email = email;
};

// Método para acesso a atributo email.

string Email::getEmail() const {
    return email;
};

//-----------------------------------------------------------------------
// Implementações de métodos da classe Senha

// Método para validação com lançamento de exceção.

void Senha::validar(string senha){
     if(senha.length()!=5){                                // O tamanho da senha deve ser igual a cinco caracteres
          throw invalid_argument("Argumento invalido.");
     };
     bool maiuscula = false, minuscula=false,digito=false,especial=false,duplicado=false;
     string caracteres_de_pontuacao = ".;?,!";
     for (int i=0;i<senha.length();i++){
       if(isupper(senha[i])){                                               // A senha deve ter um caracter que seja uma letra maiúscula
          maiuscula = true;
       }
       else if(islower(senha[i])){                                          // A senha deve ter um caracter que seja uma letra minúscula
          minuscula = true;
       }
       else if(isdigit(senha[i])){                                          // A senha deve ter um caracter que seja um dígito
          digito = true;
       }
       else if(caracteres_de_pontuacao.find(senha[i]) != string::npos){     // A senha deve ter um caracter que seja um sinal de pontuação
         especial = true;
       };

       for (int j=0;j < i;j++){
          if(senha[i] == senha[j]){                                          // A senha não pode ter caracter duplicado
               duplicado = true;
          };
       };

     };
     if(!maiuscula||!minuscula||!digito||!especial||duplicado){
          throw invalid_argument("Argumento invalido.");
     };
};

// Método para armazenamento de senha.

void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
};

// Método para acesso a atributo senha.

string Senha::getSenha() const {
    return senha;
};

//-----------------------------------------------------------------------
// Implementações de métodos da classe Coluna

// Método para validação com lançamento de exceção.

void Coluna::validar(string coluna){
    if (coluna != "SOLICITADO" && coluna != "EM EXECUCAO" && coluna != "CONCLUIDO")     // A coluna deve pertencer a um dos três padrões esperados
        throw invalid_argument("Argumento invalido.");
};

// Método para armazenamento de coluna.

void Coluna::setColuna(string coluna){
    validar(coluna);
    this->coluna = coluna;
};

// Método para acesso a atributo coluna.

string Coluna::getColuna() const {
    return coluna;
};

//-----------------------------------------------------------------------
// Implementações de métodos da classe Texto

// Método para validação com lançamento de exceção.

void Texto::validar(string texto){
     string caracteres_proibidos = "áéíóúàèìòùãõ";
        if (texto.empty() || texto.length() > 30 || texto.length() < 5) {   // O tamanho do texto deve estar entre 5 e 30 caracteres
            throw invalid_argument("Argumento inválido.");
        }
        if (!isupper(texto[0])){                                            // O primeiro caracter do texto deve ser uma letra maiúscula
            throw invalid_argument("Argumento inválido.");
          };
        for (int i = 0; i < texto.length() - 1; i++) {
            if (isspace(texto[i]) && isspace(texto[i + 1])) {               // O texto não pode ter dois espaços em branco seguidos
                throw invalid_argument("Argumento inválido.");
            }
            if (ispunct(texto[i]) && ispunct(texto[i + 1])) {               // O texto não pode ter dois sinais de pontuação seguidos
                throw invalid_argument("Argumento inválido.");
            }
            if (ispunct(texto[i]) && texto[i] != ',' && texto[i] != ';' && !isupper(texto[i + 1])) {    // Primeiro caracter após sinal de pontuação /9exceto vírgula e ponto-e-vírgula) deve ser uma letra maiúscula
                throw invalid_argument("Argumento inválido.");
            }
            for (int j = 0; j < caracteres_proibidos.length(); j++) {       //O texto não pode conter caracteres que sejam letras acentuadas
                if (texto[i] == caracteres_proibidos[j]) {
                    throw invalid_argument("Argumento inválido.");
                }
            }
        }
};

// Método para armazenamento de coluna.

void Texto::setTexto(string texto){
    validar(texto);
    this->texto = texto;
};

// Método para acesso a atributo coluna.

string Texto::getTexto() const {
    return texto;
};
