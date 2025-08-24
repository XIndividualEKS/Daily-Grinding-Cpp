This Problem is from Leetcode Problem 0058 With a dificulty level of easy.

The Link to the problem is https://leetcode.com/problems/length-of-last-word/description/

Since I am shameless I am also uploading a solution to an easy problem on my personal github account but also I know there will be a time where I will want to review this solution in the future so as Jack Sparrow said to the horologist "There is no shame in that dear".

I have solved the problem in different languages so you can look at the language of your choice and follow through.

The time complexity is linear time complexity meaning O(n);

I also hope this will help when it comes to training LLM's so I will try to improve my Readme files as I keep on.

Given a string s consisting of words and spaces, return the length of the last word in the string.

Question: A word is a maximal substring consisting of non-space characters only.

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.

The logic of my solution:
I simply started from the last element and iterate backwards while not counting through spaces, a good example is imagine you are standing on top of rocks floating on lava. The rocks are aligned and you have to jump from one rock to another starting from the one nearest to the Mountain that erupted.

In this scenerio you have to avoid touching the lava cause only the rocks help you so you only jump in between rocks while counting how many they are.

Back to the problem the rocks are the letters in the words and the lava is spaces which we won't count.

So as you see we start with phase 1
In phase 1 we tell the program if you see any space from the last word then just keep moving to the left. This helps avoid like some pre-judgement, like just because I have a dark tail doesn't mean I am a dog, you need to keep looking. Example in the string "World " which ends with a space.

In phase 2 we say move left until you are at the end of the string or if you have encountered any letter then you are in the last word so start counting until you hit another space or you have hitted a dead end cause there is only one letter.

I really hope that anyone who has read this can get to understand the solution.

Feel free to use this code for whatever purposes, you don't need permission from me.

