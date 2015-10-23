#ifndef TEST_TAYLOR_INCLUDED
#define TEST_TAYLOR_INCLUDED

#include <cmath>

// #include <cosinus.hpp>
// #include <exponentielle.hpp>
// #include <puissance.hpp>
// #include <sinus.hpp>

namespace isima { namespace metaprog {
   static const double epsilon = 0.001;
} }

// using isima::metaprog::Cosinus;
// using isima::metaprog::Sinus;
// using isima::metaprog::Exponentielle;
// using isima::metaprog::Puissance;
// using isima::metaprog::epsilon;

TEST ( TestTaylor, TestCosinus )
{
/*  EXPECT_NEAR ( Cosinus<1>::evaluer(0.0), std::cos(0.0), epsilon );
    EXPECT_NEAR ( Cosinus<4>::evaluer(-2.0), std::cos(-2.0), epsilon );
    EXPECT_NEAR ( Cosinus<3>::evaluer(1.0), std::cos(1.0), epsilon ); */
}

TEST ( TestTaylor, TestExponentielle )
{
/*  EXPECT_NEAR ( Exponentielle<4>::evaluer(0.0), std::exp(0.0), epsilon );
    EXPECT_NEAR ( Exponentielle<10>::evaluer(-2.5), std::exp(-2.5), epsilon );
    EXPECT_NEAR ( Exponentielle<7>::evaluer(1.4), std::exp(1.4), epsilon ); */
}

TEST ( TestTaylor, TestPuissance )
{
/*  EXPECT_NEAR ( Puissance<0>::evaluer(7.0), 1.0, epsilon );
    EXPECT_NEAR ( Puissance<3>::evaluer(8.0), 512.0, epsilon );
    EXPECT_NEAR ( Puissance<9>::evaluer(0.0), 0.0, epsilon ); */
}

TEST ( TestTaylor, TestSinus )
{
/*  EXPECT_NEAR ( Sinus<3>::evaluer(0.0), std::sin(0.0), epsilon );
    EXPECT_NEAR ( Sinus<5>::evaluer(-2.0), std::sin(-2.0), epsilon );
    EXPECT_NEAR ( Sinus<4>::evaluer(1.0), std::sin(1.0), epsilon ); */
}

#endif // TEST_TAYLOR_INCLUDED

