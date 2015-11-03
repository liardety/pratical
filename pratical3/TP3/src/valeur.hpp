#ifndef VALEUR_HPP
#define VALEUR_HPP

#include <utility>


class Valeur
{
    private:
        double nombre;

    public:
        Valeur(){}
        inline Valeur(double val){nombre = val;}
        inline double getNombre() const {return nombre;}
        inline void setNombre(double value) {nombre = value;}
        inline bool operator< (const Valeur &val) const{return nombre < val.getNombre();}

};

#endif // VALEUR_HPP
