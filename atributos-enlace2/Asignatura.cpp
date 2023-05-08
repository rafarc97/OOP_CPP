//
// Created by rafa on 8/05/23.
//

#include "Persona.h"
#include "Asignatura.h"

const Asignatura::Personas& Asignatura::impartida() const{
    return personas; // this->personas
}

void Asignatura::impartida(Persona& persona, int horas){
    personas.insert(std::make_pair(&persona,horas)); // this->personas.in...
}

void Asignatura::mostrarPersonas() const{
    if(personas.empty()){
        std::cout << "La asignatura no es impartida por ninguna persona\n";
    }else{
        for(Asignatura::Personas::const_iterator
        i = personas.cbegin(); i != personas.cend(); ++i){
            i->first->mostrar();
            std::cout << i->second << " horas la asignatura " << nombre << "\n";
        }
    }
}

void Asignatura::mostrar() const{
    // this->nombre ; this->horas
    std::cout << nombre << " es impartida ";
}