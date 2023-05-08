//
// Created by rafa on 8/05/23.
//

#ifndef ATRIBUTOS_ENLACE2_ASIGNATURA_H
#define ATRIBUTOS_ENLACE2_ASIGNATURA_H

#include <iostream>
#include <string>
#include <map>

class Persona;
class Asignatura {
public:
    typedef std::map<Persona*,int> Personas;
    Asignatura(std::string nombre_ = "") : nombre{nombre_}, personas{} {}
    const Personas& impartida() const;
    void impartida(Persona& persona, int horas);
    void mostrarPersonas() const;
    void mostrar() const;
private:
    std::string nombre;
    Personas personas;
};

#endif //ATRIBUTOS_ENLACE2_ASIGNATURA_H