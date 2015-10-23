#ifndef ECHANTILLON_H
#define ECHANTILLON_H

#include<vector>

#include<valeur.hpp>

class Echantillon
{
    private:

       std::vector<Valeur> sample; // TODO: Change Valeur by Valeur *

    public:

        inline Echantillon(){sample = std::vector<Valeur>();} //FIXME
        std::vector<Valeur> getSample() const;
        void setSample(const std::vector<Valeur> &value);
        void add_double(const double &reel);
        void add_valeur(const Valeur &val);
        Valeur read_valeur(int index) const;
        double read_double(int index) const;
        Valeur max_valeur() const;
        double max_double() const;
        Valeur min_valeur() const;
        double min_double() const;
        unsigned int taille() const;



};

#endif // ECHANTILLON_H
