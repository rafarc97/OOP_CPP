//
// Created by rafa on 8/05/23.
//

#ifndef CALIFICADA_PERSONA_H
#define CALIFICADA_PERSONA_H

#include <iostream>
#include <string>
#include <map>

class Asignatura; // declaracion adelantada
class Persona {
public:
    typedef std::map<std::string,Asignatura*> Asignatura_; // sinonimo
    Persona(std::string nombre_ = ""): nombre{nombre_}, asignatura{} {}
    void imparte(Asignatura& asignatura); // setter
    const Asignatura_& imparte() const; // getter
    void mostrarAsignatura() const;
    void mostrar() const;
private:
    Asignatura_ asignatura;
    std::string nombre;
};

#endif //CALIFICADA_PERSONA_H