//
// Created by rafa on 8/05/23.
//

#ifndef CLASE_ASOCIACION_SAE_PERSONA_H
#define CLASE_ASOCIACION_SAE_PERSONA_H

#include <iostream>
#include <string>

class Persona {
public:
    Persona(std::string nombre_ = ""): nombre{nombre_} {}
    void mostrar() const;
private:
    std::string nombre;
};

#endif //CLASE_ASOCIACION_SAE_PERSONA_H