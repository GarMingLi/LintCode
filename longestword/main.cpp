#include<iostream>
#include"longestword.h"
using namespace std;

int main()
{
	Solution *Solution_longestWords = new Solution();
    vector<string> results;	
	string str[] =
	{
	  "dog",
	  "google",
	  "facebook",
	  "internationalization",
	  "blabla",
	  "hehehehehehehehehehe",
	};
	vector<string> dictionary(str,str+sizeof(str)/sizeof(str[0]));  
 
    results = Solution_longestWords->longestWords(dictionary);
    cout <<"{"<<endl;
	for (int i = 0; i < results.size(); i++) {
    	cout <<"\""<< results[i]<< "\"";
    	if (i < (results.size()-1)){
    	    cout << ", " << endl;
	    }
    }
    cout<<endl<<"}"<<endl;
    return 0;
}
