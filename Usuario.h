#ifndef USUARIO_H
#define USUARIO_H

#include "Observador.h"
#include <iostream>
#include <string>
using namespace std;

class Usuario : public Observador {
private:
	string id;
public:
	Usuario(const string& idUsuario) : id(idUsuario) {}
	
	void actualizar(const string& mensaje) override {
		cout << "Usuario " << id << " recibio notificacion: " << mensaje << endl;
	}
};

#endif
