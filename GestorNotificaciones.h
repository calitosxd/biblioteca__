#ifndef GESTORNOTIFICACIONES_H
#define GESTORNOTIFICACIONES_H

#include "Observador.h"
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class GestorNotificaciones {
private:
	vector<Observador*> observadores;
public:
	void anadirObservador(Observador* obs) {
		observadores.push_back(obs);
	}
	
	void eliminarObservador(Observador* obs) {
		observadores.erase(remove(observadores.begin(), observadores.end(), obs), observadores.end());
	}
	
	void notificarObservadores(const string& mensaje) {
		for (auto& obs : observadores) {
			obs->actualizar(mensaje);
		}
	}
};

#endif
