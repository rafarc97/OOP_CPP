//
// Created by rafa on 12/05/23.
//

#ifndef DESKTOP_PERSONAIMPARTEASIGNATURA_H
#define DESKTOP_PERSONAIMPARTEASIGNATURA_H

#include "Persona.cpp"
#include "Asignatura.cpp"
#include <map>
#include <set>

class PersonaImparteAsignatura {
public:
    PersonaImparteAsignatura(): directa{}, inversa{} {}
    void asocia(Persona& p, Asignatura& a);
    void asocia(Asignatura& a, Persona& p);
    std::set<Asignatura*> asociados(Persona& p) const;
    std::set<Persona*> asociados(Asignatura& a) const;
    void mostrarAsignaturas(Persona& p);
    void mostrarPersonas(Asignatura& a);
private:
    typedef std::map<Persona*,std::set<Asignatura*>> AD;
    typedef std::map<Asignatura*,std::set<Persona*>> AI;
    AD directa;
    AI inversa;
};

#endif //DESKTOP_PERSONAIMPARTEASIGNATURA_H