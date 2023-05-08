//
// Created by rafa on 8/05/23.
//

#include "Persona.h"
#include "Asignatura.h"

const Persona::Asignaturas& Persona::imparte() const{
    return asignaturas; // this->asignaturas
}

void Persona::imparte(Asignatura& asignatura, int& horas){
    asignaturas.insert(std::make_pair(&asignatura,&horas)); // this->asignaturas.in...
}

void Persona::mostrarAsignaturas() const {
    if(asignaturas.empty()){
        std::cout << "La persona no imparte ninguna asignatura\n";
    }else{
        for(Persona::Asignaturas::const_iterator
        i = asignaturas.cbegin(); i != asignaturas.cend(); ++i){
            i->first->mostrar(); // i->first->mostrar()
            std::cout << *(i->second) << " horas por " << nombre << "\n";
        }
    }
}

void Persona::mostrar() const{
    // this->nombre ; this->horas
    std::cout << nombre << " imparte ";
}