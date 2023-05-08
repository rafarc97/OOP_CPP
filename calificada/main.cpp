#include "Persona.cpp"
#include "Asignatura.cpp"

int main(){

    Persona p{"Rafa"};
    Asignatura a{"OOP"};

    p.mostrarAsignatura();
    a.mostrarPersonas();

    p.imparte(a);
    a.impartida(p);

    p.mostrarAsignatura();
    a.mostrarPersonas();

    return 0;
}