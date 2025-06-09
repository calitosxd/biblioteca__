#ifndef PRESTAMODIGITAL_H
#define PRESTAMODIGITAL_H

#include "Prestamo.h"

class PrestamoDigital : public Prestamo {
public:
	void procesar() override {
		cout << "Procesando prestamo DIGITAL. Fecha expiracion y enlace de descarga establecidos." << endl;
	}
};

#endif
