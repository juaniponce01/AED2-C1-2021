#include <vector>
#include "algobot.h"

using namespace std;

// Ejercicio 1
vector<int> quitar_repetidos(vector<int> s) {
    set<int> set_a;
    vector<int> res;
    for(int i = 0; i < s.size(); i++) {
        if (set_a.count(s[i]) == 0) {
            set_a.insert(s[i]);
            res.push_back(s[i]);
        }
    }
    return res;
}

// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    set<int> set_a;
    vector<int> res;
    for(int i = 0; i < s.size(); i++) {
        if (set_a.count(s[i]) == 0) {
            set_a.insert(s[i]);
            res.push_back(s[i]);
        }
    }
    return res;
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    set<int> set_a;
    bool res = true;
    for(int i = 0; i < a.size(); i++){
        set_a.insert(a[i]);
    }
    for(int j = 0; j < b.size(); j++){
        if (set_a.count(b[j]) == 0){
            res = false;
        }
    }
    return res;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    set<int> set_a;
    bool res = true;
    for(int i = 0; i < a.size(); i++){
        set_a.insert(a[i]);
    }
    for(int j = 0; j < b.size(); j++){
        if (set_a.count(b[j]) == 0){
            res = false;
        }
    }
    return res;
}

// Ejercicio 5
map<int, int> contar_apariciones(vector<int> s) {
    map<int, int> m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]] += 1;
    }
    return m;
}

// Ejercicio 6
vector<int> filtrar_repetidos(vector<int> s) {
    vector<int> res;
    map<int, int> m = contar_apariciones(s);
    for(int i = 0; i < s.size(); i++){
        if (m[s[i]] == 1){
            res.push_back(s[i]);
        }
    }
    return res;
}

// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {
    vector<int> vec_a;
    set<int> res;
    for (int i : a){
        if (b.count(i) == 1){
            res.insert(i);
        }
    }
    return res;
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    map<int, set<int>> res;
    for (int i = 0; i < s.size(); i++){
        if (res.count(s[i] % 10) == 1){
            res[s[i] % 10].insert(s[i]);
        } else {
            res[s[i] % 10].insert(s[i]);
        }
    }
    return res;
}

// Ejercicio 9
vector<char> traducir(vector<pair<char, char>> tr, vector<char> str) {
    vector<char> res;
    for (int i = 0; i < str.size(); i++){
        for (int j = 0; j < tr.size(); j++){
            if (str[i] == tr[j].first) res.push_back(tr[j].second);
        }
        if (i != res.size()-1){
            res.push_back(str[i]);
        }
    }
    return res;
}

// Ejercicio 10
bool integrantes_repetidos(vector<Mail> s) {
    bool res = false;
    for (int i = 0; i < s.size(); i++){
        for (int j = 0; j < s.size(); j++){
            set<LU> l1 = s[i].libretas();
            set<LU> l2 = s[j].libretas();
            if (i != j && l1 != l2){
                for(LU lib : l1){
                    for(LU lib2 : l2){
                        if (lib == lib2) res = true;
                    }
                }
            }
        }
    }
    return res;
}

// Ejercicio 11
map<set<LU>, Mail> entregas_finales(vector<Mail> s) {
    map<set<LU>, Mail> res;
    for (int i = 0; i < s.size(); i++){
        set<LU> l = s[i].libretas();
        if (res.count(l) == 1){
            if (s[i].fecha() > res[l].fecha() && s[i].adjunto()) res[l] = s[i];
        } else {
            res[l] = s[i];
        }
    }
    return res;
}
