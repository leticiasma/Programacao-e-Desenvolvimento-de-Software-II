#include "Estudante.hpp"

float Estudante::calcularRSG(){
    float m = 0;
    for(int i=0;i<5;i++){
        m += notas[i];
    }
    return m/5;
}