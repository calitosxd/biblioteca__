#ifndef OBSERVADOR_H
#define OBSERVADOR_H

#include <string>
using namespace std;

class Observador {
public:
	virtual void actualizar(const string& mensaje) = 0;
	virtual ~Observador() {}
};

#endif

