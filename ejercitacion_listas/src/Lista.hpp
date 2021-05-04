#include "Lista.h"

Lista::Lista() :  longitud_(0), head(NULL), last(NULL) {}

Lista::Nodo::Nodo(const int &elem) : data(elem), next(NULL), back(NULL) {}

Lista::Lista(const Lista& l) : Lista() {
    //Inicializa una lista vacía y luego utiliza operator= para no duplicar el código de la copia de una lista.
    *this = l;
}

Lista::~Lista() {
    for (int i = 0; i < longitud_; ++i) {
        eliminar(i);
    }
}

Lista& Lista::operator=(const Lista& aCopiar) {
    if (aCopiar.head != NULL){
        for (int i = aCopiar.longitud()-1; i >= 0 ; --i) {
            this->agregarAdelante(aCopiar.iesimo(i));
        }
    } else {
        for (int i = 0; i < aCopiar.longitud(); ++i) {
            this->agregarAtras(aCopiar.iesimo(i));
        }
    }
    this->longitud_ = aCopiar.longitud();
    return *this;
}

void Lista::agregarAdelante(const int& elem) {
    Nodo* n = new Nodo(elem);
    if (this->head != NULL){
        n->next = this->head;
        head->back = n;
        this->head = n;
    } else {
        head = n;
    }
    if (this->last != NULL){
        Nodo* m = head;
        while(m->next != NULL){
            m = m->next;
        }
        if (m != last){
            Nodo* d = last;
            while(d->back != NULL){
                d = d->back;
            }
            m->next = d;
            d->back = m;
        }
    }
    longitud_++;
}

void Lista::agregarAtras(const int& elem) {
    Nodo* n = new Nodo(elem);
    if (this->last != NULL){
        n->back = this->last;
        last->next = n;
        this->last = n;
    } else {
        last = n;
    }
    longitud_++;
}

void Lista::eliminar(Nat i) {
    if (this->head != NULL) {
        Nodo* m = head;
        for (int n = 0; n < i; n++) {
            m = m->next;
        }
        if (m->back == NULL){
            if (m->next == NULL) {
                head = m;
            } else {
                (m->next)->back = m->back;
                head = m->next;
            }
        } else if (m->next == NULL) {
            (m->back)->next = m->next;
        } else {
            (m->back)->next = m->next;
            (m->next)->back = m->back;
        }
        delete m;
    } else {
        Nodo* m = last;
        for (int j = 0; j < longitud_-1; j++){
            m = m->back;
        }
        for (int n = 0; n < i; n++) {
            m = m->next;
        }
        if (m->back == NULL){
            if (m->next == NULL){
                last = m;
            } else {
                (m->next)->back = m->back;
            }
        } else if (m->next == NULL) {
            (m->back)->next = m->next;
            last = m->back;
        } else {
            (m->back)->next = m->next;
            (m->next)->back = m->back;
        }
        delete m;
    }
    longitud_--;
}

int Lista::longitud() const {
    return this->longitud_;
}

const int& Lista::iesimo(Nat i) const {
    if (this->head != NULL) {
        Nodo *m = head;
        for (int n = 0; n < i; n++) {
            m = m->next;
        }
        return m->data;
    } else {
        Nodo *m = last;
        for (int j = 0; j < longitud_-1; j++){
            m = m->back;
        }
        for (int n = 0; n < i; n++) {
            m = m->next;
        }
        return m->data;
    }
}

int& Lista::iesimo(Nat i) {
    if (this->head != NULL) {
        Nodo *m = head;
        for (int n = 0; n < i; n++) {
            m = m->next;
        }
        return m->data;
    } else {
        Nodo *m = last;
        for (int j = 0; j < longitud_-1; j++){
            m = m->back;
        }
        for (int n = 0; n < i; n++) {
            m = m->next;
        }
        return m->data;
    }
}

void Lista::mostrar(ostream& o) {
    for (int i = 0; i < longitud_; ++i) {
        o << this->iesimo(i) << endl;
    }
}
