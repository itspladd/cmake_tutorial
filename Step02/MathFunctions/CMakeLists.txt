# TODO 14 DONE: Remove mysqrt.cxx from the list of sources

# TODO 1 DONE: Add a library called MathFunctions with sources MathFunctions.cxx
# and mysqrt.cxx
# Hint: You will need the add_library command
# note to self: multiple source files! but not in any sort of explicit structure/array.
add_library(MathFunctions MathFunctions.cxx)

# TODO 7 DONE: Create a variable USE_MYMATH using option and set default to ON
option(USE_MYMATH "Use the hack math implementation" OFF)

# TODO 8 DONE: If USE_MYMATH is ON, use target_compile_definitions to pass
# USE_MYMATH as a precompiled definition to our source files
# Note to self: note the sudden quotation marks here.
# also assuming that PRIVATE is here just because nobody else needs this def
if(USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")
  
  # TODO 12 DONE: When USE_MYMATH is ON, add a library for SqrtLibrary with
  # source mysqrt.cxx
  add_library(SqrtLibrary mysqrt.cxx)
  
  # TODO 13 DONE: When USE_MYMATH is ON, link SqrtLibrary to the MathFunctions Library
  target_link_libraries(MathFunctions PUBLIC SqrtLibrary)
endif()
