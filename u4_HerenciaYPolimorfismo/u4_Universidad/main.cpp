#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "personal.h"
#include "alumno.h"
#include "docente.h"
#include "materia.h"
using namespace std;

Materia* materias[100];
Alumno* alumnos[100];
Docente* docentes[100];
int opcion, cantAlumnos=0, cantDocentes=0, cantMaterias=0, i, j, k;
char ing;

void Alta(){
    int dni, edad, n, code;
    string nombre, apellido, mail, carrera, titulo;

    system("cls");
    cout<<"-=-=-=-=|ALTA|=-=-=-=-"<<endl;
    cout<<"Desea dar de alta a un: \n1. Alumno \n2. Docente \n3. Catedra"<<endl;
    cout<<"\n>>> ";
    cin>>opcion;
    system("cls");
    switch(opcion){
        case 1:
            cout<<"-=-=-=-=|ALTA ALUMNO|=-=-=-=-"<<endl;
            cout<<"Nombre: ";
            cin>>nombre;
            cout<<"Apellido: ";
            cin>>apellido;
            cout<<"Mail: ";
            cin>>mail;
            cout<<"Edad: ";
            cin>>edad;
            cout<<"DNI: ";
            cin>>dni;
            cout<<"Carrera: ";
            cin>>carrera;
            alumnos[cantAlumnos] = new Alumno(dni, nombre, apellido, mail, carrera, edad);
            cantAlumnos++;
            break;
        case 2:
            cout<<"-=-=-=-=|ALTA DOCENTE|=-=-=-=-"<<endl;
            cout<<"Nombre: ";
            cin>>nombre; 
            cout<<"Apellido: ";
            cin>>apellido;
            cout<<"Mail: ";
            cin>>mail;
            cout<<"DNI: ";
            cin>>dni;
            cout<<"Titulo: ";
            cin>>titulo;
            docentes[cantDocentes] = new Docente(dni, nombre, apellido, mail, titulo);
            cantDocentes++;
            break;
        case 3:
            cout<<"-=-=-=-=|ALTA MATERIA|=-=-=-=-"<<endl;
            cout<<"Nombre: ";
            cin>>nombre;
            cout<<"El codigo asignado es: ";
            code=rand()%(999-100+1)+100;
            cout<<code;
            materias[cantMaterias] = new Materia(code, nombre);
            cantMaterias++;
            cout<<"\nIngrese algo para continuar >>>";
            cin>>ing;
            break;
        default:
            break;
    }
    return;
}

void Inscribir(){
    bool valido;
    int code;
    system("cls");
    fflush(stdin);

    cout<<"-=-=-=-=|INSCRIPCION A MATERIA|=-=-=-=-"<<endl;
    if(cantAlumnos==0){
        cout<<"TODAVIA NO HAY ALUMNOS REGISTRADOS!"<<endl;
        cout<<"Ingrese algo para continuar >>>";
        cin>>ing;
        return;
    }
    cout<<"Ingrese el DNI del alumno a inscribir >>> ";
    cin>>opcion;
    do{
        valido = false;
        for(j=0;j<cantAlumnos;j++)
            if(alumnos[j]->getDNI()==opcion){
                valido=true;
                break;
            }
        if(!valido){
            cout<<"El alumno no existe!"<<endl;
            cout<<"Ingrese el DNI del alumno o ingrese 0 para salir"<<endl;
            cout<<">>> ";
            cin>>opcion;
            if(opcion==0)
                return;
        }
    }while(!valido);

    cout<<"INSCRIPCION DE: "<<alumnos[j]->getNombres()<<" "<<alumnos[j]->getApellidos()<<endl;
    if(cantMaterias==0){
        cout<<"TODAVIA NO HAY MATERIAS REGISTRADAS!"<<endl;
        cout<<"Ingrese algo para continuar >>>";
        cin>>ing;
        return;
    }
    cout<<"Seleccione la materia: "<<endl;
    for(i=0;i<cantMaterias;i++){
        if(materias[i]->hayCupo()==true)
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
            cout<<"NOMBRE: "<<materias[i]->getNombre()<<endl;
            cout<<"CODIGO: "<<materias[i]->getCodigo()<<endl;
            if(materias[i]->getTitular()!=nullptr)
                cout<<"DOCENTE TITULAR: "<<materias[i]->getTitular()->getNombres()<<endl;
            else
                cout<<"DOCENTE TITULAR: SIN DOCENTE ASIGNADO"<<endl;
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
    }
    cout<<"Ingrese el codigo de la materia seleccionada"<<endl;
    cout<<">>> ";
    cin>>code;
    alumnos[j]->inscripcion(materias, code, cantMaterias);

    system("cls");
    cout<<"INSCRIPCION EXITOSA"<<endl;
    cout<<"Ingrese algo para continuar >>>";
    cin>>ing;
    return;
}

