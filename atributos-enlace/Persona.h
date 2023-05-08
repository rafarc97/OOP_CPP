//
// Created by rafa on 8/05/23.
//

#ifndef ATRIBUTOS_ENLACE_PERSONA_H
#define ATRIBUTOS_ENLACE_PERSONA_H

#include <iostream>
#include <string>

class Asignatura; // declaracion adelantada
class Persona {
public:
    Persona(std::string nombre_ = "") :nombre{nombre_}, asignatura{nullptr}{}
    const Asignatura& imparte() const; // getter
    void imparte(Asignatura& asignatura, int horas); // setter
    void mostrarAsignatura() const;
    void mostrar() const;
private:
    std::string nombre;
    int horas;
    Asignatura* asignatura;
};

#endif //ATRIBUTOS_ENLACE_PERSONA_H