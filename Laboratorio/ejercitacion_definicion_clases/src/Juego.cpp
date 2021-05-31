#include <utility>

using namespace std;

// Ejercicio 15

// Juego

using Pos = pair<int, int>;

char ARRIBA = '^';
char ABAJO = 'v'; 
char DERECHA = '<';
char IZQUIERDA = '>';

class Juego {
  public:
    Juego(uint casilleros, Pos pos_inicial);
    Pos posicion_jugador();
    uint turno_actual();
    void mover_jugador(char dir);
    void ingerir_pocion(uint movimientos, uint turnos);

  private:
    uint casilleros_;
    Pos posicion_jugador_;
    uint turno_actual_;
    uint movimientos_;
    uint turnos_;
    uint cantMovimientos_;
};

Juego::Juego(uint casilleros, Pos pos_inicial) : posicion_jugador_(pos_inicial), casilleros_(casilleros), turno_actual_(0), movimientos_(0), turnos_(0), cantMovimientos_(0) {}

Pos Juego::posicion_jugador() {
    return posicion_jugador_;
}

uint Juego::turno_actual() {
    return turno_actual_;
}

void Juego::mover_jugador(char dir) {
    if (dir == ARRIBA & posicion_jugador_.first > 0) {
        posicion_jugador_.first--;
    }
    if (dir == ABAJO & posicion_jugador_.first < casilleros_) {
        posicion_jugador_.first++;
    }
    if (dir == DERECHA & posicion_jugador_.second < casilleros_) {
        posicion_jugador_.second++;
    }
    if (dir == IZQUIERDA & posicion_jugador_.second > 0) {
        posicion_jugador_.second--;
    }
    if (turnos_ > 0) {
        if (cantMovimientos_ > 1){
            cantMovimientos_--;
        } else {
            turno_actual_++;
            cantMovimientos_ = movimientos_;
            turnos_--;
        }
    } else {
        turno_actual_++;
    }
}

void Juego::ingerir_pocion(uint movimientos, uint turnos) {
    movimientos_ += movimientos;
    turnos_ += turnos;
    cantMovimientos_ += movimientos;
}


