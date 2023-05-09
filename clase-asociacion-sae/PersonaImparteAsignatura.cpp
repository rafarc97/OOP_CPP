//
// Created by rafa on 8/05/23.
//

#include "PersonaImparteAsignatura.h"

bool PersonaImparteAsignatura::esta(Persona& p, Asignatura& a) const{
    std::pair<PersonaImparteAsignatura::ID,
                PersonaImparteAsignatura::ID>
                    rango = directa.equal_range(&p);
    for(PersonaImparteAsignatura::ID
        i = rango.first; i != rango.second; ++i){
        if(i->second == &a) return true;
    }
    return false;
}

void PersonaImparteAsignatura::asocia(Persona &p, Asignatura &a) {
    if(!esta(p,a)){
        directa.insert(std::make_pair(&p,&a));
        inversa.insert(std::make_pair(&a,&p));
    }
}

void PersonaImparteAsignatura::asocia(Asignatura &a, Persona &p) {
    asocia(p,a);
}

void PersonaImparteAsignatura::mostrarAsignaturas(Persona &p) const {
    std::pair<PersonaImparteAsignatura::ID,
                PersonaImparteAsignatura::ID>
                    rango = directa.equal_range(&p);
    if(rango.first == rango.second)
        std::cout << "No imparte ninguna asignatura\n";
    else{
        for(PersonaImparteAsignatura::ID
            i = rango.first; i != rango.second; ++i){
            i->second->mostrar();
        }
    }
}

void PersonaImparteAsignatura::mostrarPersonas(Asignatura &a) const {
    std::pair<PersonaImparteAsignatura::II,
    PersonaImparteAsignatura::II>
            rango = inversa.equal_range(&a);
    if(rango.first == rango.second)
        std::cout << "No es impartida por ninguna persona\n";
    else{
        for(PersonaImparteAsignatura::II
                    i = rango.first; i != rango.second; ++i){
            i->second->mostrar();
        }
    }
}