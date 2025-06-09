#ifndef PRESTAMO_H
#define PRESTAMO_H

#include <iostream>
using namespace std;

class Prestamo {
public:
	virtual void procesar() = 0;
	virtual ~Prestamo() {}
};

#endif
