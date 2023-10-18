#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class Limite {
    private:
        int valor;
        void validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

class Codigo{
    private:
        string LLDD;
        void validar(string);
    public:
        void setLLDD(string);
        string getLLDD() const;
};

class Email{
    private:
        string email;
        void validar(string);
    public:
        void setEmail(string);
        string getEmail() const;
};

class Senha{
    private:
        string senha;
        void validar(string);
    public:
        void setSenha(string);
        string getSenha() const;
};

class Coluna{
    private:
        string coluna;
        void validar(string);
    public:
        void setColuna(string);
        string getColuna() const;
};

class Texto{
    private:
        string texto;
        void validar(string);
    public:
        void setTexto(string);
        string getTexto() const;
};
#endif
