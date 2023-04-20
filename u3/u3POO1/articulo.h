//
// Created by joaok on 30/03/2023.
//

#ifndef U3POO1_ARTICULO_H
#define U3POO1_ARTICULO_H


class articulo {
private:
    float c;
    float cMenor;
    float cMayor;
public:
    articulo(float costo);
    void incremento(float incremento);
    void setCosto(float costo);
    float getCosto();
    float getCostoMenor();
    float getCostoMayor();

};


#endif //U3POO1_ARTICULO_H
