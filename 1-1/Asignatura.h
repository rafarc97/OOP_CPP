//
// Created by rafa on 7/05/23.
//

#ifndef DESKTOP_ASIGNATURA_H
#define DESKTOP_ASIGNATURA_H

#include <iostream>
#include <string>

class Persona;
class Asignatura {
public:
    Asignatura(std::string name_ = ""): name{name_}, persona{nullptr}{};
    void impartida(Persona& persona_);
    const Persona& impartida() const;
    void mostrarPersona() const;
    void mostrar() const;
private:
    std::string name;
    Persona* persona;
};

#endif //DESKTOP_ASIGNATURA_H