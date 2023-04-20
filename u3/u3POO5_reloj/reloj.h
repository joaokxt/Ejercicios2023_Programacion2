//
// Created by joaok on 20/04/2023.
//

#ifndef U3_RELOJ_H
#define U3_RELOJ_H


class Reloj {
private:
    struct hora{
        int h;
        int m;
        int s;
    };
    struct alarma{
        int h;
        int m;
    };
public:
    Reloj();
    Reloj(int hora, int minuto, int segundo);
    void setAlarma(int hora, int minuto);
    bool alarma();
    void operator++();
    int getHora();
    int getMinuto();
    int getSegundo();
};


#endif //U3_RELOJ_H
