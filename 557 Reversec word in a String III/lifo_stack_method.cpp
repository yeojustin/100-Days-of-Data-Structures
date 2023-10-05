// Link to solution
// https://leetcode.com/problems/reverse-words-in-a-string-iii/solutions/4118267/lifo-stack-method-o-n-easy-c/

#include <stack>
#include <sstream>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        stack<char> stack;
        string reversed = "";

        for (char c : s) // condition: there is a char in string 
        {
            if (c != ' ') 
            {
                stack.push(c); // Push non-space characters onto the stack
            }
            else // if we hit a ' ', we know that we have a word to process
            {
                while (!stack.empty())
                {
                    reversed += stack.top(); // Pop characters from the stack and append to reversed
                    stack.pop();
                }

                reversed += ' '; // Add a space to separate words
            }
        } // go back to start of for-loop

        // if no more char to process, we still need to handle the last word in the stack
        while (!stack.empty()) {
            reversed += stack.top(); // Pop characters from the stack and append to reversed
            stack.pop();
        }

        return reversed;
    }
};
