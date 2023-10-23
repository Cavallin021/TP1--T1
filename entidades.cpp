//---------------------------------------------------------------------
// Inclusão de cabeçalho.

#include "entidades.h"

//-----------------------------------------------------------------------
// Implementações de métodos da classe Conta.

// Método para armazenamento de email.

void Conta::setEmail(Email email){
    this->email = email;
};

// Método para armazenamento de nome.

void Conta::setNome(Texto nome){
    this->nome = nome;
};

// Método para armazenamento de senha.

void Conta::setSenha(Senha senha){
    this->senha = senha;
};

// Método para acesso a atributo email.

Email Conta::getEmail() const{
    return email;
};

// Método para acesso a atributo nome.

Texto Conta::getNome() const{
    return nome;
};

// Método para acesso a atributo senha.

Senha Conta::getSenha() const{
    return senha;
};

//-----------------------------------------------------------------------
// Implementações de métodos da classe Quadro

// Método para armazenamento de codigo.

void Quadro::setCodigo(Codigo codigo){
    this->codigo = codigo;
};

// Método para armazenamento de nome.

void Quadro::setNome(Texto nome){
    this->nome = nome;
};

// Método para armazenamento de descricao.

void Quadro::setDescricao(Texto descricao){
    this->descricao = descricao;
};

// Método para armazenamento de limite.

void Quadro::setLimite(Limite limite){
    this->limite = limite;
};

// Método para acesso a atributo codigo.

Codigo Quadro::getCodigo() const{
    return codigo;
};

// Método para acesso a atributo nome.

Texto Quadro::getNome() const{
    return nome;
};

// Método para acesso a atributo descricao.

Texto Quadro::getDescricao() const{
    return descricao;
};

// Método para acesso a atributo limite.

Limite Quadro::getLimite() const{
    return limite;
};

//-----------------------------------------------------------------------
// Implementações de métodos da classe Cartao

// Método para armazenamento de codigo.

void Cartao::setCodigo(Codigo codigo){
    this->codigo = codigo;
};

// Método para armazenamento de nome.

void Cartao::setNome(Texto nome){
    this->nome = nome;
};

// Método para armazenamento de descricao.

void Cartao::setDescricao(Texto descricao){
    this->descricao = descricao;
};

// Método para armazenamento de coluna.

void Cartao::setColuna(Coluna coluna){
    this->coluna = coluna;
};

// Método para acesso a atributo codigo.

Codigo Cartao::getCodigo() const{
    return codigo;
};

// Método para acesso a atributo nome.

Texto Cartao::getNome() const{
    return nome;
};

// Método para acesso a atributo descricao.

Texto Cartao::getDescricao() const{
    return descricao;
};

// Método para acesso a atributo coluna.

Coluna Cartao::getColuna() const{
    return coluna;
};
