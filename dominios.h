//---------------------------------------------------------------------
// Estrutura de código para declaração de classe domínio.

//---------------------------------------------------------------------
// Diretivas para evitar duplicação quando da inclusão de cabeçalho.

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

//---------------------------------------------------------------------
// Inclusão de cabeçalho.

#include <stdexcept>

using namespace std;

///
/// Padr&atilde;o para o Limite.
///
/// Regras de formato:
///
/// Limite &eacute; v&aacute;lido caso igual a 5, 10, 15 ou 20.
///

//---------------------------------------------------------------------
// Declaração da classe Limite.

class Limite {
    private:
        int valor;                  // Atributo para armazenar valor.
        void validar(int);          // Método para validar valor.
    public:

///
/// Armazena o valor informado caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o limite informado seja inv&aacute;lido.
///
/// @param valor Limite.
///
/// @throw invalid_argument.
///

        void setValor(int);         // Método para atribuir valor.

///
/// Retorna valor.
///
/// @return Limite.
///

        int getValor() const;       // Método para recuperar valor.
};

///
/// Padr&atilde;o para o C&oacute;digo.
///
/// Regras de formato:
///
/// C&oacute;digo &eacute; v&aacute;lido caso
///
/// - Os dois primeiros caracteres sejam letras mai&uacute;sculas;
/// - Os dois &uacute;ltimos caracteres sejam d&iacute;gitos.
///

//---------------------------------------------------------------------
// Declaração da classe Codigo.

class Codigo{
    private:
        string LLDD;                // Atributo para armazenar LLDD.
        void validar(string);       // Método para validar LLDD.
    public:

///
/// Armazena o c&oacute;digo informado caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o c&oacute;digo informado seja inv&aacute;lido.
///
/// @param LLDD C&oacute;digo.
///
/// @throw invalid_argument.
///

        void setLLDD(string);       // Método para atribuir LLDD.

///
/// Retorna LLDD.
///
/// @return C&oacute;digo.
///

        string getLLDD() const;     // Método para recuperar LLDD.
};

///
/// Padr&atilde;o para o Email.
///
/// Regras de formato:
///
/// Email &eacute; v&aacute;lido caso
///
/// - Esteja no formato \a nome@@dominio;
/// - \a nome &eacute; composto por 2 a 10 caracteres;
/// - \a dom&iacute;nio &eacute; composto por 2 a 20 caracteres;
/// - Cada caractere &eacute; letra (A-Z ou a-z), d&iacute;gito (0-9) ou ponto (.);
/// - Caractere @@ n&atilde;o pode ser imediatamente precedido ou sucedido por ponto (.);
/// - N&atilde;o h&aacute; pontos em sequ&ecirc;ncia.
///

//---------------------------------------------------------------------
// Declaração da classe Email.

class Email{
    private:
        string email;               // Atributo para armazenar email.
        void validar(string);       // Método para validar email.
    public:

///
/// Armazena o email informado caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o email informado seja inv&aacute;lido.
///
/// @param email.
///
/// @throw invalid_argument.
///

        void setEmail(string);      // Método para atribuir email.

///
/// Retorna email.
///
/// @return Email.
///

        string getEmail() const;    // Método para recuperar email.
};

///
/// Padr&atilde;o para a Senha.
///
/// Regras de formato:
///
/// Senha &eacute; v&aacute;lida caso
///
/// - Esteja no formato XXXXX;
/// - X &eacute; um dos seguintes caracteres: letra (A-Z ou a-z), d&iacute;gito (0-9) ou sinal de pontua&ccedil;&atilde;o (.,;?!);
/// - Pelo menos um caractere &eacute; letra mai&uacute;scula;
/// - Pelo menos um caractere &eacute; letra min&uacute;scula;
/// - Pelo menos um caractere &eacute; d&iacute;gito;
/// - Pelo menos um caractere &eacute; sinal de pontua&ccedil;&atilde;o;
/// - N&atilde;o h&aacute; caractere duplicado;
///

//---------------------------------------------------------------------
// Declaração da classe Senha.

class Senha{
    private:
        string senha;               // Atributo para armazenar senha.
        void validar(string);       // Método para validar senha.
    public:

///
/// Armazena a senha informada caso a mesma seja v&aacute;lida.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso a senha informada seja inv&aacute;lida.
///
/// @param senha.
///
/// @throw invalid_argument.
///

        void setSenha(string);      // Método para atribuir senha.

///
/// Retorna senha.
///
/// @return Senha.
///

        string getSenha() const;    // Método para recuperar senha.
};

///
/// Padr&atilde;o para a Coluna.
///
/// Regras de formato:
///
/// Coluna &eacute; v&aacute;lida caso seja SOLICITADO, EM EXECUCAO ou CONCLUIDO.
///

//---------------------------------------------------------------------
// Declaração da classe Coluna.

class Coluna{
    private:
        string coluna;              // Atributo para armazenar coluna.
        void validar(string);       // Método para validar coluna.
    public:

///
/// Armazena a coluna informada caso a mesma seja v&aacute;lida.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso a coluna informada seja inv&aacute;lida.
///
/// @param coluna.
///
/// @throw invalid_argument.
///

        void setColuna(string);     // Método para atribuir coluna.

///
/// Retorna coluna.
///
/// @return coluna.
///

        string getColuna() const;   // Método para recuperar coluna.
};

///
/// Padr&atilde;o para o Texto.
///
/// Regras de formato:
///
/// Texto &eacute; v&aacute;lido caso
///
/// - Tenha de 5 a 10 caracteres;
/// - Cada caracter &eacute;: letra (A-Z ou a-z), d&iacute;gito (0-9), sinal de pontua&ccedil;&atilde;o (.,;?!) ou espa&ccedil;o em branco;
/// - N&atilde;o h&aacute; espa&ccedil;os em branco em sequ&ecirc;ncia;
/// - N&atilde;o h&aacute; sinais de pontua&ccedil;&atilde;o em sequ&ecirc;ncia;
/// - N&atilde;o h&aacute; acentua&ccedil;&atilde;o;
/// - Primeiro caractere &eacute; letra mai&uacute;scula;
/// - Primeiro caractere ap&oacute;s sinal de pontua&ccedil;&atilde;o (exceto v&iacute;rgula ou ponto-e-v&iacute;rgula &eacute; letra mai&uacute;scula;
///

//---------------------------------------------------------------------
// Declaração da classe Texto.

class Texto{
    private:
        string texto;               // Atributo para armazenar texto.
        void validar(string);       // Método para validar texto.
    public:

///
/// Armazena o texto informada caso o mesmo seja v&aacute;lido.
///
/// Lan&ccedil;a exce&ccedil;&atilde;o caso o texto informado seja inv&aacute;lido.
///
/// @param texto.
///
/// @throw invalid_argument.
///

        void setTexto(string);      // Método para atribuir texto.

///
/// Retorna texto.
///
/// @return texto.
///

        string getTexto() const;    // Método para recuperar texto.
};

#endif // DOMINIOS_H_INCLUDED
