#include <iostream>

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
    #if EJ >= 9 // Para ejercicio 9
    bool operator==(Fecha o);
    #endif
    Fecha(int mes, int dia);
    uint mes();
    uint dia();
    void incrementar_dia();

  private:
    int mes_;
    int dia_;
};

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

#if EJ >= 9
bool Fecha::operator==(Fecha o) {
    bool igual_dia = this->dia() == o.dia();
    bool igual_mes = this->mes() == o.mes();
    return igual_dia & igual_mes;
}
#endif

void Fecha::incrementar_dia() {
    if (dias_en_mes(mes_) == dia_) {
        dia_ = 1;
        mes_++;
    } else {
        dia_++;
    }
}

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

class Recordatorio {
  public:
    Recordatorio(Fecha f, Horario h, string s);
    Fecha fecha();
    Horario horario();
    string mensaje();

  private:
    Fecha fecha_;
    Horario horario_;
    string mensaje_;
};

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

ostream& operator<<(ostream& os, Recordatorio r) {
    os << r.mensaje() << " @ " << r.fecha() << " " << r.horario();
    return os;
}

// Ejercicio 14

class Agenda {
  public:
    Agenda(Fecha fecha_inicial);
    void agregar_recordatorio(Recordatorio rec);
    void incrementar_dia();
    vector<Recordatorio> recordatorios_de_hoy();
    Fecha hoy();

  private:
    Fecha hoy_;
    vector<Recordatorio> recordatorios_de_hoy_;

};

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

vector<Recordatorio> Agenda::recordatorios_de_hoy() {
    vector<Recordatorio> rec_de_hoy;
    for (Recordatorio r : recordatorios_de_hoy_){
        if (r.fecha() == hoy_){
            rec_de_hoy.push_back(r);
        }
    }
    return rec_de_hoy;
}

vector<Recordatorio> rec_ordenado(vector<Recordatorio> v){
    vector<Recordatorio> res;
    Recordatorio min = v[0];
    for (Recordatorio t : v){
        for (Recordatorio r : v){
            if (r.horario() < min.horario()){
                min = r;
            }
        }
        res.push_back(min);
    }

}

ostream& operator<<(ostream& os, Agenda a){
    vector<Recordatorio> rec_de_hoy = a.recordatorios_de_hoy();
    os << a.hoy() << endl;
    os << "=====" << endl;
    for (int i = 0; i < rec_de_hoy.size(); i++){
            for (int j = 1; j < rec_de_hoy.size(); i++){
                if (rec_de_hoy[j].horario() < rec_de_hoy[i].horario()){
                    rec_de_hoy.swap(rec_de_hoy[j], rec_de_hoy[i]);
                }
            }
    }
    return os;
}
