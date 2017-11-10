#pragma once

#include "Pieza.h"

class Marine : public Pieza{
	public:
		Marine(int,int,string);
    Pieza*** Mover(Pieza***);
    ~Marine();
};
