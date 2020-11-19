#ifndef HOUSES_H
#define HOUSES_H

#include<iostream>
#include<string>

using namespace std;

class greatHouse { //Base de todas
  protected:
    string name;

  public:
	virtual void Words();
	void Allegiance();
	void setName(string n);
};

class houseLannister: public greatHouse { //Cersei, oficial: "Hear Me Roar!", n of"A Lannister always pays his debts."
  public:  	
    void Words(bool common);
	void Common();	
};

class houseBaratheon: public houseLannister { //Robert e filho: Joffrey; Ours is the fury!
  public:  	
	void Words() override;	
};


class houseBaratheonofKingsLanding: public houseBaratheon{ //União da Lann com Barat
};

#endif