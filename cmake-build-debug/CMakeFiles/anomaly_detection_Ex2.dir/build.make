# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/odin/CLion-2021.2.3/clion-2021.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/odin/CLion-2021.2.3/clion-2021.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/odin/CLionProjects/advanced_programming_Ex2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/anomaly_detection_Ex2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/anomaly_detection_Ex2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/anomaly_detection_Ex2.dir/flags.make

CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.o: CMakeFiles/anomaly_detection_Ex2.dir/flags.make
CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.o: ../anomaly_detection_util.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.o -c /home/odin/CLionProjects/advanced_programming_Ex2/anomaly_detection_util.cpp

CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/CLionProjects/advanced_programming_Ex2/anomaly_detection_util.cpp > CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.i

CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/CLionProjects/advanced_programming_Ex2/anomaly_detection_util.cpp -o CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.s

CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.o: CMakeFiles/anomaly_detection_Ex2.dir/flags.make
CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.o: ../SimpleAnomalyDetector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.o -c /home/odin/CLionProjects/advanced_programming_Ex2/SimpleAnomalyDetector.cpp

CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/CLionProjects/advanced_programming_Ex2/SimpleAnomalyDetector.cpp > CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.i

CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/CLionProjects/advanced_programming_Ex2/SimpleAnomalyDetector.cpp -o CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.s

CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.o: CMakeFiles/anomaly_detection_Ex2.dir/flags.make
CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.o: ../timeseries.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.o -c /home/odin/CLionProjects/advanced_programming_Ex2/timeseries.cpp

CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/CLionProjects/advanced_programming_Ex2/timeseries.cpp > CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.i

CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/CLionProjects/advanced_programming_Ex2/timeseries.cpp -o CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.s

CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.o: CMakeFiles/anomaly_detection_Ex2.dir/flags.make
CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.o: ../MainTrain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.o -c /home/odin/CLionProjects/advanced_programming_Ex2/MainTrain.cpp

CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/CLionProjects/advanced_programming_Ex2/MainTrain.cpp > CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.i

CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/CLionProjects/advanced_programming_Ex2/MainTrain.cpp -o CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.s

# Object files for target anomaly_detection_Ex2
anomaly_detection_Ex2_OBJECTS = \
"CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.o" \
"CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.o" \
"CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.o" \
"CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.o"

# External object files for target anomaly_detection_Ex2
anomaly_detection_Ex2_EXTERNAL_OBJECTS =

anomaly_detection_Ex2: CMakeFiles/anomaly_detection_Ex2.dir/anomaly_detection_util.cpp.o
anomaly_detection_Ex2: CMakeFiles/anomaly_detection_Ex2.dir/SimpleAnomalyDetector.cpp.o
anomaly_detection_Ex2: CMakeFiles/anomaly_detection_Ex2.dir/timeseries.cpp.o
anomaly_detection_Ex2: CMakeFiles/anomaly_detection_Ex2.dir/MainTrain.cpp.o
anomaly_detection_Ex2: CMakeFiles/anomaly_detection_Ex2.dir/build.make
anomaly_detection_Ex2: CMakeFiles/anomaly_detection_Ex2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable anomaly_detection_Ex2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/anomaly_detection_Ex2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/anomaly_detection_Ex2.dir/build: anomaly_detection_Ex2
.PHONY : CMakeFiles/anomaly_detection_Ex2.dir/build

CMakeFiles/anomaly_detection_Ex2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/anomaly_detection_Ex2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/anomaly_detection_Ex2.dir/clean

CMakeFiles/anomaly_detection_Ex2.dir/depend:
	cd /home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/odin/CLionProjects/advanced_programming_Ex2 /home/odin/CLionProjects/advanced_programming_Ex2 /home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug /home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug /home/odin/CLionProjects/advanced_programming_Ex2/cmake-build-debug/CMakeFiles/anomaly_detection_Ex2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/anomaly_detection_Ex2.dir/depend

