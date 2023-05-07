//
// Created by rafa on 7/05/23.
//

#ifndef DESKTOP_PERSONA_H
#define DESKTOP_PERSONA_H

#include <iostream>
#include <string>

class Asignatura;
class Persona {
public:
    Persona(std::string name_ = ""): name{name_}, asignatura{nullptr}{};
    void imparte(Asignatura& asignatura_); // setter
    const Asignatura& imparte() const; // getter
    void mostrarAsignatura() const;
    void mostrar() const;
private:
    std::string name;
    Asignatura* asignatura;
};

#endif //DESKTOP_PERSONA_H