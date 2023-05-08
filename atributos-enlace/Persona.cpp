//
// Created by rafa on 8/05/23.
//

#include "Persona.h"
#include "Asignatura.h"

const Asignatura& Persona::imparte() const{
    return *asignatura; // *(this->asignatura)
}

void Persona::imparte(Asignatura& asignatura, int horas){
    this->asignatura = &asignatura;
    this->horas = horas;
}

void Persona::mostrarAsignatura() const {
    if(!asignatura){ // this->asignatura
        std::cout << "La persona no imparte ninguna asignatura\n";
    }else{
        asignatura->mostrar(); // this->asignatura->mostrar()
    }
}

void Persona::mostrar() const{
    // this->nombre , this->horas
    std::cout << nombre << " imparte " << horas << " horas.\n";
}