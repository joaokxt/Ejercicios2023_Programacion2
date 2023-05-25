#ifndef U3EJ4_CRONOMETRO_H
#define U3EJ4_CRONOMETRO_H

class Cronometro {
private:
    int h;
    int m;
    int s;
public:
    Cronometro();
    int getHora();
    int getMinuto();
    int getSegundo();
    void reset();
    void operator++();
};

#endif
