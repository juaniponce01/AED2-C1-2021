# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ej1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ej1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ej1.dir/flags.make

CMakeFiles/ej1.dir/tests/test_templates.cpp.obj: CMakeFiles/ej1.dir/flags.make
CMakeFiles/ej1.dir/tests/test_templates.cpp.obj: CMakeFiles/ej1.dir/includes_CXX.rsp
CMakeFiles/ej1.dir/tests/test_templates.cpp.obj: ../tests/test_templates.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ej1.dir/tests/test_templates.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ej1.dir\tests\test_templates.cpp.obj -c "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida\tests\test_templates.cpp"

CMakeFiles/ej1.dir/tests/test_templates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej1.dir/tests/test_templates.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida\tests\test_templates.cpp" > CMakeFiles\ej1.dir\tests\test_templates.cpp.i

CMakeFiles/ej1.dir/tests/test_templates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej1.dir/tests/test_templates.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida\tests\test_templates.cpp" -o CMakeFiles\ej1.dir\tests\test_templates.cpp.s

# Object files for target ej1
ej1_OBJECTS = \
"CMakeFiles/ej1.dir/tests/test_templates.cpp.obj"

# External object files for target ej1
ej1_EXTERNAL_OBJECTS =

ej1.exe: CMakeFiles/ej1.dir/tests/test_templates.cpp.obj
ej1.exe: CMakeFiles/ej1.dir/build.make
ej1.exe: tests/google-test/libgtest.a
ej1.exe: tests/google-test/libgtest_main.a
ej1.exe: tests/google-test/libgtest.a
ej1.exe: CMakeFiles/ej1.dir/linklibs.rsp
ej1.exe: CMakeFiles/ej1.dir/objects1.rsp
ej1.exe: CMakeFiles/ej1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ej1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ej1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ej1.dir/build: ej1.exe

.PHONY : CMakeFiles/ej1.dir/build

CMakeFiles/ej1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ej1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ej1.dir/clean

CMakeFiles/ej1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida" "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida" "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida\cmake-build-debug" "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida\cmake-build-debug" "C:\Users\Miguel Ponce\Desktop\Juani Docs\Algos2\AED2-C1-2021\ejercitacion_templates_corregida\cmake-build-debug\CMakeFiles\ej1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ej1.dir/depend

