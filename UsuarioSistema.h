#ifndef USUARIOSISTEMA_H
#define USUARIOSISTEMA_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class UsuarioSistema {
private:
	int tipoUsuario; // 1 = Administrador, 2 = Estudiante
	string nombreUsuario;
	vector<string> listaUsuarios;
	
public:
	UsuarioSistema() : tipoUsuario(0), nombreUsuario("") {}
	
	void login() {
		cout << "===== LOGIN =====" << endl;
		cout << "Ingrese su nombre de usuario: ";
		cin.ignore();
		getline(cin, nombreUsuario);
		
		cout << "Seleccione tipo de usuario:" << endl;
		cout << "1. Administrador" << endl;
		cout << "2. Estudiante" << endl;
		cout << "Opcion: ";
		cin >> tipoUsuario;
		
		// Agregamos este usuario a la lista (simulado)
		listaUsuarios.push_back(nombreUsuario);
		
		cout << "Bienvenido " << nombreUsuario << "!" << endl;
	}
	
	int getTipoUsuario() const {
		return tipoUsuario;
	}
	
	string getNombreUsuario() const {
		return nombreUsuario;
	}
	
	void verPerfilUsuario() {
		cout << "===== Perfil de Usuario =====" << endl;
		cout << "Nombre de usuario: " << nombreUsuario << endl;
		if (tipoUsuario == 1)
			cout << "Tipo de usuario: Administrador" << endl;
		else
			cout << "Tipo de usuario: Estudiante" << endl;
	}
	
	void agregarUsuario() {
		string nuevoUsuario;
		cout << "Ingrese el nombre del nuevo usuario: ";
		cin.ignore();
		getline(cin, nuevoUsuario);
		listaUsuarios.push_back(nuevoUsuario);
		cout << "Usuario '" << nuevoUsuario << "' agregado exitosamente." << endl;
	}
	
	void listarUsuarios() {
		cout << "===== Lista de Usuarios =====" << endl;
		for (const auto& user : listaUsuarios) {
			cout << "- " << user << endl;
		}
	}
};

#endif

