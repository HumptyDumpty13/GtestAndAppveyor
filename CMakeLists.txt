cmake_minimum_required(VERSION 3.5) 

project(IsPalindrome)
 
add_subdirectory( 
    "${CMAKE_CURRENT_SOURCE_DIR}/googletest" 
    "googletest"  
) 
 
include_directories(SYSTEM 
    ${gtest_SOURCE_DIR} 
    ${gtest_SOURCE_DIR}/include) 
 
add_executable(runTests tests.cpp) 
 
target_link_libraries( 
    runTests PRIVATE  
    gtest 
    gtest_main 
) 
 
set_target_properties( 
    runTests PROPERTIES  
    CXX_STANDARD 17 
    CXX_STANDARD_REQUIRED ON 
)