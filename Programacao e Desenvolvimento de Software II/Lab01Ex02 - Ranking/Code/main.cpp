#include "Estudante.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    cout << fixed << setprecision(2);
    
    Estudante alunos[10];
    float RSG[10];
    
    for(int i=0;i<10;i++){
        Estudante aluno;
        cin>>aluno.matricula;
        cin>>aluno.nome;
        for (int j=0;j<5;j++){
            cin>>aluno.notas[j]; //Ou aluno.notas[0]>>alunos.notas[1]...
        }
        alunos[i] = aluno;
        RSG[i]=aluno.calcularRSG();
    }
    
    //cout<<alunos[0].nome;
    
    float maiorRSG1, maiorRSG2, maiorRSG3  = 0;
    int i_aluno1, i_aluno2, i_aluno3  = 10;
    
    
    for(int i=0;i<10;i++){
        if(RSG[i]>maiorRSG1){
            maiorRSG1 = RSG[i];
            i_aluno1 = i;
        }
    }
    
    for(int i=0;i<10;i++){
        if(RSG[i]>maiorRSG2 && (i!=i_aluno1)){
            maiorRSG2 = RSG[i];
            i_aluno2 = i;
        }
    }
    
    for(int i=0;i<10;i++){
        if(RSG[i]>maiorRSG3 && ((i!=i_aluno1) && (i!=i_aluno2))){
            maiorRSG3 = RSG[i];
            i_aluno3 = i;
        }
    }
    
    cout<<alunos[i_aluno1].matricula<<" "<<alunos[i_aluno1].nome<<" "<<maiorRSG1<<endl;
    cout<<alunos[i_aluno2].matricula<<" "<<alunos[i_aluno2].nome<<" "<<maiorRSG2<<endl;
    cout<<alunos[i_aluno3].matricula<<" "<<alunos[i_aluno3].nome<<" "<<maiorRSG3<<endl;
    
    
    return 0;
}