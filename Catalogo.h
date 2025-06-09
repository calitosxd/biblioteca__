#ifndef CATALOGO_H
#define CATALOGO_H

#include "LibroCatalogo.h"
#include <vector>
#include <iostream>
using namespace std;

class Catalogo {
private:
	vector<LibroCatalogo> libros;
	
public:
	void agregarLibro(const LibroCatalogo& libro) {
		libros.push_back(libro);
	}
	
	void buscarLibro(const string& titulo) {
		bool encontrado = false;
		for (const auto& libro : libros) {
			if (libro.getTitulo() == titulo) {
				cout << "Libro encontrado: " << libro.getTitulo() << " | Tipo: " << libro.getTipo() << endl;
				encontrado = true;
			}
		}
		if (!encontrado) {
			cout << "Libro no encontrado." << endl;
		}
	}
	
	void filtrarPorTipo(const string& tipo) {
		bool encontrado = false;
		cout << "Libros del tipo: " << tipo << endl;
		for (const auto& libro : libros) {
			if (libro.getTipo() == tipo) {
				cout << "- " << libro.getTitulo() << endl;
				encontrado = true;
			}
		}
		if (!encontrado) {
			cout << "No hay libros de ese tipo." << endl;
		}
	}
	
	void mostrarTodosLosLibros() {
		cout << "===== Todos los libros en el catalogo =====" << endl;
		for (const auto& libro : libros) {
			cout << "- " << libro.getTitulo() << " | Tipo: " << libro.getTipo() << endl;
		}
	}
};

#endif

