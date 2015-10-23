
PROJECT( Test_TP2 )

cmake_minimum_required( VERSION 2.8 FATAL_ERROR )

include( gtest.cmake )

# -------------------------------------- #
#             TP2 CONFIGURATION          #
# -------------------------------------- #

message ( " ----  TP2 UNIT TESTS ---- " )

ExternalProject_Get_Property( googletest binary_dir )

LINK_DIRECTORIES( ${binary_dir} )

# -------------------------------------------------- #
#     Source and header files                        #
# -------------------------------------------------- #

### ----- EXO 1 ------ ###

set( ZZ3-TP2_EXO1_SOURCES
    src/exo1/cartesien.cpp
    src/exo1/nuage.cpp
    src/exo1/point.cpp
    src/exo1/polaire.cpp
    src/exo1/vecteur.cpp
   )

set( ZZ3-TP2_EXO1_HEADERS
    src/exo1/cartesien.hpp
    src/exo1/nuage.hpp
    src/exo1/point.hpp
    src/exo1/polaire.hpp
    src/exo1/vecteur.hpp
   )

set( ZZ3-TP2_EXO1_SOURCES_TEST
    #test/exo1/TP2_exo1_test.cpp
   )

set( ZZ3-TP2_EXO1_HEADERS_TEST
    test/exo1/test_nuage.inl
   )

### ----- EXO 2 ------ ###

set( ZZ3-TP2_EXO2_SOURCES
   )

set( ZZ3-TP2_EXO2_HEADERS
     #src/exo2/factorielle.hpp
     #src/exo2/cosinus.hpp
     #src/exo2/sinus.hpp
     #src/exo2/puissance.hpp
     #src/exo2/exponentielle.hpp
   )

set( ZZ3-TP2_EXO2_SOURCES_TEST
   )

set( ZZ3-TP2_EXO2_HEADERS_TEST
     test/exo2/test_Factorielle.inl
     test/exo2/test_Taylor.inl
   )

INCLUDE_DIRECTORIES( src/exo1/ )
INCLUDE_DIRECTORIES( src/exo2/ )

# Add test executable target
ADD_EXECUTABLE ( TP2_test_exo1
                 test/exo1/TP2_exo1_test.cpp
                 ${ZZ3-TP2_EXO1_SOURCES}
                 ${ZZ3-TP2_EXO1_HEADERS}
                 ${ZZ3-TP2_EXO1_SOURCES_TEST}
                 ${ZZ3-TP2_EXO1_HEADERS_TEST}
                )

ADD_EXECUTABLE ( TP2_test_exo2
                 test/exo2/TP2_exo2_test.cpp
                 ${ZZ3-TP2_EXO2_SOURCES}
                 ${ZZ3-TP2_EXO2_HEADERS}
                 ${ZZ3-TP2_EXO2_SOURCES_TEST}
                 ${ZZ3-TP2_EXO2_HEADERS_TEST}
                )

SET_TARGET_PROPERTIES( TP2_test_exo1 PROPERTIES LINKER_LANGUAGE C )
SET_TARGET_PROPERTIES( TP2_test_exo2 PROPERTIES LINKER_LANGUAGE C )

FIND_PACKAGE( Threads )
TARGET_LINK_LIBRARIES( TP2_test_exo1 ${CMAKE_THREAD_LIBS_INIT} )
TARGET_LINK_LIBRARIES( TP2_test_exo2 ${CMAKE_THREAD_LIBS_INIT} )

# Create dependency of TP2_test on googletest
ADD_DEPENDENCIES( TP2_test_exo1 googletest )
ADD_DEPENDENCIES( TP2_test_exo2 googletest )

# Specify TP2_test's link libraries
IF ( WIN32 )
   TARGET_LINK_LIBRARIES( TP2_test_exo1
                          debug ${binary_dir}/DebugLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtest${CMAKE_FIND_LIBRARY_SUFFIXES}
                          optimized ${binary_dir}/ReleaseLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtest${CMAKE_FIND_LIBRARY_SUFFIXES}
                        )
   TARGET_LINK_LIBRARIES( TP2_test_exo2
                          debug ${binary_dir}/DebugLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtest${CMAKE_FIND_LIBRARY_SUFFIXES}
                          optimized ${binary_dir}/ReleaseLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtest${CMAKE_FIND_LIBRARY_SUFFIXES}
                        )
ELSE()
   TARGET_LINK_LIBRARIES(TP2_test_exo1 gtest pthread)
   TARGET_LINK_LIBRARIES(TP2_test_exo2 gtest pthread)
ENDIF()
