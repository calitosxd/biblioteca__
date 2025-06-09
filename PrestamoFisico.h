#ifndef PRESTAMOFISICO_H
#define PRESTAMOFISICO_H

#include "Prestamo.h"

class PrestamoFisico : public Prestamo {
public:
	void procesar() override {
		cout << "Procesando prestamo FISICO. Fecha devolucion y ubicacion establecidas." << endl;
	}
};

#endif
