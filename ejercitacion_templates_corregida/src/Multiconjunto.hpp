#include "Multiconjunto.h"

template<class T>
Multiconjunto<T>::Multiconjunto() {}

template<class T>
void Multiconjunto<T>::agregar(T v) {
    mc.push_back(v);
}

template<class T>
int Multiconjunto<T>::ocurrencias(T x) const {
    int cant = 0;
    for (int i = 0; i < mc.size(); ++i) {
        if (mc[i] == x) cant++;
    }
    return cant;
}

template<class T>
bool Multiconjunto<T>::operator<=(Multiconjunto<T> otro) {
    bool res = true;
    for (int i = 0; i < mc.size(); i++) {
        if (ocurrencias(mc[i]) > otro.ocurrencias(mc[i])) res = false;
    }
    return res;
}
