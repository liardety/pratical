#ifndef TEST_ECHANTILLON_INCLUDED
#define TEST_ECHANTILLON_INCLUDED

 #include <echantillon.hpp>
 #include <valeur.hpp>

TEST ( TestEchantillon, Valeur ) {

 Valeur v1(5.3);
 Valeur v2;

 v2.setNombre(2.7);

 EXPECT_EQ ( v1.getNombre(), 5.3 );
 EXPECT_EQ ( v2.getNombre(), 2.7 );

}

TEST ( TestEchantillon, TailleMinMax ) {

 Echantillon echantillon;
 double      val;

 double mini = 21;
 double maxi = -1;

 srand(time(0));

 for (unsigned i = 0 ; i<20 ; ++i) {
  val = double(rand())/RAND_MAX*20.0;
  echantillon.add_valeur(Valeur(val));
  if (val<mini) mini=val;
  if (val>maxi) maxi=val;
 }

 EXPECT_EQ ( echantillon.taille(), 20 );
 EXPECT_EQ ( echantillon.max_double(), mini);
 EXPECT_EQ ( echantillon.min_double(), maxi);

}

#endif // TEST_ECHANTILLON_INCLUDED
