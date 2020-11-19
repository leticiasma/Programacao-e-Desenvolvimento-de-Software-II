#include "Solid.hpp"

double Solid::getArea(){return 0;}
double Solid::getVolume(){return 0;}
std::string Solid::getType(){return "Unknown Solid";}
Solid::Solid(double Raio, double Altura, double Largura_Base, std::string Tipo_Solido){
    raio = Raio;
    altura = Altura;
    largura_base = Largura_Base;
    tipo_solido = Tipo_Solido;
}

Cylinder::Cylinder(double Raio, double Altura, double Largura_Base, std::string Tipo_Solido) : Solid(Raio, Altura, Largura_Base, Tipo_Solido){};
double Cylinder::getArea(){
    return 2*pi*raio*raio + 2*pi*raio*altura;
} 
double Cylinder::getVolume(){
    return pi*raio*raio*altura;
}
std::string Cylinder::getType(){
    return "Cylinder";
}

Sphere::Sphere(double Raio, double Altura, double Largura_Base, std::string Tipo_Solido) : Solid(Raio, Altura, Largura_Base, Tipo_Solido){};
double Sphere::getArea(){
    return 4*pi*raio*raio;
} 
double Sphere::getVolume(){
    return (4*pi*raio*raio*raio)/3;
}
std::string Sphere::getType(){
    return "Sphere";
}

Cube::Cube(double Raio, double Altura, double Largura_Base, std::string Tipo_Solido) : Solid(Raio, Altura, Largura_Base, Tipo_Solido){};
double Cube::getArea(){
    return 6*largura_base*largura_base;
} 
double Cube::getVolume(){
    return largura_base*largura_base*largura_base;
}
std::string Cube::getType(){
    return "Cube";
}