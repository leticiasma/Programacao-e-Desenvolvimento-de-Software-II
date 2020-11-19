#include "Animal.hpp"
#include <iostream>

void Animal::setNome(string novoNome){
    this->nome = novoNome;
}

void Animal::setPeso(int novoPeso, int novaData){
    this->peso = novoPeso;
    this->dataPesagem = novaData;
}

string Animal::getNome(){
    return this->nome;
}

int Animal::getPeso(){
    return this->peso;
}

int Animal::getTempoPesagem(int hoje){
    int dif = hoje - this->dataPesagem;
    
    return dif;
}