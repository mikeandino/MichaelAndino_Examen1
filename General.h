#pragma once
#include "Pieza.h"

class General : public Pieza{
	public:
		General(int,int,char);
    Pieza*** Mover(Pieza***);
		~General();
};
