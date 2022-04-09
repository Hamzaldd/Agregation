#include "Voiture.h"

Voiture::Voiture():Mo(new Moteur())
{
	this->V = new Vitre();

}

Voiture::Voiture(Moteur M, Vitre V): Mo(new Moteur(M))
{
	this->V = new Vitre(V);
}



Voiture::~Voiture()
{
	delete this->Mo;
	this->Mo = 0;
	std::cout << "Destructeur de la classe Voiture";
}
