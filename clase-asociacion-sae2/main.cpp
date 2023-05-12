#include "PersonaImparteAsignatura.cpp"

template <typename T>
std::ostream& operator <<(std::ostream& fs, const std::set<T*> c){
    typename std::set<T*>::const_iterator i;
    for(i = c.begin(); i != c.end(); ++i){
        fs << **i;
    }
    return fs;
}

std::ostream& operator <<(std::ostream& fs, const Persona& p){
    p.mostrar();
    return fs;
}

std::ostream& operator <<(std::ostream& fs, const Asignatura& a){
    a.mostrar();
    return fs;
}

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

     std::cout << "Listado de asignaturas que imparte cada persona\n"
     << "-----------------------------------------------\n";
     std::cout << p << pa.asociados(p) << "\n";
     std::cout << p2 << pa.asociados(p2) << "\n";
     std::cout << "Listado de personas que imparten cada asignatura\n"
     << "------------------------------------------------\n";
     std::cout << a << pa.asociados(a) << "\n";
     std::cout << a2 << pa.asociados(a2) << "\n";

    return 0;
}