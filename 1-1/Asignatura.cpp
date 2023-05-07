//
// Created by rafa on 7/05/23.
//

#include "Asignatura.h"
#include "Persona.h"

void Asignatura::impartida(Persona& persona){
    this->persona = &persona;
}

const Persona& Asignatura::impartida() const{
    return *persona; // probar con this->persona
}

void Asignatura::mostrarPersona() const{
    if(!persona)
        std::cout << "No es impartida por ninguna persona\n";
    else
        persona->mostrar();
}

void Asignatura::mostrar() const{
    std::cout << name << "\n";
}