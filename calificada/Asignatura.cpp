//
// Created by rafa on 8/05/23.
//

#include "Persona.h"
#include "Asignatura.h"

const Asignatura::Personas& Asignatura::impartida() const {
    return personas; // this->personas
}

void Asignatura::impartida(Persona& persona) {
    personas.insert(&persona); // this->personas.insert()
}

void Asignatura::mostrarPersonas() const{
    if(personas.empty()){ // this->personas.empty()
        std::cout << "La asignatura no es impartida por ninguna persona\n";
    }else{
        for(Asignatura::Personas::const_iterator
                    i = personas.begin(); i != personas.end(); ++i){
            (*i)->mostrar();
        }
    }
}

void Asignatura::mostrar() const{
    std::cout << codigo << "\n"; // this->codigo
}

std::string Asignatura::getCodigo() const {
    return codigo; // this->codigo
}