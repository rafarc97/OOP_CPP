//
// Created by rafa on 12/05/23.
//

#include "PersonaImparteAsignatura.h"
void PersonaImparteAsignatura::asocia(Persona& p, Asignatura& a, Clase& c){
    directa[&p].insert(std::make_pair(&a,&c));
    inversa[&a].insert(std::make_pair(&p,&c));
}

void PersonaImparteAsignatura::asocia(Asignatura& a, Persona& p, Clase& c){
    asocia(p,a,c);
}

PersonaImparteAsignatura::Docencia PersonaImparteAsignatura::asociados(Persona& p) const{
    std::map<Persona*,Docencia>::const_iterator
        i = directa.find(&p);
    if(i != directa.end()) return i->second;
    else return Docencia();
}

PersonaImparteAsignatura::Profesorado PersonaImparteAsignatura::asociados(Asignatura& a) const{
    std::map<Asignatura*,Profesorado>::const_iterator
        i = inversa.find(&a);
    if(i != inversa.end()) return i->second;
    else return Profesorado();
}