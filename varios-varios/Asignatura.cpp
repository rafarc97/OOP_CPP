//
// Created by rafa on 7/05/23.
//

#include "Asignatura.h"
#include "Persona.h"

void Asignatura::impartida(Persona& persona){
        personas.insert(&persona); // this->personas.insert()....
}

const Asignatura::Personas& Asignatura::impartida() const{
    return personas; // this->personas
}

void Asignatura::mostrarPersonas() const{
    if(personas.empty()) // this->personas.empty()
        std::cout << "Esta asignatura no es impartida por nadie\n";
    else{
        for(Asignatura::Personas::const_iterator
            i = personas.begin(); i != personas.end(); ++i){
            (*i)->mostrar();
        }
    }
}

void Asignatura::mostrar() const{
    std::cout << name << "\n"; // this->name
}