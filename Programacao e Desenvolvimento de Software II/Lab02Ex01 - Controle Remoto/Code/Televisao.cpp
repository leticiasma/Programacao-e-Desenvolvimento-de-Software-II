#include "Televisao.hpp"
#include <iostream>

using namespace std;

    void Televisao::setCanal(int c){
        if (c<0){
            this->canal=99;
        }
        else if (c>99){
            this->canal=0;
        }
        else{
            this->canal = c;
        }
    }
    
    int Televisao::getCanal(){
        return this->canal;
    }
    
    void Televisao::setVolume(int v){
        if (v>20){
            this->volume = 20;
        }
        else if (v<0){
            this->volume = 0;
        }
        else{
            this->volume = v;
        }
    }
    
    int Televisao::getVolume(){
        return this->volume;
    } 
    
    Televisao::Televisao(){
        //canal = 0; 
       //volume = 0; PRECISA DISSO NO CPP?
    }
