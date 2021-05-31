#ifndef SOLUCION_MULTICONJUNTO_H
#define SOLUCION_MULTICONJUNTO_H

#include <vector>

using namespace std;

template<class T>
class Multiconjunto {
public:
    Multiconjunto();
    void agregar(T v);
    int ocurrencias(T  k) const;
    bool operator<=(Multiconjunto<T> otro);

private:
    vector<T> mc;
};
#endif //SOLUCION_MULTICONJUNTO_H
