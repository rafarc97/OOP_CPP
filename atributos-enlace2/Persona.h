//
// Created by rafa on 8/05/23.
//

#ifndef ATRIBUTOS_ENLACE2_PERSONA_H
#define ATRIBUTOS_ENLACE2_PERSONA_H

#include <iostream>
#include <string>
#include <map>

class Asignatura;
class Persona {
public:
    typedef std::map<Asignatura*,int*> Asignaturas;
    Persona(std::string nombre_ = "") : nombre{nombre_}, asignaturas{}{}
    const Asignaturas& imparte() const; // getter
    void imparte(Asignatura& asignatura, int& horas); // setter
    void mostrarAsignaturas() const;
    void mostrar() const;
private:
    std::string nombre;
    Asignaturas asignaturas;
};

#endif //ATRIBUTOS_ENLACE2_PERSONA_H