//
// Created by rafa on 12/05/23.
//

#include "PersonaImparteAsignatura.h"
void PersonaImparteAsignatura::asocia(Persona& p, Asignatura& a){
    directa[&p].insert(&a);
    inversa[&a].insert(&p);
}

void PersonaImparteAsignatura::asocia(Asignatura& a, Persona& p){
    asocia(p,a);
}

std::set<Asignatura*> PersonaImparteAsignatura::asociados(Persona& p) const{
    AD::const_iterator
        i = directa.find(&p);
    if(i != directa.end()) return i->second;
    else return std::set<Asignatura*>();
}

std::set<Persona*> PersonaImparteAsignatura::asociados(Asignatura& a) const{
    AI::const_iterator
        i = inversa.find(&a);
    if(i != inversa.end()) return i->second;
    else return std::set<Persona*>();
}

void PersonaImparteAsignatura::mostrarAsignaturas(Persona& p) {
    if(directa[&p].cbegin() == directa[&p].cend()){
        std::cout << "La persona no imparte ninguna asignatura\n";
    }else{
        std::set<Asignatura*>::const_iterator i;
        for(i = directa[&p].cbegin(); i != directa[&p].cend(); ++i){
            (*i)->mostrar();
        }
    }
}

void PersonaImparteAsignatura::mostrarPersonas(Asignatura& a){
    if(inversa[&a].cbegin() == inversa[&a].cend()){
        std::cout << "La asignatura no es impartida por ninguna persona\n";
    }else {
        std::set<Persona*>::const_iterator i;
        for (i = inversa[&a].cbegin(); i != inversa[&a].cend(); ++i) {
            (*i)->mostrar();
        }
    }
}