// Link to sol
// https://leetcode.com/problems/reverse-words-in-a-string-iii/solutions/4116375/vector-and-recursion-o-n-10ms-intermediate-solution-c/

// Not the best solution, too complicated and recursion is not nice...
// Time and space complexity O(n)... i think XD

#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        vector<string> words;

        // Split the sentence into words
        string word;
        while (iss >> word) {
            words.push_back(word);
        }

        // Reverse each word
        for (string& w : words) {
            reverseString(w);
        }

        // Reconstruct the sentence with reversed words
        ostringstream oss;
        for (const string& w : words) {
            oss << w << ' ';
        }

        // Remove the trailing space and return the result
        string reversed = oss.str();
        if (!reversed.empty()) {
            reversed.pop_back();
        }

        return reversed;
    }

private:
    void reverseString(string& s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};