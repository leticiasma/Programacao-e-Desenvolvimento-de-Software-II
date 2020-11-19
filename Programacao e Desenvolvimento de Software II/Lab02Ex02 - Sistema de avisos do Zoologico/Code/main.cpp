#include "Animal.hpp"
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    map<string, Animal> mapaAnimais;
    map<string, Animal>::iterator it = mapaAnimais.begin();
    pair<string, Animal> x;

    char instrucao;
    int semanaAtual, peso;
    string nome;

    while(cin >> instrucao){
      if(instrucao == 'S'){
        for (it = mapaAnimais.begin(); it != mapaAnimais.end(); it++){
            if(it->second.getTempoPesagem(semanaAtual) >= 2){
                cout<<"Semana "<<semanaAtual<<": Aviso! "<<"Animal "<<it->second.getNome()<<" nao foi pesado por "<<it->second.getTempoPesagem(semanaAtual)<<" semanas."<<endl;
            }
        }
        cin >> semanaAtual;
      }
      else if(instrucao == 'P'){
        cin >> nome;
        cin >> peso;
        it = mapaAnimais.find(nome);
        if (it == mapaAnimais.end()){
            Animal novoAnimal;
            novoAnimal.setNome(nome);
            novoAnimal.setPeso(peso,semanaAtual);
            x.first = novoAnimal.getNome();
            x.second = novoAnimal;
            mapaAnimais.insert(x);
            it = mapaAnimais.find(nome);
        }
        if(peso<0.9*it->second.getPeso()){
            cout<<"Semana "<<semanaAtual<<": Aviso! "<<"Animal "<<it->second.getNome()<<" perdeu 10% ou mais de seu peso"<<endl;
        }
        it->second.setPeso(peso,semanaAtual);
      }
    }
    for (it = mapaAnimais.begin(); it != mapaAnimais.end(); ++it) {
        if(it->second.getTempoPesagem(semanaAtual) >= 2){
            cout<<"Semana "<<semanaAtual<<": Aviso! "<<"Animal "<<it->second.getNome()<<" nao foi pesado por "<<it->second.getTempoPesagem(semanaAtual)<<" semanas."<<endl;
        }
    }
}