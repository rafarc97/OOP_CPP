//
// Created by rafa on 7/05/23.
//

#include "Persona.h"
#include "Asignatura.h"

void Persona::imparte(Asignatura& asignatura){ // setter
    this->asignatura = &asignatura;
}

const Asignatura& Persona::imparte() const{ // getter
    return *asignatura; // probar con this->asignatura
}

void Persona::mostrarAsignatura() const{
    if(!asignatura)
        std::cout << "No imparte ninguna asignatura\n";
    else
        asignatura->mostrar();
}

void Persona::mostrar() const{
    std::cout << name << "\n";
}