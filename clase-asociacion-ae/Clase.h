//
// Created by rafa on 12/05/23.
//

#ifndef DESKTOP_CLASE_H
#define DESKTOP_CLASE_H

#include <iostream>
#include <string>

class Clase {
public:
    Clase(std::string a = ""): aula{a} {}
    void mostrar() const;
private:
    int horas;
    std::string aula;
};

#endif //DESKTOP_CLASE_H