#include <iostream>
#include "alumno.h";
using namespace std;

int main() {
    char nombre[100];
    int clave, i;
    float *n;
    float notas[3];
    cout<<"Ingrese el nombre del alumno --> ";
    cin.get(nombre,100);
    cout<<"Ingrese la clave del mismo --> ";
    cin>>clave;
    cout<<"Ingrese sus notas: \n";
    for(i=0;i<3;i++){
        cout<<"Nota "<<i+1<<": ";
        cin>>notas[i];
    }
    alumno alumno1(nombre, clave, notas);
    n=alumno1.getNotas();
    for(i=0;i<15;i++){
        cout<<"/"<<endl;
        cout<<"|"<<endl;
    }
    cout<<"\n-=-=-=-=RESUMEN DEL ALUMNO=-=-=-=-"<<endl;
    cout<<"Nombre: "<<alumno1.getNombre()<<endl;
    cout<<"Clave: "<<alumno1.getClave()<<endl;
    cout<<"Notas: "<<"["<<*n<<"] ["<<*(n+1)<<"] ["<<*(n+2)<<"]"<<endl;
    cout<<"Nota final: "<<alumno1.getNotaFinal()<<endl;
    cout<<"Aprobado: ";
    if(alumno1.getAprobado()==true)
        cout<<"SI"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
