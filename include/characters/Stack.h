//
// Created by balta on 6/4/2025.
//

#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>

template<class T>
class Stack {
private:
    struct Nodo {
        T dato;
        Nodo* next;

        Nodo(T& dato);
        ~Nodo();
    };
    Nodo* czo;
public:
    Stack();
    void push (T& dato);        //Agrega elemento
    T pop ();                   //Lo borra y lo retorna
    T top ();                   //Retorna el ultimo
};
#endif //STACK_H
