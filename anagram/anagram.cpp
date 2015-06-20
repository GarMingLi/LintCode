#include "anagram.h"

void Solution::trim_char(string &str,char dat)
{
      str.erase(str.find_first_of(dat),1);
}

bool Solution::anagram(string S, string T) 
{
	if (S.length() != T.length()) {
       return false;
    }
    
    int  count [256] = {0};
    for (int i = 0; i < S.length(); i++) {
        count[(int) S[i]]++;
    }
    for (int i = 0; i < T.length(); i++) {
        count[(int) T[i]]--;
        if (count[(int) T[i]] < 0) {
            return false;
        }
    }
    return true;   
}

 