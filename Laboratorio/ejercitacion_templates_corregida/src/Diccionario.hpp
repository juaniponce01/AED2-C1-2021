#include <cassert>
#include "Diccionario.h"

template<class Clave, class Valor>
Diccionario<Clave, Valor>::Diccionario() {
}

template<class Clave, class Valor>
Diccionario<Clave, Valor>::Asociacion::Asociacion(Clave k, Valor v) : clave(k), valor(v) {
}

template<class Clave, class Valor>
void Diccionario<Clave, Valor>::definir(Clave k, Valor v) {
	for (unsigned int i = 0; i < _asociaciones.size(); i++) {
		if (_asociaciones[i].clave == k) {
			_asociaciones[i].valor = v;
			return;
		}
	}
	_asociaciones.push_back(Asociacion(k, v));
    _claves.push_back(k);
}

template<class Clave, class Valor>
bool Diccionario<Clave, Valor>::def(Clave k) const {
	for (unsigned int i = 0; i < _asociaciones.size(); i++) {
		if (_asociaciones[i].clave == k) {
			return true;
		}
	}
	return false;
}

template<class Clave, class Valor>
Valor Diccionario<Clave, Valor>::obtener(Clave k) const {
	for (unsigned int i = 0; i < _asociaciones.size(); i++) {
		if (_asociaciones[i].clave == k) {
			return _asociaciones[i].valor;
		}
	}
	assert(false);
}

template<class Clave>
Clave minimo(vector<Clave> c){
    Clave min = c[0];
    for (Clave e : c){
        if (e < min) min = e;
    }
    return min;
}

template<class Clave, class Valor>
vector<Clave> Diccionario<Clave, Valor>::claves() {
    vector<Clave> v;
    for (int i = 0; i < _claves.size(); i++){
        v.push_back(minimo(_claves));
//        _claves.erase(minimo(_claves));
    }
    return  v;
};



