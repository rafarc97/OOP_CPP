//
// Created by rafa on 8/05/23.
//

#ifndef CLASE_ASOCIACION_SAE_PERSONAIMPARTEASIGNATURA_H
#define CLASE_ASOCIACION_SAE_PERSONAIMPARTEASIGNATURA_H


class Persona;
classAsignatura;

class PersonaImparteAsignatura {
public:
    typedef std::multimap<Persona*,Asignatura*>PersonaAsignatura;
    typedef std::multimap<Asignatura*,Persona*>AsignaturaPersona;


    void mostrarPersona() const;
    void mostrarAsignatura() const;
private:
    PersonaAsignatura personaasignatura;
    AsignaturaPersona  asignaturapersona;
    PersonaAsignatura::const_iterator PA;
    AsignaturaPersona::const_iterator AP;
};


#endif //CLASE_ASOCIACION_SAE_PERSONAIMPARTEASIGNATURA_H
