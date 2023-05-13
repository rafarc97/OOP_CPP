//
// Created by rafa on 12/05/23.
//

#ifndef DESKTOP_PERSONAIMPARTEASIGNATURA_H
#define DESKTOP_PERSONAIMPARTEASIGNATURA_H

#include "Clase.cpp"
#include "Asignatura.cpp"
#include "Persona.cpp"

#include <map>

class PersonaImparteAsignatura {
public:
    typedef std::map<Persona*, Clase*> Profesorado;
    typedef std::map<Asignatura*, Clase*> Docencia;
    void asocia(Persona& p, Asignatura& a, Clase& c);
    void asocia(Asignatura& a, Persona& p, Clase& c);
    Docencia asociados(Persona& p) const;
    Profesorado asociados(Asignatura& a) const;
private:
    std::map<Persona*, Docencia> directa;
    std::map<Asignatura*, Profesorado> inversa;
};

#endif //DESKTOP_PERSONAIMPARTEASIGNATURA_H