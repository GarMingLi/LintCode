#include<iostream>
#include"FizzBuzz.h"
using namespace std;

int main()
{
	FizzBuzzSolution *fizzbuzz = new FizzBuzzSolution();
    vector<string> fizzbuzz_results;
    fizzbuzz_results = fizzbuzz->fizzBuzz(15);
    cout <<"[";
	for (int i = 0; i < fizzbuzz_results.size(); i++) {
    	cout <<"\""<< fizzbuzz_results[i]<< "\"";
    	if (i < (fizzbuzz_results.size()-1)){
    	    cout << ", ";
	    }
    }
    cout <<"]"<<endl;
    return 0;
}
