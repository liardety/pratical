#include "echantillon.hpp"
#include <algorithm>


const std::vector<Valeur> &Echantillon::getSample() const
{
    return sample;
}

void Echantillon::setSample(const std::vector<Valeur> &values)
{
    sample = values;
}

void Echantillon::add_valeur(const Valeur &val){
    sample.push_back(val);
}

void Echantillon::add_double(const double &reel){
    sample.push_back(Valeur(reel));
}


Valeur Echantillon::read_valeur(int index) const{
    return sample.at(index);
}

double Echantillon::read_double(int index) const{
    return sample.at(index).getNombre();
}

Valeur Echantillon::max_valeur() const{
    return *std::max_element(sample.begin(), sample.end());
}

double Echantillon::max_double() const{
    return std::max_element(sample.begin(), sample.end())->getNombre();
}

Valeur Echantillon::min_valeur() const{
    return *std::min_element(sample.begin(), sample.end());
}

double Echantillon::min_double() const{
    return std::min_element(sample.begin(), sample.end())->getNombre();
}

unsigned int Echantillon::taille() const{
    return sample.size();
}
