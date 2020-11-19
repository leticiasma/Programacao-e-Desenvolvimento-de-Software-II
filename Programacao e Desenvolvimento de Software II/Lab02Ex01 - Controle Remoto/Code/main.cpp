#include "Televisao.hpp"
#include "Controle.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Televisao* t = new Televisao(); 
    Controle c(t);
    
    int n;
    string comando;
    
    while(cin>>comando){
        if(comando.compare("SC")==0){
            cin>>n;
            t->setCanal(n);
        }
        if(comando.compare("AC")==0){
            c.aumentaCanal(); 
        }
        if(comando.compare("MC")==0){
            cout<<t->getCanal()<<endl; 
        }
        if(comando.compare("SV")==0){
            cin>>n;
            t->setVolume(n); 
        }
        if(comando.compare("MV")==0){
            cout<<t->getVolume()<<endl; 
        }
        if(comando.compare("DV")==0){
            c.diminuiVolume(); 
        }
        if(comando.compare("DC")==0){
            c.diminuiCanal(); 
        }
        if(comando.compare("AV")==0){
            c.aumentaVolume();
        }
    }
    
    delete t; 
    
    return 0;
}
