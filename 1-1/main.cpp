#include "Asignatura.cpp"
#include "Persona.cpp"

// Asociación 1-1
int main(){
    Persona p{"Rafa"};
    Asignatura a{"OOP"};

    p.mostrarAsignatura(); // No imparte ninguna asignatura
    a.mostrarPersona(); // No es impartida por ninguna persona

    p.imparte(a); // establece enlaces entre objetos
    a.impartida(p); // idem

    p.mostrarAsignatura(); // OOP
    a.mostrarPersona(); // Rafa

    return 0;
}