#include "SistemaDeMensajes.h"

SistemaDeMensajes::SistemaDeMensajes() : _conns() {};

// Pre: 0 <= id < 4
void SistemaDeMensajes::registrarJugador(int id, string ip) {
    _conns[id] = new ConexionJugador(ip);
};
// Pre: 0 <= id < 4
bool SistemaDeMensajes::registrado(int id) const {
    return _conns[id] != NULL;
};

// Pre: registrado(id)
void SistemaDeMensajes::enviarMensaje(int id, string mensaje) {
    _conns[id]->enviarMensaje(mensaje);
};

// Pre: registrado(id)
string SistemaDeMensajes::ipJugador(int id) const {
    return _conns[id]->ip();
};

// destructor
SistemaDeMensajes::~SistemaDeMensajes() {
    delete _conns[0];
    delete _conns[1];
    delete _conns[2];
    delete _conns[3];
};