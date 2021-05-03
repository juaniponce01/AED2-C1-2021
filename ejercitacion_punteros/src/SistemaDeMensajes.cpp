#include "SistemaDeMensajes.h"

SistemaDeMensajes::SistemaDeMensajes() : _conns() {};

// Pre: 0 <= id < 4
void SistemaDeMensajes::registrarJugador(int id, string ip) {
    if (_conns[id] != NULL) {
        delete _conns[id];
        _conns[id] = new ConexionJugador(ip);
    } else {
        _conns[id] = new ConexionJugador(ip);
    }
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
    for (int i=0; i < _vpr.size(); i++){
        delete _vpr[i];
    }
};

void SistemaDeMensajes::desregistrarJugador(int id) {
    delete _conns[id];
    _conns[id] = NULL;
};

Proxy* SistemaDeMensajes::obtenerProxy(int id) {
    Proxy* nuevoProxy = new Proxy(&_conns[id]);
    _vpr.push_back(nuevoProxy);
    return nuevoProxy;
};