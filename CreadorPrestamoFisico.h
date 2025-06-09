#ifndef CREADORPRESTAMOFISICO_H
#define CREADORPRESTAMOFISICO_H

#include "CreadorPrestamo.h"
#include "PrestamoFisico.h"

class CreadorPrestamoFisico : public CreadorPrestamo {
public:
	Prestamo* crearPrestamo() override {
		return new PrestamoFisico();
	}
};

#endif
