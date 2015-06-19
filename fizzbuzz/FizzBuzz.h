#include <iostream>
#include <vector>

using namespace std;
class FizzBuzzSolution {
private:
    short int_max;
    string to_string(int n);
public:
    FizzBuzzSolution(){
        int_max = 10;
    }
	/**
     * param n: As description.
     * return: A list of strings.
     */
    vector<string> fizzBuzz(int n);
    
};
