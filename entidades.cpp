//---------------------------------------------------------------------
// Inclus�o de cabe�alho.

#include "entidades.h"

//-----------------------------------------------------------------------
// Implementa��es de m�todos da classe Conta.

// M�todo para armazenamento de email.

void Conta::setEmail(Email email){
    this->email = email;
};

// M�todo para armazenamento de nome.

void Conta::setNome(Texto nome){
    this->nome = nome;
};

// M�todo para armazenamento de senha.

void Conta::setSenha(Senha senha){
    this->senha = senha;
};

// M�todo para acesso a atributo email.

Email Conta::getEmail() const{
    return email;
};

// M�todo para acesso a atributo nome.

Texto Conta::getNome() const{
    return nome;
};

// M�todo para acesso a atributo senha.

Senha Conta::getSenha() const{
    return senha;
};

//-----------------------------------------------------------------------
// Implementa��es de m�todos da classe Quadro

// M�todo para armazenamento de codigo.

void Quadro::setCodigo(Codigo codigo){
    this->codigo = codigo;
};

// M�todo para armazenamento de nome.

void Quadro::setNome(Texto nome){
    this->nome = nome;
};

// M�todo para armazenamento de descricao.

void Quadro::setDescricao(Texto descricao){
    this->descricao = descricao;
};

// M�todo para armazenamento de limite.

void Quadro::setLimite(Limite limite){
    this->limite = limite;
};

// M�todo para acesso a atributo codigo.

Codigo Quadro::getCodigo() const{
    return codigo;
};

// M�todo para acesso a atributo nome.

Texto Quadro::getNome() const{
    return nome;
};

// M�todo para acesso a atributo descricao.

Texto Quadro::getDescricao() const{
    return descricao;
};

// M�todo para acesso a atributo limite.

Limite Quadro::getLimite() const{
    return limite;
};

//-----------------------------------------------------------------------
// Implementa��es de m�todos da classe Cartao

// M�todo para armazenamento de codigo.

void Cartao::setCodigo(Codigo codigo){
    this->codigo = codigo;
};

// M�todo para armazenamento de nome.

void Cartao::setNome(Texto nome){
    this->nome = nome;
};

// M�todo para armazenamento de descricao.

void Cartao::setDescricao(Texto descricao){
    this->descricao = descricao;
};

// M�todo para armazenamento de coluna.

void Cartao::setColuna(Coluna coluna){
    this->coluna = coluna;
};

// M�todo para acesso a atributo codigo.

Codigo Cartao::getCodigo() const{
    return codigo;
};

// M�todo para acesso a atributo nome.

Texto Cartao::getNome() const{
    return nome;
};

// M�todo para acesso a atributo descricao.

Texto Cartao::getDescricao() const{
    return descricao;
};

// M�todo para acesso a atributo coluna.

Coluna Cartao::getColuna() const{
    return coluna;
};
