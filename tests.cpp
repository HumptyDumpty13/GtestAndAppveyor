#include "IsPalindrome.cpp" 
#include <gtest/gtest.h> 
 
TEST(IsPalindromeTest, True) {  
    ASSERT_TRUE(IsPalindrome("")); 
    ASSERT_TRUE(IsPalindrome("c")); 
    ASSERT_TRUE(IsPalindrome("madam")); 
    ASSERT_TRUE(IsPalindrome(" level ")); 
    ASSERT_TRUE(IsPalindrome(" 7777")); 
} 
 
TEST(IsPalindromeTest, False) { 
    ASSERT_FALSE(IsPalindrome("Madam")); 
    ASSERT_FALSE(IsPalindrome(" madam")); 
    ASSERT_FALSE(IsPalindrome("leve")); 
    ASSERT_FALSE(IsPalindrome("  level ")); 
} 
 
int main(int argc, char **argv) { 
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS(); 
}