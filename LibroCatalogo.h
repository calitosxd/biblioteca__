#ifndef LIBROCATALOGO_H
#define LIBROCATALOGO_H

#include <string>
using namespace std;

class LibroCatalogo {
private:
	string titulo;
	string tipo;
	
public:
	LibroCatalogo(const string& t, const string& ti) : titulo(t), tipo(ti) {}
	
	string getTitulo() const { return titulo; }
	string getTipo() const { return tipo; }
};

#endif
