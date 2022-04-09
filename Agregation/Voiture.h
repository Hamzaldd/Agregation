#pragma oncet
#include "Moteur.h"
#include "Vitre.h"
class Voiture
{
public: 
	Voiture();
	Voiture(Moteur M,Vitre* V);
	virtual ~Voiture();
private:
	Moteur* Mo;
	Vitre* V;
};

