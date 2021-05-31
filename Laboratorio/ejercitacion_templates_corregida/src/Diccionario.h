#ifndef __DICCIONARIO_H__
#define __DICCIONARIO_H__

#include <vector>

using namespace std;

typedef int Clave;
typedef int Valor;

template<class Clave, class Valor>
class Diccionario {
public:
	Diccionario();
	void definir(Clave k, Valor v);
	bool def(Clave k) const;
	Valor obtener(Clave k) const;
	vector<Clave> claves();

private:
	struct Asociacion {
		Asociacion(Clave k, Valor v);
		Clave clave;
		Valor valor;
	};
	vector<Asociacion> _asociaciones;
	vector<Clave> _claves;
};

#endif /*__DICCIONARIO_H__*/
