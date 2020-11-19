#include "Indice.hpp"
#include <iostream>
#include <map>
#include <string>
#include <iomanip>

int main(){
	std::map<std::string, int> palavras;
	std::map<std::string, int>::iterator it;
	std::pair<std::string, int> x;
	
	Indice p;
	std::string s, s2, line;
	
	while(getline(std::cin, line)){
        s += ' ' + line;
    }
	
	int tam = s.length();
	for (int i=0; i<tam ;i++) {
        s2 += tolower(s[i]);
    }
    
    char aux[s2.length()+1];
	
	int i, n=0;
	int nPalavras=-1;
	float percentual;
	
	while(n<tam){
		for(i=0; s2[n]!=' ' && n<tam ;i++){ 
			aux[i]=s2[n];
			n++;
		}
		if(s2[n]==' '){
			nPalavras++;
		}
		n++;
		aux[i] = '\0'; 
		
		p.palavra = aux;
		p.nOcorrencias = 1;
		p.nLetras = i;
		
		if(p.nLetras>=3){
			if(palavras.find(p.palavra)!=palavras.end()){
				it = palavras.find(p.palavra);
				it->second ++;
			} else {
				x.first = p.palavra;
				x.second = p.nOcorrencias;
				palavras.insert(x);
			}
		}
	}
	for(it = palavras.begin(); it!=palavras.end() ;it++){
		percentual = (float)it->second/nPalavras;
		std::cout<<std::fixed<<std::setprecision(2);
		std::cout<<it->first<<" "<<it->second<<" "<<percentual<<std::endl;
	}
}	