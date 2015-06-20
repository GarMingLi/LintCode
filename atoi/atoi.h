#include <iostream>
#include <math.h>
using namespace std;
class Solution {
private:
    short int_max;
    void trim(string &str);
public:
    Solution(){
        int_max = 10;
    }
	/**
     * @param str: A string
     * @return An integer
     */
    int atoi(string str); 
};
