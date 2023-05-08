//
// Created by rafa on 7/05/23.
//

#ifndef DESKTOP_ASIGNATURA_H
#define DESKTOP_ASIGNATURA_H

#include <string>
#include <set>
#include <iostream>

class Persona; // declaracion adelantada
class Asignatura {
public:
    typedef std::set<Persona*> Personas; // sinonimo
    Asignatura(std::string name_ = ""): name{name_}, personas{} {}
    void impartida(Persona& persona); // setter
    const Personas& impartida() const; // getter
    void mostrarPersonas() const;
    void mostrar() const;
private:
    std::string name;
    Personas personas;
};

#endif //DESKTOP_ASIGNATURA_H