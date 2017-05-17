#pragma once


class CFigure
{
private:
	int m_x;
	int m_y;
public : 
	//constructeur
	CFigure();
	CFigure(int x, int y); 

	//get, set, et méthodes
	int get_x();
	int get_y();
	void set_x(int x);
	void set_y(int y); 

	void recup(int x, int y);
	virtual void dessiner() = 0;
	virtual float aire() = 0;
	virtual float perimetre() = 0;


};