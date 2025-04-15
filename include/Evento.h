//
// Created by balta on 13/4/2025.
//

#ifndef EVENTO_H
#define EVENTO_H
#include <string>
#include <iostream>
#endif //EVENTO_H
enum class TipoEvento
{
    VISITA,
    EXPLORACION,
    PELEA,
    COMPRA_ITEM,
    MUERTE
};

struct Evento
{
    TipoEvento evento;
    std::string Descripcion;

    Evento(TipoEvento& event, std::string& Descripcion)
        : evento(event), Descripcion(Descripcion){}


    std::string eventToString() const
    {

        switch (evento)
        {
            case TipoEvento::VISITA: return "VISITA " + Descripcion;
            case TipoEvento::EXPLORACION: return "EXPLORACION " + Descripcion;
            case TipoEvento::PELEA: return  "PELEA " + Descripcion;
            case TipoEvento::MUERTE: return  "MUERTE " + Descripcion;
            case TipoEvento::COMPRA_ITEM: return  "COMPRA_ITEM " + Descripcion;
            default: return "Evento desconocido ";
        }
    }
};
