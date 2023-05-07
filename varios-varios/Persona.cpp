//
// Created by rafa on 7/05/23.
//

#include "Persona.h"
#include "Asignatura.h"

void Persona::imparte(Asignatura& asignatura) {
        asignaturas.insert(&asignatura);
}

const Persona::Asignaturas& Persona::imparte() const{
    return asignaturas;
}

void Persona::mostrarAsignaturas() const{
    if(asignaturas.empty())
        std::cout << "No imparte ninguna asignatura\n";
    else{
        for(Persona::Asignaturas::const_iterator
            i = asignaturas.begin(); i != asignaturas.end(); ++i){
            (*i)->mostrar();
        }
    }
}

void Persona::mostrar() const{
    std::cout << name << "\n";
}