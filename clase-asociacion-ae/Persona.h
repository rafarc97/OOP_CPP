//
// Created by rafa on 12/05/23.
//

#ifndef DESKTOP_PERSONA_H
#define DESKTOP_PERSONA_H

#include <iostream>
#include <string>

class Persona {
public:
    Persona(std::string n = ""): nombre{n} {}
    void mostrar() const;
private:
    std::string nombre;
};

#endif //DESKTOP_PERSONA_H