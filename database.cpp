#include "database.h"
#include <iostream>

Database::Database() : db(nullptr) {}

Database::~Database() {
    closeDatabase();
}

bool Database::openDatabase(const std::string& dbName) {
    int result = sqlite3_open(dbName.c_str(), &db);
    return result == SQLITE_OK;
}

void Database::closeDatabase() {
    if (db != nullptr) {
        sqlite3_close(db);
        db = nullptr;
    }
}

bool Database::createTable() {
    const char* createTableSQL = "CREATE TABLE IF NOT EXISTS Contas ("
                                 "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                                 "Nome TEXT NOT NULL,"
                                 "Email TEXT NOT NULL UNIQUE,"
                                 "Senha TEXT NOT NULL);";

    int result = sqlite3_exec(db, createTableSQL, nullptr, nullptr, nullptr);
    return result == SQLITE_OK;
}

bool Database::insertAccount(const std::string& nome, const std::string& email, const std::string& senha) {
    const char* insertAccountSQL = "INSERT INTO Contas (Nome, Email, Senha) VALUES (?, ?, ?);";
    sqlite3_stmt* stmt;

    int result = sqlite3_prepare_v2(db, insertAccountSQL, -1, &stmt, nullptr);
    if (result != SQLITE_OK) {
        return false;
    }

    sqlite3_bind_text(stmt, 1, nome.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, email.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, senha.c_str(), -1, SQLITE_STATIC);

    result = sqlite3_step(stmt);
    sqlite3_finalize(stmt);

    return result == SQLITE_DONE;
}

bool Database::verifyAccount(const std::string& email, const std::string& senha) {
    const char* verifyAccountSQL = "SELECT * FROM Contas WHERE Email = ? AND Senha = ?";
    sqlite3_stmt* stmt;

    int result = sqlite3_prepare_v2(db, verifyAccountSQL, -1, &stmt, nullptr);
    if (result != SQLITE_OK) {
        return false;
    }

    sqlite3_bind_text(stmt, 1, email.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, senha.c_str(), -1, SQLITE_STATIC);

    result = sqlite3_step(stmt);
    sqlite3_finalize(stmt);

    return result == SQLITE_ROW;
}

void Database::visualizarConta(const std::string& email) {
    sqlite3_stmt* stmt;

    const char* query = "SELECT * FROM Contas WHERE Email = ?";
    int result = sqlite3_prepare_v2(db, query, -1, &stmt, nullptr);

    if (result != SQLITE_OK) {
        std::cerr << "Erro ao preparar a consulta." << std::endl;
        return;
    }

    sqlite3_bind_text(stmt, 1, email.c_str(), -1, SQLITE_STATIC);

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        int colCount = sqlite3_column_count(stmt);
        for (int i = 1; i < colCount; ++i) {
            const unsigned char* columnText = sqlite3_column_text(stmt, i);
            if (i == 1) {
                std::cout << "Usuario: " << columnText << std::endl;
            } else if (i == 2) {
                std::cout << "Email: " << columnText << std::endl;
            } else if (i == 3) {
                std::cout << "Senha: " << columnText << std::endl;
            }
        }
        std::cout << std::endl;
    }

    sqlite3_finalize(stmt);
}

     bool Database::alterarNome(const std::string& email, const std::string& novoNome) {
         sqlite3_stmt* stmt;
         const char* updateSQL = "UPDATE Contas SET Nome = ? WHERE Email = ?";

         int result = sqlite3_prepare_v2(db, updateSQL, -1, &stmt, nullptr);
         if (result != SQLITE_OK) {
             std::cerr << "Erro ao preparar a consulta." << std::endl;
             return false;
         }

         sqlite3_bind_text(stmt, 1, novoNome.c_str(), -1, SQLITE_STATIC);
         sqlite3_bind_text(stmt, 2, email.c_str(), -1, SQLITE_STATIC);

         result = sqlite3_step(stmt);
         sqlite3_finalize(stmt);

         if (result != SQLITE_DONE) {
             std::cerr << "Erro ao alterar o nome." << std::endl;
             return false;
         }

         std::cout << "Nome alterado com sucesso." << std::endl;
         return true;
     }

     bool Database::alterarSenha(const std::string& email, const std::string& novaSenha) {
         sqlite3_stmt* stmt;
         const char* updateSQL = "UPDATE Contas SET Senha = ? WHERE Email = ?";

         int result = sqlite3_prepare_v2(db, updateSQL, -1, &stmt, nullptr);
         if (result != SQLITE_OK) {
             std::cerr << "Erro ao preparar a consulta." << std::endl;
             return false;
         }

         sqlite3_bind_text(stmt, 1, novaSenha.c_str(), -1, SQLITE_STATIC);
         sqlite3_bind_text(stmt, 2, email.c_str(), -1, SQLITE_STATIC);

         result = sqlite3_step(stmt);
         sqlite3_finalize(stmt);

         if (result != SQLITE_DONE) {
             std::cerr << "Erro ao alterar a senha." << std::endl;
             return false;
         }

         std::cout << "Senha alterada com sucesso." << std::endl;
         return true;
     }

     bool Database::excluirConta(std::string& email) {
         sqlite3_stmt* stmt;
         const char* deleteSQL = "DELETE FROM Contas WHERE Email = ?";

         int result = sqlite3_prepare_v2(db, deleteSQL, -1, &stmt, nullptr);
         if (result != SQLITE_OK) {
             std::cerr << "Erro ao preparar a consulta." << std::endl;
             return false;
         }

         sqlite3_bind_text(stmt, 1, email.c_str(), -1, SQLITE_STATIC);

         result = sqlite3_step(stmt);
         sqlite3_finalize(stmt);

         if (result != SQLITE_DONE) {
             std::cerr << "Erro ao excluir a conta." << std::endl;
             return false;
         }

         std::cout << "Conta excluída com sucesso!" << std::endl;
         return true;
     }




