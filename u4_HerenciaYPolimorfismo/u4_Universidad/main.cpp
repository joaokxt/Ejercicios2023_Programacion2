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
int opcion, cantAlumnos=0, cantDocentes=0, cantMaterias=0, i, j;

void Alta(){
    int dni, edad, n, code;
    string nombre, apellido, mail, carrera, titulo;

    system("cls");
    cout<<"-=-=-=-=|ALTA|=-=-=-=-"<<endl;
    cout<<"Desea dar de alta a un: \n1.Alumno \n2.Docente \n3.Catedra"<<endl;
    cout<<"\n>>> ";
    cin>>opcion;
    switch(opcion){
        case 1:
            cout<<"-=-=-=-=|ALTA ALUMNO|=-=-=-=-"<<endl;
            cout<<"Nombre: ";
            cin>>nombre; /*USAR GETLINE PARA PRESERVAR ESPACIOS*/
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
            cin>>nombre; /*USAR GETLINE PARA PRESERVAR ESPACIOS*/
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
            cout<<"\nIngrese algo para continuar >>> ";
            cin>>opcion;
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
    cout<<"Ingrese el DNI del alumno a inscribir >>>";
    cin>>opcion;
    do{
        for(j=0;j<cantAlumnos;j++)
            if(alumnos[j]->getDNI()==opcion){
                valido=true;
                break;
            }
        valido=false;
        cout<<"El alumno no existe!"<<endl;
        cout<<"Ingrese el DNI del alumno o ingrese 0 para salir"<<endl;
        cout<<">>> ";
        cin>>opcion;
        if(opcion==0)
            return;
    }while(!valido);

    cout<<"Seleccione la materia: "<<endl;
    for(i=0;i<cantMaterias;i++){
        if(materias[i]->hayCupo()==true)
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
            cout<<"NOMBRE: "<<materias[i]->getNombre()<<endl;
            cout<<"CÓDIGO: "<<materias[i]->getCodigo()<<endl;
            if(materias[i]->getTitular()!=nullptr)
                cout<<"DOCENTE TITULAR: "<<materias[i]->getTitular()<<endl;
            else
                cout<<"DOCENTE TITULAR: SIN DOCENTE ASIGNADO"<<endl;
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
    }
    cout<<"Ingrese el código de la materia seleccionada"<<endl;
    cout<<">>> ";
    cin>>code;
    alumnos[j]->inscripcion(materias, code);

    system("cls");
    cout<<"INSCRIPCIÓN EXITOSA"<<endl;
    cout<<"Ingrese algo para continuar >>>";
    cin>>opcion;
    return;
}

void Anotar(){
    bool valido;
    int code;
    system("cls");
    fflush(stdin);

    cout<<"-=-=-=-=|ANOTAR TITULAR|=-=-=-=-"<<endl;
    cout<<"Ingrese el DNI del docente a anotar >>>";
    cin>>opcion;
    do{
        for(j=0;j<cantDocentes;j++)
            if(docentes[j]->getDNI()==opcion){
                valido=true;
                break;
            }
        valido=false;
        cout<<"El docente no existe!"<<endl;
        cout<<"Ingrese el DNI del docente o ingrese 0 para salir"<<endl;
        cout<<">>> ";
        cin>>opcion;
        if(opcion==0)
            return;
    }while(!valido);

    cout<<"Seleccione la materia: "<<endl;
    for(i=0;i<cantMaterias;i++){
        if(materias[i]->hayTitular()==false)
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
            cout<<"NOMBRE: "<<materias[i]->getNombre()<<endl;
            cout<<"CÓDIGO: "<<materias[i]->getCodigo()<<endl;
            cout<<"-=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=--=-=-=-=-"<<endl;
    }
    cout<<"Ingrese el código de la materia seleccionada"<<endl;
    cout<<">>> ";
    cin>>code;
    docentes[j]->inscripcion(materias, code);

    system("cls");
    cout<<"INSCRIPCIÓN EXITOSA"<<endl;
    cout<<"Ingrese algo para continuar >>>";
    cin>>opcion;
    return;
}

void Cargar(){

}

void Modificar(){

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
        cout<<"5. Modificar Datos"<<endl;
        cout<<"6. Salir"<<endl;
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
            case 6:
                return 0;
        }
    }
}