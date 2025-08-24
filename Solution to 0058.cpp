/*Two Sum (LeetCode #1)
*Difficulty:Easy
*Language:  C++
*Approach:  Single-pass reverse scan (two-pointer/cursor)
            Strategy: skip trailing spaces, then count the last run of letters
*Time:      O(n)
Link:       https://leetcode.com/problems/length-of-last-word/description/
*/
#include <iostream>
#include <string>
class Solution{
public:
    int lengthOfLastWord(std::string s) {
        int n= s.size(),length=0,i=n-1;
        while (i >=0 && s[i] == ' ') {
            i-=1;
        }
        while (i >=0 && s[i] != ' ') {
            length += 1;
            i -= 1;
        }
        return length;
    }
};
int main(){
    //Testing the Program
    Solution s1;
    std::cout<<s1.lengthOfLastWord("Mirror Of The  World ");
    return 0;
}