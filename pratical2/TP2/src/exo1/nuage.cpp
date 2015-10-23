// Entetes //---------------------------------------------------------------------------------------
#include <nuage.hpp>

// Fonctions //-------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------Barycentre
Cartesien barycentre(const Nuage<Point, std::vector> &nuage) {
 Cartesien c;
 double x = 0.0;
 double y = 0.0;
 int n = 0;

 for (Nuage<Point, std::vector>::iterator i = nuage.begin(); i<nuage.end(); ++i) {
  (*i)->convertir(c);
  x+=c.getX();
  y+=c.getY();
  ++n;
 }

 return Cartesien(x/n,y/n);
}

// Fin //-------------------------------------------------------------------------------------------
