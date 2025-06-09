#ifndef CREADORPRESTAMODIGITAL_H
#define CREADORPRESTAMODIGITAL_H

#include "CreadorPrestamo.h"
#include "PrestamoDigital.h"

class CreadorPrestamoDigital : public CreadorPrestamo {
public:
	Prestamo* crearPrestamo() override {
		return new PrestamoDigital();
	}
};

#endif
