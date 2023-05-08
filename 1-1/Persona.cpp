//
// Created by rafa on 7/05/23.
//

#include "Persona.h"
#include "Asignatura.h"

void Persona::imparte(Asignatura& asignatura){ // setter
    this->asignatura = &asignatura;
}

const Asignatura& Persona::imparte() const{ // getter
    return *asignatura; // *(this->asignatura)
}

void Persona::mostrarAsignatura() const{
    if(!asignatura) // this->asignatura
        std::cout << "No imparte ninguna asignatura\n";
    else
        asignatura->mostrar(); //this->asignatura->mostrar()
}

void Persona::mostrar() const{
    std::cout << name << "\n"; // this->name
}