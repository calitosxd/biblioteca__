#ifndef GESTORDEPRESTAMOS_H
#define GESTORDEPRESTAMOS_H

#include "CreadorPrestamo.h"

class GestorDePrestamos {
public:
	void procesarPrestamo(CreadorPrestamo* creador) {
		Prestamo* prestamo = creador->crearPrestamo();
		prestamo->procesar();
		delete prestamo;
	}
};

#endif
