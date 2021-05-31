#include<string>

using namespace std;

// Ejercicio 1: Pasar a templates
template<class T>
T cuadrado(T x) {
  return x * x;
}

// Ejercicio 2: Pasar a templates
template<class Contenedor, class Elem>
bool contiene(Contenedor s, Elem c) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == c) {
      return true;
    }
  }
  return false;
}

// Ejercicio 3: Funcion es prefijo con un template contenedor
template<class Contenedor>
bool esPrefijo(Contenedor a, Contenedor b){
    int j = 0;
    for (int i = 0; i < b.size() && j < a.size(); i++) {
        (b[i] == a[j])? j++ : j = 0;
    }
    return j == a.size();
}

// Ejercicio 4: Función maximo con un template contenedor y uno elemento
template<class Contenedor, class Elem>
Elem maximo(Contenedor c){
    Elem maximo = c[0];
    for (Elem e : c){
        if (maximo < e) maximo = e;
    }
    return maximo;
}