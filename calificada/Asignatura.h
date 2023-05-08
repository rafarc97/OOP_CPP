//
// Created by rafa on 8/05/23.
//

#ifndef CALIFICADA_ASIGNATURA_H
#define CALIFICADA_ASIGNATURA_H

#include <iostream>
#include <string>
#include <set>

class Persona; // declaracion adelantada
class Asignatura {
public:
    typedef std::set<Persona*> Personas; // sinonimo
    Asignatura(std::string codigo_) : codigo{codigo_}, personas{}{}
    const Personas& impartida() const; // getter
    void impartida(Persona& persona); // setter
    void mostrarPersonas() const;
    void mostrar() const;
    std::string getCodigo() const; // getter
private:
    std::string codigo;
    Personas personas;
};

#endif //CALIFICADA_ASIGNATURA_H