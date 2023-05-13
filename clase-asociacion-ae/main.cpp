#include "PersonaImparteAsignatura.cpp"

int main(){
    Persona p{"Rafa"}, p2{"Juan"};
    Asignatura a{"POO"}, a2{"EDNL"};
    Clase c{"C1"}, c2{"C2"};
    PersonaImparteAsignatura pa{};

    p.mostrar(); p2.mostrar();
    a.mostrar(); a2.mostrar();
    c.mostrar(); c2.mostrar();

    pa.asocia(p,a2,c2);

    PersonaImparteAsignatura::Docencia c1{};
    c1 = pa.asociados(p);

    for(std::map<Asignatura*,Clase*>::const_iterator
        i = c1.cbegin(); i != c1.cend(); ++i){
            i->first->mostrar();
            i->second->mostrar();
    }

    return 0;
}