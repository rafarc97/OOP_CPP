//
// Created by rafa on 7/05/23.
//

#include "Asignatura.h"
#include "Persona.h"

void Asignatura::impartida(Persona& persona){
    this->persona = &persona;
}

const Persona& Asignatura::impartida() const{
    return *persona; // *(this->persona)
}

void Asignatura::mostrarPersona() const{
    if(!persona) // this->persona
        std::cout << "No es impartida por ninguna persona\n";
    else
        persona->mostrar(); // this->persona->mostrar()
}

void Asignatura::mostrar() const{
    std::cout << name << "\n"; // this->name
}