#pragma once

#include "Pieza.h"

class Marine : public Pieza{
	public:
		Marine(int,int,char);
    Pieza*** Mover(Pieza***);
    ~Marine();
};
