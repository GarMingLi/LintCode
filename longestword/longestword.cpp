#include "longestword.h"

void Solution::trim_char(string &str,char dat)
{
      str.erase(str.find_first_of(dat),1);
}

vector<string>  Solution::longestWords(vector<string> &dictionary) 
{
        int longest_count = 0;
        vector<string> results;
        for (int i = 0; i < dictionary.size(); i++) {
            if (longest_count < dictionary[i].length()) {
                longest_count = dictionary[i].length();
            }
        }
        for (int i = 0; i < dictionary.size(); i++) {
            if (longest_count == dictionary[i].length()) {
                results.push_back(dictionary[i]);
            }
        }
        return results;
    }
