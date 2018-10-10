#ifndef H_PESSOA
#define H_PESSOA
#include <string>

class Pessoa
{
private:
    std::string m_nome;
    int m_idade;
    char m_sexo;
    std::string m_cpf;
    std::string m_endereco;
public:
    Pessoa(std::string nome, int idade);

    std::string getNome();
    void setNome(std::string valor);
    int getIdade();
    void setIdade(int valor);
    char getSexo();
    void setSexo(char valor);
    std::string getCpf();
    void setCpf(std::string valor);
    std::string getEndereco();
    void setEndereco();
    
};

#endif