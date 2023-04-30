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
int opcion, cantAlumnos=0, cantDocentes=0, cantMaterias=0, i, j;

void Alta(){
    int dni, edad, n;
    string nombre, apellido, mail, carrera, titulo;
    char* code;
    code = new char[8];

    system("cls");
    cout<<"-=-=-=-=|ALTA|=-=-=-=-"<<endl;
    cout<<"Desea dar de alta a un: \n1.Alumno \n2.Docente \n3.Catedra"<<endl;
    cout<<"\n>>> ";
    cin>>opcion;
    switch(opcion){
        case 1:
            cantAlumnos++;
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
            cantDocentes++;
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
            cantMaterias++;
            cout<<"-=-=-=-=|ALTA MATERIA|=-=-=-=-"<<endl;
            cout<<"Nombre: ";
            cin>>nombre;
            cout<<"El codigo asignado es: ";
            for(i=0;i<8;i++){
                n=rand()%(57-49+1)+49;
                code[i]= static_cast<char>(n);
                cout<<code[i];
            }
            cout<<endl;
            materias[cantMaterias] = new Materia(code, nombre);
            cout<<"Ingrese algo para continuar >>> ";
            cin>>opcion;
            break;
    }
    return;
}

void Inscribir(){
    char* code;
    code = new char[8];
    system("cls");
    cout<<"-=-=-=-=|INSCRIPCION A MATERIA|=-=-=-=-"<<endl;
    cout<<"Ingrese el DNI del alumno a inscribir >>>";
    cin>>opcion;
    for(j=0;j<cantAlumnos;j++)
        if(alumnos[j]->getDNI()==opcion)
           break;
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
    cout<<"Ingrese algo para continuar >>>";
    cin>>opcion;
    return;
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