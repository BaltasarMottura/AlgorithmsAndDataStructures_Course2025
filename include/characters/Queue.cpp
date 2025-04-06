//
// Created by balta on 6/4/2025.
//
#include <iostream>
#include <string>


template<class T>
Queue<T>::Nodo::Nodo(T& dato) : dato(dato), next(nullptr) {}

template<class T>
Queue<T>::Nodo::~Nodo() = default;

// Constructor Queue
template<class T>
Queue<T>::Queue() : czo(nullptr), ultimo(nullptr) {}

// Enqueue
template<class T>
void Queue<T>::enqueue(T dato) {
    Nodo* nuevoNodo = new Nodo(dato);
    if (ultimo == nullptr) {
        ultimo = nuevoNodo;
        czo = nuevoNodo;
    }
    nuevoNodo->next = czo;
    czo = nuevoNodo;
}

// Dequeue
template<class T>
void Queue<T>::dequeue() {
    if (czo == nullptr) {
        return;
    }
    Nodo* temp = czo;
    Nodo* anterior = nullptr;
    while (temp->next != nullptr) {
        anterior = temp;
        temp = temp->next;
    }

    if (anterior != nullptr) {
        anterior->next = nullptr;
        delete temp;
        ultimo = anterior;
    } else {
        delete czo;
        czo = nullptr;
        ultimo = nullptr;
    }
}

// getFront
template<class T>
T Queue<T>::getFront() {
    if (ultimo == nullptr) {
        return T(); // Retorna el objeto por defecto si está vacío
    }
    return ultimo->dato;
}
