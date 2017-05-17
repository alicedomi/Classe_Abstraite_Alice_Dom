#pragma once
#include "rectangle.h"

class cCarre : private CRectangle
{
public :
	cCarre();
	cCarre(int bord);
	cCarre(int x, int y, int bord);
	
	int get_bord();
	void set_bord(int bord);

	void dessiner();
	float aire();
	float perimetre();

};