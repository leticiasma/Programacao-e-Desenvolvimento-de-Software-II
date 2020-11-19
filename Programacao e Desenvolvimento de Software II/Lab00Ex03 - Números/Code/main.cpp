#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    
    int numeros[20];
    int indice = 0;
    
    string teste;
    cin >> teste;

    ifstream arquivo;
    arquivo.open(teste);

    int numero;

    for(int i = 0; i < 20; i++){
        numeros[i] = -1;
    }

    while(arquivo >> numero){
        numeros[indice] = numero;
        indice  = indice + 1;
    }

    for(int i = 0; i < 20; i++){
        if(numeros[i] == -1){
            break;
        }   
        if(numeros[i] % 2 == 0){
            cout << numeros[i] << " ";
        }
    }

    cout << endl;

    for(int i = 0; i < 20; i++){
        if(numeros[i] == -1){
            break;
        }
        if(numeros[i] % 2 == 1){
             cout << numeros[i] << " ";
        }
    }
    return 0;
}