//
// Created by Juan Ponce on 21/04/2021.
//

#ifndef SOLUCION_RECORDATORIOS_H
#define SOLUCION_RECORDATORIOS_H

using namespace std;

using uint = unsigned int;

// Pre: 0 <= mes < 12
uint dias_en_mes(uint mes) {
    uint dias[] = {
            // ene, feb, mar, abr, may, jun
            31, 28, 31, 30, 31, 30,
            // jul, ago, sep, oct, nov, dic
            31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1];
}

// Ejercicio 7, 8, 9 y 10

// Clase Fecha
class Fecha {
public:
    // Completar declaraciones funciones
    bool operator==(Fecha o);
    Fecha(int mes, int dia);
    uint mes();
    uint dia();
    void incrementar_dia();

private:
    int mes_;
    int dia_;
};

// Ejercicio 11, 12

class Horario {
public:
    Horario(uint hora, uint min);
    uint hora();
    uint min();
    bool operator==(Horario o);
    bool operator<(Horario o);

private:
    int hora_;
    int min_;
};

// Ejercicio 13

class Recordatorio {
public:
    Recordatorio(Fecha f, Horario h, string s);
    Fecha fecha();
    Horario horario();
    string mensaje();
    bool operator==(Recordatorio o);

private:
    Fecha fecha_;
    Horario horario_;
    string mensaje_;
};

// Ejercicio 14

class Agenda {
public:
    Agenda(Fecha fecha_inicial);
    void agregar_recordatorio(Recordatorio rec);
    void incrementar_dia();
    list<Recordatorio> recordatorios_de_hoy();
    Fecha hoy();

private:
    Fecha hoy_;
    list<Recordatorio> recordatorios_de_hoy_;

};

#endif //SOLUCION_RECORDATORIOS_H
