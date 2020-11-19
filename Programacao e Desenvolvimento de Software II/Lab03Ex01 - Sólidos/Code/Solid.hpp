#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Solid{
	public:
		const double pi = 3.14; //Nao modifique este valor.
        double raio;
        double altura;
        double largura_base;
        std::string tipo_solido = "Unknown";

        Solid(double Raio, double Altura, double Largura_Base, std::string Tipo_Solido);
        virtual double getArea(); 
        virtual double getVolume();
        virtual std::string getType();
};

class Cylinder: public Solid{
	public:
        double getArea () override;
        double getVolume () override;
        std::string getType () override;

        Cylinder(double Raio, double Altura, double Largura_Base, std::string Tipo_Solido);
};

class Sphere: public Solid{
	public:
        double getArea () override;
        double getVolume () override;
        std::string getType () override;

        Sphere(double Raio, double Altura, double Largura_Base, std::string Tipo_Solido);
};

class Cube: public Solid{
	public:
        double getArea () override;
        double getVolume () override;
        std::string getType () override;

        Cube(double Raio, double Altura, double Largura_Base, std::string Tipo_Solido);
};

#endif