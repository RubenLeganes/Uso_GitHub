#include "Persona.hpp"
#include <iostream>

Persona::Persona(int edad)
{
    this->edad = edad;
    

    if (edad % 2 == 0) {
        this->genero = true;
    } else {
        this->genero = false;
    }

    int numDNI = 12345600 + edad;

    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    char letra = letras[numDNI % 23];

    int temp = numDNI;
    for (int i = 7; i >= 0; i--) {
        this->dni[i] = '0' + (temp % 10);
        temp = temp / 10;
    }
    this->dni[8] = letra;
    this->dni[9] = '\0'; 
}

Persona::~Persona()
{
}

int Persona::getEdad()
{
    return this->edad;
}

bool Persona::esMujer()
{
    return this->genero;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

void Persona::mostrar()
{
    std::cout << "DNI: " << dni 
              << " | Edad: " << edad 
              << " | Genero: " << (genero ? "Mujer" : "Hombre") 
              << std::endl;
}