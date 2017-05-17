#pragma once
#include "cfigure.h"


class CRectangle : public CFigure
{
private:
	int m_largeur;
	int m_hauteur;
public:
	CRectangle();
	CRectangle(int largeur, int hauteur);
	CRectangle(int x, int y, int largeur, int hauteur);

	int get_largeur();
	int get_hauteur();

	int set_largeur(int largeur);
	int set_hauteur(int hauteur);

	void dessiner();
	float aire();
	float perimetre();

};