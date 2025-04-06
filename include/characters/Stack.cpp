//
// Created by balta on 6/4/2025.
//
#include <iostream>
#include <string>

template<class T>   //Constructor de Nodo
Stack<T>::Nodo::Nodo(T& dato) : dato(dato), next(nullptr) {}

template<class T>   //Destructor de Nodo
Stack<T>::Nodo::~Nodo() = default;

template<class T>   //Constructor de Stack
Stack<T>::Stack() : czo(nullptr) {}

template<class T>    //Agregar dato
T Stack<T>::push (T& dato) {
    Nodo* nuevoNodo = new Nodo(dato);
    if (czo == nullptr) {
        czo = nuevoNodo;
    }
    nuevoNodo->next = czo;
    czo = nuevoNodo;
}

template<class T>   //Elimino el ultimo y antes lo retorno
T Stack<T>::pop(){
  Nodo* aux = czo;
  czo = czo->next;
  T dato = aux->dato;
  delete aux;
  return dato;
  }

  template<class T>
  T Stack<T>::top () {
      return czo->dato;
  }
}
