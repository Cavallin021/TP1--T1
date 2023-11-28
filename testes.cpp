#include "testes.h"

void TULimite::setUp(){
    limite = new Limite();
    estado = SUCESSO;
}

void TULimite::tearDown(){
    delete limite;
}

void TULimite::testarCenarioSucesso(){
    try{
        limite->setValor(VALOR_VALIDO);
        if (limite->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TULimite::testarCenarioFalha(){
    try{
        limite->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (limite->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TULimite::run(){
    printf("Teste do Limite:\n");
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setLLDD(VALOR_VALIDO);
        if (codigo->getLLDD() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setLLDD(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getLLDD() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    printf("Teste do Codigo:\n");
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run(){
    printf("Teste do Email:\n");
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
};

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    printf("Teste da Senha:\n");
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
};

void TUColuna::setUp(){
    coluna = new Coluna();
    estado = SUCESSO;
}

void TUColuna::tearDown(){
    delete coluna;
}

void TUColuna::testarCenarioSucesso(){
    try{
        coluna->setColuna(VALOR_VALIDO);
        if (coluna->getColuna() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUColuna::testarCenarioFalha(){
    try{
        coluna->setColuna(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (coluna->getColuna() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUColuna::run(){
    printf("Teste da Coluna:\n");
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
};

void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->setTexto(VALOR_VALIDO);
        if (texto->getTexto() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setTexto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (texto->getTexto() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTexto::run(){
    printf("Teste do Texto:\n");
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
};

void TUConta::setUp(){
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown(){
    delete conta;
}

void TUConta::testarSetGetEmail(){
    try{
        conta->setEmail(EMAIL);
        conta->getEmail();
    }
    catch(...){
        estado = FALHA;
    }
}

void TUConta::testarSetGetNome(){
    try{
        conta->setNome(NOME);
        conta->getNome();
    }
    catch(...){
        estado = FALHA;
    }
}

void TUConta::testarSetGetSenha(){
    try{
        conta->setSenha(SENHA);
        conta->getSenha();
    }
    catch(...){
        estado = FALHA;
    }
}

int TUConta::run(){
    printf("Teste da Conta:\n");
    setUp();
    testarSetGetEmail();
    testarSetGetNome();
    testarSetGetSenha();
    tearDown();
    return estado;
}

void TUQuadro::setUp(){
    quadro = new Quadro();
    estado = SUCESSO;
}

void TUQuadro::tearDown(){
    delete quadro;
}

void TUQuadro::testarSetGetCodigo(){
    try{
        quadro->setCodigo(CODIGO);
        quadro->getCodigo();
    }
    catch(...){
        estado = FALHA;
    }
}

void TUQuadro::testarSetGetNome(){
    try{
        quadro->setNome(NOME);
        quadro->getNome();
    }
    catch(...){
        estado = FALHA;
    }
}

void TUQuadro::testarSetGetDescricao(){
    try{
        quadro->setDescricao(DESCRICAO);
        quadro->getDescricao();
    }
    catch(...){
        estado = FALHA;
    }
}

void TUQuadro::testarSetGetLimite(){
    try{
        quadro->setLimite(LIMITE);
        quadro->getLimite();
    }
    catch(...){
        estado = FALHA;
    }
}

int TUQuadro::run(){
    printf("Teste do Quadro:\n");
    setUp();
    testarSetGetCodigo();
    testarSetGetNome();
    testarSetGetDescricao();
    testarSetGetLimite();
    tearDown();
    return estado;
}

void TUCartao::setUp(){
    cartao = new Cartao();
    estado = SUCESSO;
}

void TUCartao::tearDown(){
    delete cartao;
}

void TUCartao::testarSetGetCodigo(){
    try{
        cartao->setCodigo(CODIGO);
        cartao->getCodigo();
    }
    catch(...){
        estado = FALHA;
    }
}

void TUCartao::testarSetGetNome(){
    try{
        cartao->setNome(NOME);
        cartao->getNome();
    }
    catch(...){
        estado = FALHA;
    }
}

void TUCartao::testarSetGetDescricao(){
    try{
        cartao->setDescricao(DESCRICAO);
        cartao->getDescricao();
    }
    catch(...){
        estado = FALHA;
    }
}

void TUCartao::testarSetGetColuna(){
    try{
        cartao->setColuna(COLUNA);
        cartao->getColuna();
    }
    catch(...){
        estado = FALHA;
    }
}

int TUCartao::run(){
    printf("Teste do Cartao:\n");
    setUp();
    testarSetGetCodigo();
    testarSetGetNome();
    testarSetGetDescricao();
    testarSetGetColuna();
    tearDown();
    return estado;
}
