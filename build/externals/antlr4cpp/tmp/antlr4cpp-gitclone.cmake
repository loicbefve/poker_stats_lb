if("master" STREQUAL "")
  message(FATAL_ERROR "Tag for git checkout should not be empty.")
endif()

set(run 0)

if("/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-gitinfo.txt" IS_NEWER_THAN "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-gitclone-lastrun.txt")
  set(run 1)
endif()

if(NOT run)
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp'")
endif()

# try the clone 3 times incase there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" clone --origin "origin" "https://github.com/antlr/antlr4.git" "antlr4cpp"
    WORKING_DIRECTORY "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/antlr/antlr4.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git" checkout master
  WORKING_DIRECTORY "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'master'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule init 
  WORKING_DIRECTORY "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to init submodules in: '/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule update --recursive 
  WORKING_DIRECTORY "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-gitinfo.txt"
    "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-gitclone-lastrun.txt"
  WORKING_DIRECTORY "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-gitclone-lastrun.txt'")
endif()

