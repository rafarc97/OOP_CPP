#include "Persona.cpp"
#include "Asignatura.cpp"

int main(){
    Persona p{"Rafa"};
    Asignatura a{"OOP"};

    int horas = 5;

    p.imparte(a,horas); a.impartida(p, horas);
    p.mostrarAsignaturas(); // OOP es impartida 5 horas por Rafa
     a.mostrarPersonas(); // Rafa imparte 5 horas la asignatura OOP

    return 0;
}