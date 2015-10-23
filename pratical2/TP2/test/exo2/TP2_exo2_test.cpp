#include <gtest/gtest.h>
#include "test_Factorielle.inl"
#include "test_Taylor.inl"

int main(int argc,char *argv[]) {
 ::testing::InitGoogleTest(&argc,argv);
 return RUN_ALL_TESTS();
}
