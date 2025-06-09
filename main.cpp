#include "UsuarioSistema.h"
#include "Catalogo.h"
#include "Prestamo.h"
#include "PrestamoFisico.h"
#include "PrestamoDigital.h"
#include "CreadorPrestamo.h"
#include "CreadorPrestamoFisico.h"
#include "CreadorPrestamoDigital.h"
#include "LibroCatalogo.h"

#include <iostream>
using namespace std;

int main() {
	UsuarioSistema usuarioSistema;
	Catalogo catalogo;
	
	// Agregamos algunos libros al catálogo
	catalogo.agregarLibro(LibroCatalogo("C++ Avanzado", "Libro Fisico"));
	catalogo.agregarLibro(LibroCatalogo("Introduccion a Java", "Ebook"));
	catalogo.agregarLibro(LibroCatalogo("Revista Tecnologia", "Revista"));
	catalogo.agregarLibro(LibroCatalogo("Articulo de IA", "Articulo"));
	
	// LOGIN
	usuarioSistema.login();
	
	int opcion = 0;
	while (true) {
		cout << "\n===== MENU PRINCIPAL =====" << endl;
		
		if (usuarioSistema.getTipoUsuario() == 1) { // ADMINISTRADOR
			cout << "1. Buscar libro" << endl;
			cout << "2. Filtrar libro por tipo" << endl;
			cout << "3. Ver todos los libros" << endl;
			cout << "4. Gestionar usuarios" << endl;
			cout << "5. Hacer prestamo" << endl;
			cout << "6. Reservar libro" << endl;
			cout << "7. Control de devoluciones y multas" << endl;
			cout << "8. Salir" << endl;
		} else { // ESTUDIANTE
			cout << "1. Buscar libro" << endl;
			cout << "2. Filtrar libro por tipo" << endl;
			cout << "3. Ver todos los libros" << endl;
			cout << "4. Ver perfil de usuario" << endl;
			cout << "5. Reservar libro" << endl;
			cout << "6. Salir" << endl;
		}
		
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		if (usuarioSistema.getTipoUsuario() == 1) { // ADMINISTRADOR
			switch (opcion) {
			case 1: {
				string titulo;
				cout << "Ingrese el titulo del libro a buscar: ";
				cin.ignore();
				getline(cin, titulo);
				catalogo.buscarLibro(titulo);
				break;
			}
			case 2: {
				string tipo;
				cout << "Ingrese el tipo de libro a filtrar (Libro Fisico, Ebook, Revista, Articulo): ";
				cin.ignore();
				getline(cin, tipo);
				catalogo.filtrarPorTipo(tipo);
				break;
			}
			case 3: {
				catalogo.mostrarTodosLosLibros();
				break;
			}
			case 4: { // GESTIONAR USUARIOS
				int subopcion = 0;
				cout << "\n===== GESTION DE USUARIOS =====" << endl;
				cout << "1. Agregar nuevo usuario" << endl;
				cout << "2. Ver perfil de usuario" << endl;
				cout << "3. Listar todos los usuarios" << endl;
				cout << "Seleccione una opcion: ";
				cin >> subopcion;
				
				switch (subopcion) {
				case 1:
					usuarioSistema.agregarUsuario();
					break;
				case 2:
					usuarioSistema.verPerfilUsuario();
					break;
				case 3:
					usuarioSistema.listarUsuarios();
					break;
				default:
					cout << "Opcion invalida en gestion de usuarios." << endl;
					break;
				}
				break;
			}
			case 5: { // HACER PRESTAMO
				int tipoPrestamo;
				cout << "Seleccione tipo de prestamo: 1. Fisico 2. Digital: ";
				cin >> tipoPrestamo;
				
				CreadorPrestamo* creador = nullptr;
				if (tipoPrestamo == 1)
					creador = new CreadorPrestamoFisico();
				else
					creador = new CreadorPrestamoDigital();
				
				Prestamo* prestamo = creador->crearPrestamo();
				prestamo->procesar();
				delete prestamo;
				delete creador;
				break;
			}
			case 6: { // RESERVAR LIBRO (SIMULADO)
				cout << "Libro reservado exitosamente para el usuario." << endl;
				break;
			}
			case 7: { // CONTROL DE DEVOLUCIONES Y MULTAS (SIMULADO)
				cout << "Control de devoluciones: Fecha de devolucion simulada." << endl;
				cout << "Multas: No hay multas pendientes. (Simulado)" << endl;
				break;
			}
			case 8:
				cout << "Saliendo del sistema." << endl;
				return 0;
			default:
				cout << "Opcion invalida." << endl;
				break;
			}
		} else { // ESTUDIANTE
			switch (opcion) {
			case 1: {
				string titulo;
				cout << "Ingrese el titulo del libro a buscar: ";
				cin.ignore();
				getline(cin, titulo);
				catalogo.buscarLibro(titulo);
				break;
			}
			case 2: {
				string tipo;
				cout << "Ingrese el tipo de libro a filtrar (Libro Fisico, Ebook, Revista, Articulo): ";
				cin.ignore();
				getline(cin, tipo);
				catalogo.filtrarPorTipo(tipo);
				break;
			}
			case 3: {
				catalogo.mostrarTodosLosLibros();
				break;
			}
			case 4: { // VER PERFIL DE USUARIO
				usuarioSistema.verPerfilUsuario();
				break;
			}
			case 5: { // RESERVAR LIBRO (SIMULADO)
				cout << "Libro reservado exitosamente para el usuario." << endl;
				break;
			}
			case 6:
				cout << "Saliendo del sistema." << endl;
				return 0;
			default:
				cout << "Opcion invalida." << endl;
				break;
			}
		}
	}
	
	return 0;
}

