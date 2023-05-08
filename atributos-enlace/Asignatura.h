//
// Created by rafa on 8/05/23.
//

#ifndef ATRIBUTOS_ENLACE_ASIGNATURA_H
#define ATRIBUTOS_ENLACE_ASIGNATURA_H

#include <iostream>
#include <string>
#include <set>

class Persona; // declaracion adelantada
class Asignatura {
public:
    typedef std::set<Persona*> Personas; // sinonimo
    Asignatura(std::string nombre_ = "") : nombre{nombre_}, personas{}{}
    const Personas& impartida() const; // getter
    void impartida(Persona& persona); // setter
    void mostrarPersonas() const;
    void mostrar() const;
private:
    std::string nombre;
    Personas personas;
};

#endif //ATRIBUTOS_ENLACE_ASIGNATURA_H