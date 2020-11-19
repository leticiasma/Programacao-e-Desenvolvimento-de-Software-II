#include "Controle.hpp"
#include <iostream>

using namespace std;

    Controle::Controle(Televisao* t){
        this->tv = t;
    }

    void Controle::aumentaCanal(){
        int c = tv->getCanal()+1;
        tv->setCanal(c);
    }
    
    void Controle::diminuiCanal(){
        int c = tv->getCanal()-1;
        tv->setCanal(c);
    }
    
    void Controle::aumentaVolume(){
        int v = tv->getVolume()+1;
        tv->setVolume(v);
    }
    
    void Controle::diminuiVolume(){
        int v = tv->getVolume()-1;
        tv->setVolume(v);
    }
    
