#include <string> 
#include <algorithm> 
 
bool IsPalindrome(const std::string& str) 
{ 
    std::string reversed = str; 
 
    std::reverse(reversed.begin(), reversed.end()); 
  
   return str == reversed; 
}