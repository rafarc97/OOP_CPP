//
// Created by rafa on 12/05/23.
//

#ifndef DESKTOP_ASIGNATURA_H
#define DESKTOP_ASIGNATURA_H

#include <iostream>
#include <string>

class Asignatura {
public:
    Asignatura(std::string n = ""): nombre{n} {}
    void mostrar() const;
private:
    std::string nombre;
};

#endif //DESKTOP_ASIGNATURA_H