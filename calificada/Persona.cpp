//
// Created by rafa on 8/05/23.
//

#include "Persona.h"
#include "Asignatura.h"

void Persona::imparte(Asignatura& asignatura){
    this->asignatura.insert(std::make_pair(asignatura.getCodigo(), &asignatura));
}

const Persona::Asignatura_& Persona::imparte() const{
    return asignatura; // this->asignatura
}

void Persona::mostrarAsignatura() const {
    if(asignatura.empty()){ // this->asignatura.empty()
        std::cout << "La persona no imparte ninguna asignatura\n";
    }else{
        for(Persona::Asignatura_::const_iterator
        i = asignatura.begin(); i != asignatura.end(); ++i){
            i->second->mostrar();
        }
    }
}

void Persona::mostrar() const{
    std::cout << nombre << "\n"; // this->nombre
}