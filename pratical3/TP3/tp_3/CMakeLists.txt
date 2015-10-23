
PROJECT( Test_TP3 )

cmake_minimum_required( VERSION 2.8 FATAL_ERROR )

include( gtest.cmake )

# -------------------------------------- #
#             TP3 CONFIGURATION          #
# -------------------------------------- #

message ( " ----  TP3 UNIT TESTS ---- " )

ExternalProject_Get_Property( googletest binary_dir )

LINK_DIRECTORIES( ${binary_dir} )

# -------------------------------------------------- #
#     Source and header files                        #
# -------------------------------------------------- #

set( ZZ3-TP3_SOURCES
   )

set( ZZ3-TP3_HEADERS
     #src/comparateur_quantite.hpp
     #src/classe.hpp
     #src/echantillon.hpp
     #src/histogramme.hpp
     #src/valeur.hpp
   )

set( ZZ3-TP3_SOURCES_TEST
   )

set( ZZ3-TP3_HEADERS_TEST
     test/test_Echantillon.inl
     test/test_Histogramme.inl
   )

INCLUDE_DIRECTORIES( src/ )

# Add test executable target
ADD_EXECUTABLE( TP3
                src/main.cpp
                ${ZZ3-TP3_SOURCES}
                ${ZZ3-TP3_HEADERS}
              )

ADD_EXECUTABLE ( TP3_test
                 test/TP3_test.cpp
                 ${ZZ3-TP3_SOURCES}
                 ${ZZ3-TP3_HEADERS}
                 ${ZZ3-TP3_SOURCES_TEST}
                 ${ZZ3-TP3_HEADERS_TEST}
               )

SET_TARGET_PROPERTIES( TP3 PROPERTIES LINKER_LANGUAGE C )
SET_TARGET_PROPERTIES( TP3_test PROPERTIES LINKER_LANGUAGE C )

FIND_PACKAGE( Threads )
TARGET_LINK_LIBRARIES( TP3 ${CMAKE_THREAD_LIBS_INIT} )
TARGET_LINK_LIBRARIES( TP3_test ${CMAKE_THREAD_LIBS_INIT} )

# Create dependency of TP3_test on googletest
ADD_DEPENDENCIES( TP3_test googletest )

# Specify TP3_test's link libraries
IF ( WIN32 )
   TARGET_LINK_LIBRARIES( TP3_test
                          debug ${binary_dir}/DebugLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtest${CMAKE_FIND_LIBRARY_SUFFIXES}
                          optimized ${binary_dir}/ReleaseLibs/${CMAKE_FIND_LIBRARY_PREFIXES}gtest${CMAKE_FIND_LIBRARY_SUFFIXES}
                        )
ELSE()
   TARGET_LINK_LIBRARIES(TP3_test gtest pthread)
ENDIF()
