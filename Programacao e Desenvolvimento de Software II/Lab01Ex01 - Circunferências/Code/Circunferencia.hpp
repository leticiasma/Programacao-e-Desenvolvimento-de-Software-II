#ifndef PI
#define PI 3.14
#endif

#include <iostream>
#include <cmath>

struct Circunferencia{
    double xc, yc;
    double raio;
    
    Circunferencia(double, double, double);
    double calcularArea();
    bool possuiIntersecao(Circunferencia*);
};
