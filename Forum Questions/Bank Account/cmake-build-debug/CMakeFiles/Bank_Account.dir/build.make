# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Bank_Account.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bank_Account.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bank_Account.dir/flags.make

CMakeFiles/Bank_Account.dir/main.c.obj: CMakeFiles/Bank_Account.dir/flags.make
CMakeFiles/Bank_Account.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Bank_Account.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Bank_Account.dir\main.c.obj   -c "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account\main.c"

CMakeFiles/Bank_Account.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bank_Account.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account\main.c" > CMakeFiles\Bank_Account.dir\main.c.i

CMakeFiles/Bank_Account.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bank_Account.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account\main.c" -o CMakeFiles\Bank_Account.dir\main.c.s

# Object files for target Bank_Account
Bank_Account_OBJECTS = \
"CMakeFiles/Bank_Account.dir/main.c.obj"

# External object files for target Bank_Account
Bank_Account_EXTERNAL_OBJECTS =

Bank_Account.exe: CMakeFiles/Bank_Account.dir/main.c.obj
Bank_Account.exe: CMakeFiles/Bank_Account.dir/build.make
Bank_Account.exe: CMakeFiles/Bank_Account.dir/linklibs.rsp
Bank_Account.exe: CMakeFiles/Bank_Account.dir/objects1.rsp
Bank_Account.exe: CMakeFiles/Bank_Account.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Bank_Account.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Bank_Account.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bank_Account.dir/build: Bank_Account.exe

.PHONY : CMakeFiles/Bank_Account.dir/build

CMakeFiles/Bank_Account.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Bank_Account.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Bank_Account.dir/clean

CMakeFiles/Bank_Account.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account" "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account" "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account\cmake-build-debug" "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account\cmake-build-debug" "C:\Users\LaLu\Desktop\MyC\Learning_C_Programing_Language\Forum Questions\Bank Account\cmake-build-debug\CMakeFiles\Bank_Account.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Bank_Account.dir/depend

