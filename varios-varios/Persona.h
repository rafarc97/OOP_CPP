//
// Created by rafa on 7/05/23.
//

#ifndef DESKTOP_PERSONA_H
#define DESKTOP_PERSONA_H

#include <string>
#include <set>
#include <iostream>

class Asignatura;
class Persona {
public:
    typedef std::set<Asignatura*> Asignaturas; //sinonimo
    Persona(std::string name_ = ""): name{name_}, asignaturas{} {}
    void imparte(Asignatura& asignatura); // setter
    const Asignaturas& imparte() const; // getter
    void mostrarAsignaturas() const;
    void mostrar() const;
private:
    std::string name;
    Asignaturas asignaturas;
};


#endif //DESKTOP_PERSONA_H