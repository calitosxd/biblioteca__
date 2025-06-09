#ifndef CREADORPRESTAMO_H
#define CREADORPRESTAMO_H

#include "Prestamo.h"

class CreadorPrestamo {
public:
	virtual Prestamo* crearPrestamo() = 0;
	virtual ~CreadorPrestamo() {}
};

#endif
