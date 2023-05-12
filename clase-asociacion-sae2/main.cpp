#include "PersonaImparteAsignatura.cpp"

int main(){
    Persona p{"Rafa"}, p2{"Juan"};
    Asignatura a{"POO"}, a2{"EDNL"};

    PersonaImparteAsignatura pa{};

    pa.mostrarAsignaturas(p); pa.mostrarAsignaturas(p2);
    pa.mostrarPersonas(a); pa.mostrarPersonas(a2);

    pa.asocia(p,a); pa.asocia(p,a2);
    pa.asocia(a,p2); pa.asocia(a2,p2);

    pa.mostrarAsignaturas(p); pa.mostrarAsignaturas(p2);
    pa.mostrarPersonas(a); pa.mostrarPersonas(a2);

    return 0;
}