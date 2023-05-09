//
// Created by rafa on 8/05/23.
//

#ifndef CLASE_ASOCIACION_SAE_PERSONAIMPARTEASIGNATURA_H
#define CLASE_ASOCIACION_SAE_PERSONAIMPARTEASIGNATURA_H

#include "Persona.cpp"
#include "Asignatura.cpp"


#include <map>

class PersonaImparteAsignatura {
public:
    // sinonimos multimaps e iteradores
    typedef std::multimap<Persona*,Asignatura*> AD;
    typedef std::multimap<Asignatura*,Persona*> AI;
    typedef AD::const_iterator ID;
    typedef AI::const_iterator II;
    bool esta(Persona& p, Asignatura& a) const;
    void asocia(Asignatura& a, Persona& p);
    void asocia(Persona& p, Asignatura& a);
    void mostrarPersonas(Asignatura& a) const;
    void mostrarAsignaturas(Persona& p) const;
private:
    AD directa;
    AI inversa;
    AD::const_iterator PA;
    AI::const_iterator AP;
};

#endif //CLASE_ASOCIACION_SAE_PERSONAIMPARTEASIGNATURA_H