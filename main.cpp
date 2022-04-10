/*
  Archivo: main.cpp 
  Autor: Leonardo Andres Garcia Salas <garcia.leonardo@correounivalle.edu.co>
  Fecha creacion: 2022-04-08
  Fecha ultima modificacion: 2022-04-08
Licencia: GNU-GPL
  */

#include <iostream>
using namespace std;

int main()

{

  cout<< "¿cual es tu nombre? "<< endl;
  string nombre;
  // cin >> nombre;  // PROHIBIDO
  getline(cin, nombre);
  cout << "Hola " << nombre << "." " Bienvenido a este programa." << endl;

  cout<< "¿cual es tu apellido? "<< endl;
  string apellidos;
  getline(cin, apellidos);
  cout << "Encantado de conocerte, " << nombre << " " << apellidos << ", espero que estés bien. "<< endl;

cout<< "Nesecito que me digas tu cedula de ciudadania "<< endl;
  string cedula;
  getline(cin, cedula );

  cout << "tu cedula de ciudadania es "<< cedula << endl;


  
  cout<< "Necesito que me digas tu edad: "<< endl;
  int edad; 
  string auxiliar; 
  getline(cin, auxiliar);
  
  // Primero verificar que todas las letras de axiliar sean digitos: 
  for (int cualLetra = 0; cualLetra < 10; cualLetra++)
  {
  cout << "En posicion " << cualLetra "esta la letra: " <<  endl;
  }

  
  edad = stoi(auxiliar); 

  cout << "tu edad es "<< edad << " " "Años" << endl; 

  cout << "eso significa que vas a cumpli " << edad + 1 << " Años. "<< endl; 

  
return 0;
}
