#include "pessoa.h"

Pessoa::Pessoa(std::string nome, int idade): m_nome(nome), m_idade(idade), m_sexo('M'), m_cpf("00000000000"), m_endereco("Rua Projetada, 50")
{

}

std::string Pessoa::getNome(){
    return this->m_nome;
}

void Pessoa::setNome(std::string valor){
    this->m_nome = valor;
}

int Pessoa::getIdade(){
    return this->m_idade;
}

void Pessoa::setIdade(int valor){
    this->m_nome = valor;
}

char Pessoa::getSexo(){
    return this->m_sexo;
}

void Pessoa::setSexo(char valor){
    if(valor == 'M' || valor == 'm'){
        this->m_sexo = 'M';
    }else if(valor == 'F' || valor == 'f'){
        this->m_sexo = 'F';
    };
}

std::string Pessoa::getCpf(){

}

void Pessoa::setCpf(std::string valor){

}

std::string Pessoa::getEndereco(){

}

void Pessoa::setEndereco(){

}