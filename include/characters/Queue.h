//
// Created by balta on 6/4/2025.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <string>

template<class T>
class Queue{

    private:
        struct Nodo{
            T dato;
            Nodo* next;

            Nodo(T& dato) : dato(dato), next(nullptr) {}
            ~Nodo() = default;
        };
        Nodo* czo;
        Nodo* ultimo;

    public:
        Queue() : czo(nullptr), ultimo(nullptr) {}

        /**
        Agrega un elemento a la cola, si esta vacia el comienzo y el final son lo mismo
        */
        void enqueue(T dato){
            Nodo* nuevoNodo = new Nodo(dato);
            if(ultimo == nullptr){
                ultimo = nuevoNodo;
                czo = nuevoNodo;
            }
            nuevoNodo->next = czo;
            czo = nuevoNodo;
        }
        /**
        Quita el ultimo elemento de la cola
        */
        void dequeue() {
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
        /**
        Retorna el primer elemento de la cola
        */
        T getFront(){
            if(ultimo == nullptr){
                return;
            }
            return ultimo->dato;
        }
};
#endif //QUEUE_H
