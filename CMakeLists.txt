# cmake_minimum_required(VERSION 3.5) 

# set(DCMAKE_SH="CMAKE_SH-NOTFOUND")

# #set(CMAKE_CXX_COMPILER:FILEPATH C:/MinGW/bin/gcc.exe)
# #set(CMAKE_CXX_COMPILER:FILEPATH C:\MinGW\bin\g++.exe)

# project(IsPalindrome)
 
# add_subdirectory( 
#     ${CMAKE_CURRENT_SOURCE_DIR}/googletest
#     googletest  
# ) 
 
# include_directories(#SYSTEM 
#     #${gtest_SOURCE_DIR} 
#     ${gtest_SOURCE_DIR}/include) 
 
# add_executable(runTests tests.cpp) 
 
# target_link_libraries( 
#     runTests PRIVATE  
#     gtest 
#     gtest_main 
# ) 
 
# set_target_properties( 
#     runTests PROPERTIES  
#     CXX_STANDARD 17 
#     CXX_STANDARD_REQUIRED ON 
# )

cmake_minimum_required(VERSION 3.12) # version can be different

project(IsPalindrome) #name of your project

add_subdirectory(googletest) # add googletest subdirectory

include_directories(${gtest_SOURCE_DIR}/include
 ${gtest_SOURCE_DIR}) # this is so we can #include <gtest/gtest.h>

add_executable(runTests tests.cpp) # add this executable

target_link_libraries(runTests PRIVATE gtest) # link google test to this executable

set_target_properties( 
     runTests PROPERTIES  
     CXX_STANDARD 17 
     CXX_STANDARD_REQUIRED ON 
)