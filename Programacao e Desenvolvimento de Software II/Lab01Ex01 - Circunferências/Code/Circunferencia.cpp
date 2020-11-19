#include "Circunferencia.hpp"

using namespace std;

Circunferencia::Circunferencia(double x, double y, double r){
    xc = x;
    yc = y;
    raio = r;
}

double Circunferencia::calcularArea(){
    return PI*pow(raio,2);
}

bool Circunferencia::possuiIntersecao(Circunferencia* c){
    if (sqrt((pow(xc-c->xc,2))+(pow(yc-c->yc,2)))<=(raio+c->raio)){
        return true;
    }
    else{
        return false;
    }
}