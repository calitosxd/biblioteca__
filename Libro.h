#ifndef LIBRO_H
#define LIBRO_H

#include "GestorNotificaciones.h"
#include <string>
using namespace std;

class Libro {
private:
	string estado;
	GestorNotificaciones gestorNotificaciones;
	
public:
	void anadirObservador(Observador* obs) {
		gestorNotificaciones.anadirObservador(obs);
	}
	
	void eliminarObservador(Observador* obs) {
		gestorNotificaciones.eliminarObservador(obs);
	}
	
	void cambiarEstado(const string& nuevoEstado) {
		estado = nuevoEstado;
		gestorNotificaciones.notificarObservadores("El libro ha cambiado de estado a: " + estado);
	}
};

#endif
