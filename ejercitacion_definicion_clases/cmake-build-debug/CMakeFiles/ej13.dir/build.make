# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ej13.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ej13.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ej13.dir/flags.make

CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.o: CMakeFiles/ej13.dir/flags.make
CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.o: ../tests/test_recordatorios.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.o -c /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/tests/test_recordatorios.cpp

CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/tests/test_recordatorios.cpp > CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.i

CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/tests/test_recordatorios.cpp -o CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.s

# Object files for target ej13
ej13_OBJECTS = \
"CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.o"

# External object files for target ej13
ej13_EXTERNAL_OBJECTS =

ej13: CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.o
ej13: CMakeFiles/ej13.dir/build.make
ej13: libgtest.a
ej13: libgtest_main.a
ej13: CMakeFiles/ej13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ej13"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ej13.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ej13.dir/build: ej13

.PHONY : CMakeFiles/ej13.dir/build

CMakeFiles/ej13.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ej13.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ej13.dir/clean

CMakeFiles/ej13.dir/depend:
	cd /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/cmake-build-debug /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/cmake-build-debug /Users/juaniponce/Documents/GitHub/AED2-C1-2021/ejercitacion_definicion_clases/cmake-build-debug/CMakeFiles/ej13.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ej13.dir/depend

