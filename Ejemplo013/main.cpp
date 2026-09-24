#include <iostream>
#include "Persona.hpp"

int main(int argc, char **argv)
{
    Persona* personas[10];

    for (int i = 0; i < 10; i++) {
        personas[i] = new Persona(18 + i);
    }

    std::cout << "Personas" << std::endl;
    for (int i = 0; i < 10; i++) {
        personas[i]->mostrar();
    }


    for (int i = 0; i < 10; i++) {
        delete personas[i];
    }

    return 0;
}