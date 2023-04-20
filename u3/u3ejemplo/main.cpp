#include <iostream>
#include "triangulo.h"
using namespace std;

int main() {
    Triangulo t(4,5);
    t.setB(5);
    t.setH(6);
    cout<<"La base de t es de "<<t.getB()<<endl;
    cout<<"La altura de t es de "<<t.getH()<<endl;
    cout<<"La superficie de t es de "<<t.getS()<<endl;
}
