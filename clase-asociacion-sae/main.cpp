#include "PersonaImparteAsignatura.cpp"

int main(){
    Persona p{"Rafa"}, p2{"Pedro"};
    Asignatura a{"OOP"}, a2{"EDNL"};
    p.mostrar(); a.mostrar(); p2.mostrar(); a2.mostrar();

    PersonaImparteAsignatura pa;

    pa.mostrarPersonas(a); pa.mostrarAsignaturas(p);
    pa.mostrarPersonas(a2); pa.mostrarAsignaturas(p2);

    pa.asocia(p,a); pa.asocia(p,a2);
    pa.asocia(p2,a); pa.asocia(p2,a2);

    pa.mostrarPersonas(a); pa.mostrarAsignaturas(p);
    pa.mostrarPersonas(a2); pa.mostrarAsignaturas(p2);

    return 0;
}