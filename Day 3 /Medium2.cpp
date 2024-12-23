#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> char_index;  
    int max_length = 0;                  
    int start = 0;                        

    for (int end = 0; end < s.length(); end++) {
        char current_char = s[end];

    
        if (char_index.find(current_char) != char_index.end() && char_index[current_char] >= start) {
    
            start = char_index[current_char] + 1;
        }

    
        char_index[current_char] = end;

    
        max_length = max(max_length, end - start + 1);
    }

    return max_length;
}

int main() {
    
    string input = "abcabcbb";

    
    cout << "Length of the longest substring without repeating characters: "
         << lengthOfLongestSubstring(input) << endl;

    return 0;
}
