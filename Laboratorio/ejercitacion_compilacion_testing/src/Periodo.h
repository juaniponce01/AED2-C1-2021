//
// Created by Juan Ponce on 4/2/21.
//

#ifndef SOLUCION_PERIODO_H
#define SOLUCION_PERIODO_H

#endif //SOLUCION_PERIODO_H

class Periodo {
public:
    Periodo(int anios, int meses, int dias);

    int anios() const;
    int meses() const;
    int dias() const;

private:
    int anios_;
    int meses_;
    int dias_;
};