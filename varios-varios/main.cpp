//
// Created by rafa on 7/05/23.
//

#include "Asignatura.cpp"
#include "Persona.cpp"

int main(){
    Persona p{"Rafa"};
    Persona p2{"Pedro"};
    Asignatura a{"OOP"};
    Asignatura a2{"EDNL"};

    p.mostrarAsignaturas(); // No imparte ninguna asignatura
    p2.mostrarAsignaturas(); // No imparte ninguna asignatura
    a.mostrarPersonas(); // Esta asignatura no es impartida por nadie
    a2.mostrarPersonas(); // Esta asignatura no es impartida por nadie

    p.imparte(a);
    p.imparte(a2);
    p2.imparte(a);
    p2.imparte(a2);
    a.impartida(p);
    a.impartida(p2);
    a2.impartida(p);
    a2.impartida(p2);

    p.mostrarAsignaturas(); // OOP EDNL
    p2.mostrarAsignaturas(); // OOP EDNL
    a.mostrarPersonas(); // Rafa Pedro
    a2.mostrarPersonas(); // Rafa Pedro

    return 0;
}