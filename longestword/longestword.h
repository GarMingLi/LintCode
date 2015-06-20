#include <iostream>
#include <vector>
using namespace std;
class Solution {
private:
    void trim_char(string &str,char dat);
public:
    Solution(){

    }
    /**
     * @param dictionary: a vector of strings
     * @return: a vector of strings
     */
    vector<string> longestWords(vector<string> &dictionary); 
};
