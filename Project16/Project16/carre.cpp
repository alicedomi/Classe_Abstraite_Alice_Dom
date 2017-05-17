#include "carre.h"


int cCarre::get_bord()
{
	return get_largeur();
	return get_hauteur();
}

void cCarre::set_bord(int bord)
{
	set_largeur(bord);
	set_hauteur(bord);
}

void cCarre::dessiner()
{
	CRectangle::dessiner();
}

float cCarre::aire()
{
	return CRectangle::aire();
}

float cCarre::perimetre()
{
	return CRectangle::perimetre();
}
