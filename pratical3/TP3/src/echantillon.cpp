#include "echantillon.hpp"
#include <algorithm>


std::vector<Valeur> Echantillon::getSample() const
{
    return sample;
}

void Echantillon::setSample(const std::vector<Valeur> &value)
{
    sample = value;
}

void Echantillon::add_valeur(const Valeur &val){
    getSample().push_back(val);
}

void Echantillon::add_double(const double &reel){
    getSample().push_back(Valeur(reel));
}


Valeur Echantillon::read_valeur(int index) const{
    return getSample().at(index);
}

double Echantillon::read_double(int index) const{
    return getSample().at(index).getNombre();
}

Valeur Echantillon::max_valeur() const{
    return *std::max_element(getSample().begin(), getSample().end());
}

double Echantillon::max_double() const{
    return std::max_element(getSample().begin(), getSample().end())->getNombre();
}

Valeur Echantillon::min_valeur() const{
    return *std::min_element(getSample().begin(), getSample().end());
}

double Echantillon::min_double() const{
    return std::min_element(getSample().begin(), getSample().end())->getNombre();
}

unsigned int Echantillon::taille() const{
    return getSample().size();
}