void Anotar(){
    bool valido;
    int code;
    system("cls");
    fflush(stdin);

    cout<<"-=-=-=-=|ANOTAR TITULAR|=-=-=-=-"<<endl;
    if(cantDocentes==0){
        cout<<"TODAVIA NO HAY DOCENTES REGISTRADOS!"<<endl;
        cout<<"Ingrese algo para continuar >>>";
        cin>>ing;
        return;
    }
    cout<<"Ingrese el DNI del docente a anotar >>> ";
    cin>>opcion;
    do{
        valido = false;
        for(j=0;j<cantDocentes;j++)
            if(docentes[j]->getDNI()==opcion){
                valido=true;
                break;
            }
        if(!valido){
            cout<<"El docente no existe!"<<endl;
            cout<<"Ingrese el DNI del docente o ingrese 0 para salir"<<endl;
            cout<<">>> ";
            cin>>opcion;
            if(opcion==0)
                return; 
        }
        
    }while(!valido);

    cout<<"ANOTAR A: "<<docentes[j]->getNombres()<<" "<<docentes[j]->getApellidos()<<endl;
    cout<<"Seleccione la materia: "<<endl;
    if(cantMaterias==0){
        cout<<"TODAVIA NO HAY MATERIAS REGISTRADAS!"<<endl;
        cout<<"Ingrese algo para continuar >>>";
        cin>>ing;
        return;
    }
    for(i=0;i<cantMaterias;i++){
        if(materias[i]->hayTitular()==false)
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
            cout<<"NOMBRE: "<<materias[i]->getNombre()<<endl;
            cout<<"CODIGO: "<<materias[i]->getCodigo()<<endl;
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
    }
    cout<<"Ingrese el codigo de la materia seleccionada"<<endl;
    cout<<">>> ";
    cin>>code;
    docentes[j]->inscripcion(materias, code, cantMaterias);

    system("cls");
    cout<<"INSCRIPCION EXITOSA"<<endl;
    cout<<"Ingrese algo para continuar >>>";
    cin>>ing;
    return;
}

void Cargar(){
    bool valido;
    int code, dni, nota;
    system("cls");
    fflush(stdin);

    cout<<"-=-=-=-=|CARGAR NOTA|=-=-=-=-"<<endl;
    if(cantAlumnos==0){
        cout<<"TODAVIA NO HAY ALUMNOS REGISTRADOS!"<<endl;
        cout<<"Ingrese algo para continuar >>>";
        cin>>ing;
        return;
    }
    cout<<"Ingrese el DNI del alumno >>> ";
    cin>>dni;
    do{
        valido=false;
        for(j=0;j<cantAlumnos;j++)
            if(alumnos[j]->getDNI()==dni){
                valido=true;
                break;
            }
        if(!valido){
            cout<<"El alumno no existe!"<<endl;
            cout<<"Ingrese el DNI del alumno o ingrese 0 para salir"<<endl;
            cout<<">>> ";
            cin>>dni;
            if(dni==0)
                return; 
        }
    }while(!valido);

    cout<<"CARGAR NOTA DE: "<<alumnos[j]->getNombres()<<" "<<alumnos[j]->getApellidos()<<endl;
    if(alumnos[j]->getInscripciones()==0){
        cout<<"EL ALUMNO NO ESTA ANOTADO EN NINGUNA MATERIA!"<<endl;
        cout<<"Ingrese algo para continuar >>>";
        cin>>ing;
        return;
    }
    cout<<"Seleccione la materia: "<<endl;
    for(i=0;i<alumnos[j]->getInscripciones();i++){
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
            cout<<"NOMBRE: "<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getNombre()<<endl;
            cout<<"CODIGO: "<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getCodigo()<<endl;
            if(alumnos[j]->getMaterias(materias, cantMaterias)[i]->getTitular()!=nullptr)
                cout<<"DOCENTE TITULAR: "<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getTitular()->getNombres()<<endl;
            else
                cout<<"DOCENTE TITULAR: SIN DOCENTE ASIGNADO"<<endl;
            cout<<"NOTAS: ["<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getNotas(dni)[0]<<"] ["<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getNotas(dni)[1]<<"] ["<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getNotas(dni)[2]<<"]"<<endl;
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
    }
        
    cout<<"Ingrese el codigo de la materia seleccionada"<<endl;
    cout<<">>> ";
    cin>>code;
    cout<<"Ingrese la nota"<<endl;
    cout<<">>> ";
    cin>>nota;
    alumnos[j]->cargarNota(materias, code, nota, cantMaterias);

    system("cls");
    cout<<"CARGA EXITOSA"<<endl;
    cout<<"Ingrese algo para continuar >>>";
    cin>>ing;
    return;
}

