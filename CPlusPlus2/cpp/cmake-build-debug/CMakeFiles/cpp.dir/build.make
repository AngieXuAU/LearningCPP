# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/angel/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/angel/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp.dir/flags.make

CMakeFiles/cpp.dir/main.cpp.o: CMakeFiles/cpp.dir/flags.make
CMakeFiles/cpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp.dir/main.cpp.o -c /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/main.cpp

CMakeFiles/cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/main.cpp > CMakeFiles/cpp.dir/main.cpp.i

CMakeFiles/cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/main.cpp -o CMakeFiles/cpp.dir/main.cpp.s

# Object files for target cpp
cpp_OBJECTS = \
"CMakeFiles/cpp.dir/main.cpp.o"

# External object files for target cpp
cpp_EXTERNAL_OBJECTS =

cpp.exe: CMakeFiles/cpp.dir/main.cpp.o
cpp.exe: CMakeFiles/cpp.dir/build.make
cpp.exe: CMakeFiles/cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp.dir/build: cpp.exe

.PHONY : CMakeFiles/cpp.dir/build

CMakeFiles/cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp.dir/clean

CMakeFiles/cpp.dir/depend:
	cd /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/cmake-build-debug /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/cmake-build-debug /cygdrive/c/Users/angel/OneDrive/Documents/c++/CPlusPlus2/cpp/cmake-build-debug/CMakeFiles/cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp.dir/depend

