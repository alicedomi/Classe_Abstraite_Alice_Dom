#pragma once
#include "cfigure.h"

class cCercle : public CFigure
{
private :
	int m_radius;
public :
	cCercle();
	cCercle(int radius);
	cCercle(int x, int y, int radius);

	int get_radius();
	void set_radius(int radius);
	
	void dessiner();
	void aire();
	void perimetre();

};