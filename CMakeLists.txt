# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12.2 FATAL_ERROR)

LIST( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake )

# compiler must be 11 or 14
SET (CMAKE_CXX_STANDARD 11)

# set variable pointing to the antlr tool that supports C++
set(ANTLR4CPP_JAR_LOCATION ${PROJECT_SOURCE_DIR}/thirdparty/antlr/antlr-4.7.1-complete.jar)
# add external build for antlrcpp
include( ExternalAntlr4Cpp )
# add antrl4cpp artifacts to project environment
include_directories( ${ANTLR4CPP_INCLUDE_DIRS} )
link_directories( ${ANTLR4CPP_LIBS} )
message(STATUS "Found antlr4cpp libs: ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS} ")

# Call macro to add lexer and grammar to your build dependencies.
antlr4cpp_process_grammar(demo antlrcpptest
${CMAKE_CURRENT_SOURCE_DIR}/grammar/HistoryLexer.g4
 ${CMAKE_CURRENT_SOURCE_DIR}/grammar/HistoryParser.g4)
# include generated files in project environment
include_directories(${antlr4cpp_include_dirs_antlrcpptest})

# add generated grammar to demo binary target
add_executable(demo main.cpp ${antlr4cpp_src_files_antlrcpptest})
add_dependencies(demo antlr4cpp antlr4cpp_generation_antlrcpptest)
target_link_libraries(demo antlr4-runtime)