void Modificar(){
    int dni, edad;
    string nombre, apellido, mail, carrera, titulo;
    bool valido;
    system("cls");
    fflush(stdin);

    cout<<"-=-=-=-=|MODIFICAR DATOS|=-=-=-=-"<<endl;
    if(cantAlumnos==0 && cantDocentes==0){
        cout<<"TODAVIA NO HAY PERSONAL REGISTRADO!"<<endl;
        cout<<"Ingrese algo para continuar >>>";
        cin>>ing;
        return;
    }
    cout<<"Ingrese el DNI del sujeto >>> ";
    cin>>dni;
    do{
        valido=false;
        for(j=0;j<cantAlumnos;j++)
            if(alumnos[j]->getDNI()==dni){
                valido=true;
                cout<<"-=-=-=-=|DATOS ALUMNO|=-=-=-=-"<<endl;
                cout<<"1. Nombre: "<<alumnos[j]->getNombres()<<endl;
                cout<<"2. Apellido: "<<alumnos[j]->getApellidos()<<endl;
                cout<<"3. Mail: "<<alumnos[j]->getMail()<<endl;
                cout<<"4. Edad: "<<alumnos[j]->getEdad()<<endl;
                cout<<"5. DNI: "<<alumnos[j]->getDNI()<<endl;
                cout<<"6. Carrera: "<<alumnos[j]->getCarrera()<<endl;
                cout<<"X. MATERIAS: "<<endl;
                if(alumnos[j]->getInscripciones()==0)
                    cout<<"EL ALUMNO NO ESTA ANOTADO EN NINGUNA MATERIA!"<<endl;
                for(i=0;i<alumnos[j]->getInscripciones();i++){
                    cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
                    cout<<"NOMBRE: "<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getNombre()<<endl;
                    cout<<"CODIGO: "<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getCodigo()<<endl;
                    if(alumnos[j]->getMaterias(materias, cantMaterias)[i]->getTitular()!=nullptr)
                        cout<<"DOCENTE TITULAR: "<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getTitular()->getNombres()<<endl;
                    else
                        cout<<"DOCENTE TITULAR: SIN DOCENTE ASIGNADO"<<endl;
                    cout<<"NOTAS: ["<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getNotas(dni)[0]<<"] ["<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getNotas(dni)[1]<<"] ["<<alumnos[j]->getMaterias(materias, cantMaterias)[i]->getNotas(dni)[2]<<"]"<<endl;
                    cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
                }
                cout<<"Seleccione el dato que quiere modificar (1 a 6) o ingrese otro numero para volver"<<endl;
                cout<<">>> ";
                cin>>opcion;
                switch(opcion){
                    case 1:
                        cout<<"Nombre: ";
                        cin>>nombre;
                        alumnos[j]->setNombres(nombre);
                        break;
                    case 2:
                        cout<<"Apellido: ";
                        cin>>apellido;
                        alumnos[j]->setApellidos(apellido);
                        break;
                    case 3:
                        cout<<"Mail: ";
                        cin>>mail;
                        alumnos[j]->setMail(mail);
                        break;
                    case 4:
                        cout<<"Edad: ";
                        cin>>edad;
                        alumnos[j]->setEdad(edad);
                        break;
                    case 5:
                        cout<<"DNI: ";
                        cin>>dni;
                        alumnos[j]->setDNI(dni);
                        break;
                    case 6:
                        cout<<"Carrera: ";
                        cin>>carrera;
                        alumnos[j]->setCarrera(carrera);
                        break;
                    default:
                        return;
                }
            }
        for(j=0;j<cantDocentes;j++)
            if(docentes[j]->getDNI()==dni){
                valido=true;
                cout<<"-=-=-=-=|DATOS DOCENTE|=-=-=-=-"<<endl;
                cout<<"1. Nombre: "<<docentes[j]->getNombres()<<endl;
                cout<<"2. Apellido: "<<docentes[j]->getApellidos()<<endl;
                cout<<"3. Mail: "<<docentes[j]->getMail()<<endl;
                cout<<"4. DNI: "<<docentes[j]->getDNI()<<endl;
                cout<<"5. Titulo: "<<docentes[j]->getTitulo()<<endl;
                cout<<"X. MATERIAS: "<<endl;
                if(docentes[j]->getInscripciones()==0)
                    cout<<"EL DOCENTE NO ESTA DICTA NINGUNA MATERIA!"<<endl;
                for(i=0;i<docentes[j]->getInscripciones();i++){
                    cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
                    cout<<"NOMBRE: "<<docentes[j]->getMaterias(materias, cantMaterias)[i]->getNombre()<<endl;
                    cout<<"CODIGO: "<<docentes[j]->getMaterias(materias, cantMaterias)[i]->getCodigo()<<endl;
                    cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
                }
                cout<<"Seleccione el dato que quiere modificar (1 a 6) o ingrese otro numero para volver"<<endl;
                cout<<">>> ";
                cin>>opcion;
                switch(opcion){
                    case 1:
                        cout<<"Nombre: ";
                        cin>>nombre;
                        docentes[j]->setNombres(nombre);
                        break;
                    case 2:
                        cout<<"Apellido: ";
                        cin>>apellido;
                        docentes[j]->setApellidos(apellido);
                        break;
                    case 3:
                        cout<<"Mail: ";
                        cin>>mail;
                        docentes[j]->setMail(mail);
                        break;
                    case 4:
                        cout<<"DNI: ";
                        cin>>dni;
                        alumnos[j]->setDNI(dni);
                        break;
                    case 5:
                        cout<<"Titulo: ";
                        cin>>titulo;
                        docentes[j]->setTitulo(titulo);
                        break;
                    default:
                        return;
                }
            }
        if(!valido){
            cout<<"El sujeto no existe!"<<endl;
            cout<<"Ingrese el DNI del sujeto o ingrese 0 para salir"<<endl;
            cout<<">>> ";
            cin>>dni;
            if(dni==0)
                return; 
        }
    }while(!valido);
    return;
}

int main(){
    int i;
    srand(time(NULL));
    fflush(stdin);
    while(true){
        system("cls");
        cout<<"-=-=-=-=|UCC|=-=-=-=-"<<endl;
        cout<<"1. Alta "<<endl;
        cout<<"2. Inscribir a materia"<<endl;
        cout<<"3. Anotar titular"<<endl;
        cout<<"4. Cargar Nota (Alumnos)"<<endl;
        cout<<"5. Modificar/Consultar Datos"<<endl;
        cout<<"X. Salir"<<endl;
        cout<<"\n>>> ";
        cin>>opcion;
        switch(opcion){
            case 1:
                Alta();
                break;
            case 2:
                Inscribir();
                break;
            case 3:
                Anotar();
                break;
            case 4:
                Cargar();
                break;
            case 5:
                Modificar();
                break;
            default:
                return 0;
                break;
        }
    }
}