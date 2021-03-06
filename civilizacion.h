#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <iostream>
#include<iomanip>
#include <list>
#include "aldeano.h"
using namespace std;

class Civilizacion
{
public:
    Civilizacion();
    Civilizacion(const string &nombre,
                const string &ubicacionx,
                const string &ubicaciony,
                const string &puntuacion);
    Civilizacion(const string &name):name(name){}

    //Aldeanos
    void setName(const string &name);
    string getName();

    void agregarFinal(const Aldeano &a);
    void agregarInicio(const Aldeano &a);
    void print();
    void search(const string &name);
    void modific(const string &name);
    void puntajemas();
    size_t getPuntaje() const;
    //eliminar
    void eliminarName(const string &name);
    void eliminarEdad();
    void eliminarEdad(size_t edad);
    void eliminarSalud(size_t salud);
    //ordenar
    void ordenarName();
    void ordenarEdad();
    void ordenarSalud();

    //VideoGame
    void setNombre(const string &valor);
    string getNombre() const;

    void setUbicacionX(const string &valor);
    string getUbicacionX() const;

    void setUbicacionY(const string &valor);
    string getUbicacionY() const;

    void setPuntuacion(const string &valor);
    string getPuntuacion() const;

    friend ostream& operator<<(ostream &out, const Civilizacion &c)
    {
        out<<left;
        out<<setw(10)<<c.nombre;
        out<<setw(12)<<c.ubicacionx;
        out<<setw(12)<<c.ubicaciony;
        out<<setw(10)<<c.puntuacion;
        out<<endl;

        return out;
    }

    friend istream& operator>> (istream &in, Civilizacion &c)
    {
        cout<<"Nombre:";
        getline(cin, c.nombre);

        cout<<"Ubicacion X:";
        getline(cin, c.ubicacionx);

        cout<<"Ubicacion Y:";
        cin >> c.ubicaciony;

        cout<<"Puntuacion:";
        cin >> c.puntuacion;

        return in;
    }
    bool operator==(const Civilizacion& c)
    {
        return nombre == c.nombre;
    }

    bool operator==(const Civilizacion& c) const
    {
        return nombre == c.nombre;
    }

    bool operator<(const Civilizacion& c)
    {
        return nombre < c.nombre;
    }

    bool operator<(const Civilizacion& c) const
    {
        return nombre < c.nombre;
    }

private:
    string nombre;
    string ubicacionx;
    string ubicaciony;
    string puntuacion;
    size_t puntaje;
    string name;
    list<Aldeano> aldeanos;
};

#endif