#include "entidades.h"

void Conta::setEmail(Email email){
    this->email = email;
};

void Conta::setNome(Texto nome){
    this->nome = nome;
};

void Conta::setSenha(Senha senha){
    this->senha = senha;
};

Email Conta::getEmail() const{
    return email;
};

Texto Conta::getNome() const{
    return nome;
};

Senha Conta::getSenha() const{
    return senha;
};

void Quadro::setCodigo(Codigo codigo){
    this->codigo = codigo;
};

void Quadro::setNome(Texto nome){
    this->nome = nome;
};

void Quadro::setDescricao(Texto descricao){
    this->descricao = descricao;
};

void Quadro::setLimite(Limite limite){
    this->limite = limite;
};

Codigo Quadro::getCodigo() const{
    return codigo;
};

Texto Quadro::getNome() const{
    return nome;
};

Texto Quadro::getDescricao() const{
    return descricao;
};

Limite Quadro::getLimite() const{
    return limite;
};

void Cartao::setCodigo(Codigo codigo){
    this->codigo = codigo;
};

void Cartao::setNome(Texto nome){
    this->nome = nome;
};

void Cartao::setDescricao(Texto descricao){
    this->descricao = descricao;
};

void Cartao::setColuna(Coluna coluna){
    this->coluna = coluna;
};

Codigo Cartao::getCodigo() const{
    return codigo;
};

Texto Cartao::getNome() const{
    return nome;
};

Texto Cartao::getDescricao() const{
    return descricao;
};

Coluna Cartao::getColuna() const{
    return coluna;
};
