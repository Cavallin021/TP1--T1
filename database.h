#ifndef DATABASE_H
#define DATABASE_H

#include "sqlite3.h"
#include <string>

class Database {
public:
    Database();
    ~Database();

    bool openDatabase(const std::string& dbName);
    void closeDatabase();
    bool createTable();
    bool insertAccount(const std::string& nome, const std::string& email, const std::string& senha);
    bool verifyAccount(const std::string& email, const std::string& senha);
    void visualizarConta(const std::string& email);
    bool alterarNome(const std::string& email, const std::string& novoNome);
    bool alterarSenha(const std::string& email, const std::string& novaSenha);
    bool excluirConta(std::string& email);

private:
    sqlite3* db;
};

#endif


