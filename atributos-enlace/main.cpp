#include "Persona.cpp"
#include "Asignatura.cpp"

int main(){
    Persona p{"Rafa"};
    Asignatura a{"OOP"};
    Persona p2{"Pedro"};
    Asignatura a2{"EDNL"};

    p.mostrarAsignatura();
    a.mostrarPersonas();

    p.imparte(a,3);
    p2.imparte(a, 5);
    a.impartida(p);
    a.impartida(p2);

    p.mostrarAsignatura(); // OOP
    // Rafa imparte 3 horas. \n Pedro imparte 5 horas.
    a.mostrarPersonas();
    return 0;
}