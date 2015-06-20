#include <iostream>
#include <math.h>
using namespace std;
class Solution {
private:
    void trim_char(string &str,char dat);
public:
    Solution(){
        
    }
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool CompareStrings(string A, string B); 
};
