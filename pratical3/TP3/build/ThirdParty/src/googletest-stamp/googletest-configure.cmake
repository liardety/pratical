

set(command "/usr/bin/cmake;-DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG:PATH=DebugLibs;-DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE:PATH=ReleaseLibs;-Dgtest_force_shared_crt=ON;-GCodeBlocks - Unix Makefiles;/home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-stamp/googletest-configure-out.log"
  ERROR_FILE "/home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-stamp/googletest-configure-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-stamp/googletest-configure-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "googletest configure command succeeded.  See also /home/etud/liardety/Documents/MODL/tp3/TP3/build/ThirdParty/src/googletest-stamp/googletest-configure-*.log\n")
  message(STATUS "${msg}")
endif()
