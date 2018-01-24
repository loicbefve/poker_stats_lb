

set(command "/usr/bin/cmake;-P;/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/tmp/antlr4cpp-gitclone.cmake")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-download-out.log"
  ERROR_FILE "/media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-download-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-download-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "antlr4cpp download command succeeded.  See also /media/loic/Data/Users/Loïc/Documents/poker_stats_lb/build/externals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-download-*.log")
  message(STATUS "${msg}")
endif()
