#include <iostream>
#include <windows.h>
#include "persona.h"
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
Persona* persona;

void registro(){
    char sex;
    int birth[3], id, num;
    float height, weight;
    string name;

    cout<<"|REGISTRO DE PERSONA|"<<endl;
    cout<<"Indique los datos que desea ingresar: "<<endl;
    cout<<"1. Ninguno"<<endl;
    cout<<"2. Nombre, edad y sexo"<<endl;
    cout<<"3. Toddos los datos"<<endl;
    cout<<"\n >> ";
    cin>>num;
    switch (num){
    case 1:
        persona = new Persona();
        break;
    case 2:
        cout<<"- NOMBRE: ";
        cin>>name;
        cout<<"- FECHA DE NACIMIENTO"<<endl;
        cout<<"  - Dia: ";
        cin>>birth[0];
        cout<<"  - Mes: ";
        cin>>birth[1];
        cout<<"  - Anio: ";
        cin>>birth[2];
        do{
            cout<<"- Sexo (M:Mujer|H:Hombre): ";
            cin>>sex;
        }while(sex!='M' && sex!='m' && sex!='H' && sex!='m');
        persona = new Persona(name, birth, sex);
        break;
    case 3:
        cout<<"- NOMBRE: ";
        cin>>name;
        cout<<"- FECHA DE NACIMIENTO"<<endl;
        cout<<"  - Dia: ";
        cin>>birth[0];
        cout<<"  - Mes: ";
        cin>>birth[1];
        cout<<"  - Anio: ";
        cin>>birth[2];
        cout<<"- DNI: ";
        cin>>id;
        do{
            cout<<"- Sexo (M:Mujer|H:Hombre): ";
            cin>>sex;
        }while(sex!='M' && sex!='m' && sex!='H' && sex!='m');
        cout<<"- Peso: ";
        cin>>weight;
        cout<<"- Altura: ";
        cin>>height;
        persona = new Persona(name, birth, id, sex, weight, height);
        break;
    default:
        break;
    }
}

void verDatos(){
    cout<<"|DATOS|"<<endl;
    cout<<"-Nombre: "<<persona->getNombre()<<endl;
    cout<<"-Nacimiento: ";
    if(persona->getNacimiento()[0]==0){
        cout<<"SIN ESPECIFICAR"<<endl;
    }else{
        cout<<persona->getNacimiento()[0]<<"/"<<persona->getNacimiento()[1]<<"/"<<persona->getNacimiento()[2]<<endl;
        cout<<"-Edad: "<<persona->getEdad()<<" anios"<<endl;
    }
    cout<<"-DNI: ";
    if(persona->getDni()==0){
        cout<<"SIN ESPECIFICAR"<<endl;
    }else{
        cout<<persona->getDni()<<endl;
    }
    cout<<"-Peso: ";
    if(persona->getPeso()==0){
        cout<<"SIN ESPECIFICAR"<<endl;
    }else{
        cout<<persona->getPeso()<<endl;
    }
    cout<<"-Altura: ";
    if(persona->getAltura()==0){
        cout<<"SIN ESPECIFICAR"<<endl;
    }else{
        cout<<persona->getEdad();
    }
    cout<<endl;
    cout<<"Menor de edad? -> ";
    if(persona->esMayorDeEdad()){
        SetConsoleTextAttribute(hConsole, 10);
        cout<<"SI"<<endl;
    }else{
        SetConsoleTextAttribute(hConsole, 12);
        cout<<"NO"<<endl;
    }
    SetConsoleTextAttribute(hConsole, 15);
    cout<<"IMC: ";
    if(persona->calcularIMC()<30){
        if(persona->calcularIMC()<25){
            if(persona->calcularIMC()<18.5){
                SetConsoleTextAttribute(hConsole, 14);
                cout<<persona->calcularIMC()<<endl;
            }else{
                SetConsoleTextAttribute(hConsole, 10);
                cout<<persona->calcularIMC()<<endl;
            }
        }else{
            SetConsoleTextAttribute(hConsole, 14);
            cout<<persona->calcularIMC()<<endl;
        }
    }else{
        SetConsoleTextAttribute(hConsole, 12);
        cout<<persona->calcularIMC()<<endl;
    }
    SetConsoleTextAttribute(hConsole, 15);
}

void modificarDatos(){
    char sex;
    int birth[3], id, num;
    float height, weight;
    string name;

    cout<<"|REGISTRO DE PERSONA|"<<endl;
    cout<<"- NOMBRE: ";
    cin>>name;
    cout<<"- FECHA DE NACIMIENTO"<<endl;
    cout<<"  - Dia: ";
    cin>>birth[0];
    cout<<"  - Mes: ";
    cin>>birth[1];
    cout<<"  - Anio: ";
    cin>>birth[2];
    cout<<"- DNI: ";
    cin>>id;
    do{
        cout<<"- Sexo (M:Mujer|H:Hombre): ";
        cin>>sex;
    }while(sex!='M' && sex!='m' && sex!='H' && sex!='m');
    cout<<"- Peso: ";
    cin>>weight;
    cout<<"- Altura: ";
    cin>>height;

    persona->setNombre(name);
    persona->setNacimiento(birth);
    persona->setDni(id);
    persona->setSexo(sex);
    persona->setPeso(weight);
    persona->setAltura(height);
}

int main(){
    int aux;

    registro();

    while(true){
        cout<<"|MENU|"<<endl;
        cout<<"1. Ver datos"<<endl;
        cout<<"2. Modificar datos"<<endl;
        cout<<"X. Salir"<<endl;
        cout<<"\n >> ";
        cin>>aux;
        
        switch(aux){
            case 1:
                verDatos();
                break;
            case 2:
                modificarDatos();
                break;
            default:
                return 0;
        }
    }
}