//
// Created by balta on 6/4/2025.
//

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include <string>

template<class T>
class Queue {
private:
    struct Nodo {
        T dato;
        Nodo* next;

        Nodo(T& dato);
        ~Nodo();
    };
    Nodo* czo;
    Nodo* ultimo;

public:
    Queue();

    void enqueue(T dato);
    void dequeue();
    T getFront();
};

#include "Queue.tpp"

#endif //QUEUE_HPP

