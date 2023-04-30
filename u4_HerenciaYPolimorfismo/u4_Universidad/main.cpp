#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "personal.h"
#include "alumno.h"
#include "docente.h"
#include "materia.h"
using namespace std;

Materia** materias;
Alumno** alumnos;
Docente** docentes;
int opcion, cantAlumnos=0, cantDocentes=0, cantMaterias=0;

void Alta(){
    int dni, edad, i;
    string nombre, apellido, mail, carrera, titulo;
    int* code;
    code = new int[8];

    system("cls");
    cout<<"-=-=-=-=|ALTA|=-=-=-=-"<<endl;
    cout<<"Desea dar de alta a un: \n1. Alumno \n2.docente \n3.Cátedra?"<<endl;
    cout<<">>> ";
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
            break;
        case 3:
            cout<<"-=-=-=-=|ALTA MATERIA|=-=-=-=-"<<endl;
            cout<<"Nombre";
            cin>>nombre;
            cout<<"El codigo asignado es: ";
            for(i=0;i<8;i++){
                code[i]= rand()%10;
                cout<<code[i];
            }
            cout<<endl;
            materias[cantMaterias] = new Materia(code, nombre);
            break;
    }
    return;
}

void Inscribir(){
    system("cls");
    cout<<"-=-=-=-=|INSCRIPCION A MATERIA|=-=-=-=-"<<endl;
}

void Anotar(){

}

void Cargar(){

}

void Modificar(){

}

int main(){
    int i;
    srand(time(NULL));
    materias = new Materia*[100];
    alumnos = new Alumno*[100];
    docentes = new Docente*[100];
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