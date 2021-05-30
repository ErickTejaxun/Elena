# minimu required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)


LIST(APPEND CMAKE_MODULE_PATH $(PROJECT_SOURCE_DIR)/cmake)

# compiler must be 11 or 14
SET (CMAKE_CXX_STANDARD 14)


# set variable poiting to the antlr tool that supports C++
set(ANTLR4CPP_JAR_LOCATION ${PROJECT_SOURCE_DIR}/thirdparty/antlr/antlr-4.9.2-complete.jar)

# set the project name 
project(Elena)

add_executable(Elena main.cpp)


# add external build for antlrcpp
#include(ExternalAntrl4cpp)        

# Include the rutime to compile against
include_directories( ${ANTLR4CPP_INCLUDE_DIRS} )
link_directories( ${ANTLR4CPP_LIBS} )
message( STATUS "Found antlr4cpp libs:  ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS}")


# Call macro to add lexer and grammar to your build dependencies.
# Note: Here, we define "antlrcppelena" as our project's namespace


antlr4cpp_process_grammar(elena ElenaCompiler
${CMAKE_CURRENT_SOURCE_DIR}/ElenaLexer.g4
${CMAKE_CURRENT_SOURCE_DIR}/ElenaParser.g4)

# include generated files in project enviroment
include_directories(${antlr4cpp_include_dirs_ElenaCompiler})


# add generated grammar to binary target
add_executable(Elena main.cpp ${antlr4cpp_src_files_ElenaCompiler})
add_dependencies(Elena antlr4cpp antlr4cpp_generation_ElenaCompiler)
target_link_libraries(Elena antlr4-runtime)
