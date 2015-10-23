// Gardien //---------------------------------------------------------------------------------------
#ifndef _NUAGE_HPP_
#define _NUAGE_HPP_

// Entetes //---------------------------------------------------------------------------------------
#include <vector>
#include <cartesien.hpp>
#include <polaire.hpp>

// Declarations anticipees //-----------------------------------------------------------------------
template <class Pt, template < class T, class Alloc = std::allocator<T> > class vector>
class Nuage;

// Declarations fonctions //------------------------------------------------------------------------
Cartesien barycentre(const Nuage<Point, std::vector> &);

// Classe  N u a g e //-----------------------------------------------------------------------------
template <class Pt, template < class T, class Alloc = std::allocator<T> > class vector>
class Nuage {
 //---------------------------------------------------------------------------------------------Type
 public: typedef typename vector<Pt *>::const_iterator iterator;
 //----------------------------------------------------------------------------------------Attributs
 protected: vector<Pt *> points_;
 //---------------------------------------------------------------------------------------Accesseurs
 public: typename vector<Pt *>::const_iterator begin() const { return points_.begin(); }
 public: typename vector<Pt *>::const_iterator end() const { return points_.end(); }
 //-------------------------------------------------------------------------------Methodes publiques
 public: void ajouter(Pt * point) { points_.push_back(point); }
};

// Classe  B a r y c e n t r e C a r t e s i e n //-------------------------------------------------
class BarycentreCartesien {
 public: Cartesien operator () (const Nuage<Point, std::vector> & nuage) { return barycentre(nuage); }
};

// Classe  B a r y c e n t r e P o l a i r e //-----------------------------------------------------
class BarycentrePolaire {
 public: Polaire operator () (const Nuage<Point, std::vector> & nuage) { return Polaire(barycentre(nuage)); }
};

// Fin //-------------------------------------------------------------------------------------------
#endif
