# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-build

# Include any dependencies generated for this target.
include CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gtest.dir/flags.make

CMakeFiles/gtest.dir/src/gtest-all.cc.o: CMakeFiles/gtest.dir/flags.make
CMakeFiles/gtest.dir/src/gtest-all.cc.o: /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest/src/gtest-all.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest/src/gtest-all.cc

CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest/src/gtest-all.cc > CMakeFiles/gtest.dir/src/gtest-all.cc.i

CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest/src/gtest-all.cc -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires:
.PHONY : CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires

CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides: CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires
	$(MAKE) -f CMakeFiles/gtest.dir/build.make CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build
.PHONY : CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides

CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build: CMakeFiles/gtest.dir/src/gtest-all.cc.o

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

libgtest.a: CMakeFiles/gtest.dir/src/gtest-all.cc.o
libgtest.a: CMakeFiles/gtest.dir/build.make
libgtest.a: CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libgtest.a"
	$(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gtest.dir/build: libgtest.a
.PHONY : CMakeFiles/gtest.dir/build

CMakeFiles/gtest.dir/requires: CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires
.PHONY : CMakeFiles/gtest.dir/requires

CMakeFiles/gtest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gtest.dir/clean

CMakeFiles/gtest.dir/depend:
	cd /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-build /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-build /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-build/CMakeFiles/gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gtest.dir/depend

