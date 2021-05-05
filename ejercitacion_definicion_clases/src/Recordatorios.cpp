#include <iostream>
#include <list>
#include "Recordatorios.h"

// Ejercicio 7, 8, 9 y 10

// Clase Fecha
Fecha::Fecha(int mes, int dia) : mes_(mes), dia_(dia) {}

uint Fecha::mes() {
    return mes_;
}

uint Fecha::dia() {
    return dia_;
}

ostream& operator<<(ostream& os, Fecha f) {
    os << f.dia() << "/" << f.mes();
    return os;
}

bool Fecha::operator==(Fecha o) {
    bool igual_dia = this->dia() == o.dia();
    bool igual_mes = this->mes() == o.mes();
    return igual_dia & igual_mes;
}

bool operator<(Fecha f, Fecha g){
    bool dia_menor = f.dia() < g.dia();
    bool mes_menor = f.mes() < g.mes();
    if (f.mes() == g.mes()){
        return dia_menor;
    } else {
        return mes_menor;
    }
}

void Fecha::incrementar_dia() {
    if (dias_en_mes(mes_) == dia_) {
        dia_ = 1;
        mes_ = (mes_ + 1) % 12;
    } else {
        dia_++;
    }
}

// Ejercicio 11, 12

Horario::Horario(uint hora, uint min) : hora_(hora), min_(min) {}
uint Horario::hora() {
    return hora_;
}
uint Horario::min() {
    return min_;
}

ostream& operator<<(ostream& os, Horario h) {
    os << h.hora() << ":" << h.min();
    return os;
}

bool Horario::operator==(Horario o) {
    bool igual_hora = hora() == o.hora();
    bool igual_min = min() == o.min();
    return igual_hora & igual_min;
}

bool Horario::operator<(Horario o) {
    if (hora() == o.hora()) {
        return min() < o.min();
    } else {
        return hora() < o.hora();
    }
}

// Ejercicio 13

Recordatorio::Recordatorio(Fecha f, Horario h, string s) : fecha_(f), horario_(h), mensaje_(s) {}

Fecha Recordatorio::fecha() {
    return fecha_;
}

Horario Recordatorio::horario() {
    return horario_;
}

string Recordatorio::mensaje() {
    return mensaje_;
}

bool Recordatorio::operator==(Recordatorio o){
    bool igual_fecha = fecha() == o.fecha();
    bool igual_horario = horario() == o.horario();
    bool igual_mensaje = mensaje() == o.mensaje();
    return igual_fecha & igual_horario & igual_mensaje;
}

bool operator<(Recordatorio r, Recordatorio s){
    bool menor_fecha = r.fecha() < s.fecha();
    bool menor_horario = r.horario() < s.horario();
    if (r.fecha() == s.fecha()){
        return menor_horario;
    } else {
        return menor_fecha;
    }
}

ostream& operator<<(ostream& os, Recordatorio r) {
    os << r.mensaje() << " @ " << r.fecha() << " " << r.horario();
    return os;
}

// Ejercicio 14

Agenda::Agenda(Fecha fecha_inicial) : hoy_(fecha_inicial) {}

Fecha Agenda::hoy() {
    return hoy_;
}

void Agenda::agregar_recordatorio(Recordatorio rec) {
    recordatorios_de_hoy_.push_back(rec);
}

void Agenda::incrementar_dia() {
    hoy_.incrementar_dia();
}

list<Recordatorio> Agenda::recordatorios_de_hoy() {
    list<Recordatorio> rec_de_hoy;
    for (Recordatorio r : recordatorios_de_hoy_){
        if (r.fecha() == hoy_){
            rec_de_hoy.push_back(r);
        }
    }
    rec_de_hoy.sort();
    return rec_de_hoy;
}

ostream& operator<<(ostream& os, Agenda a){
    os << a.hoy() << endl;
    os << "=====" << endl;
    for (Recordatorio r : a.recordatorios_de_hoy()) {
        os << r << endl;
    }
    return os;
}
