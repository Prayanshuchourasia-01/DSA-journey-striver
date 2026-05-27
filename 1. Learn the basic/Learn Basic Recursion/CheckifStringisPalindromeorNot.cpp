// Example 1:
// Input: Str =  “ABCDCBA”
// Output: Palindrome
// Explanation: String when reversed is the same as string.

// Example 2:
// Input: Str = “TAKE U FORWARD”
// Output: Not Palindrome
// Explanation: String when reversed is not the same as string.

#include <iostream>
using namespace std;

bool p(int i , string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return (p(i+1,s));

}



int main(){

string s = "madam";
cout<<p(0,s);





    return 0;

}