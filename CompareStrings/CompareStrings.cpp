#include "CompareStrings.h"

void Solution::trim_char(string &str,char dat)
{
      str.erase(str.find_first_of(dat),1);
}

bool Solution::CompareStrings(string A, string B) 
{
    if (A.empty() && B.empty()) {
        return true;
    }else if (A.empty() && !B.empty()) {
        return false;
    } 

    int A_Index,B_Index;
    bool flag = false;
    while (B.length() > 0) {
    	for (A_Index = 0; A_Index < A.length(); A_Index++) {
			flag = false;
			if((A[A_Index] == B[0]) && 
               (A[A_Index] >= 'A') && (A[A_Index] <= 'Z') &&
               (B[0] >= 'A') && (B[0] <= 'Z')){
			    trim_char(A,A[A_Index]);
				trim_char(B,B[0]);
				flag = true;	
				break;	
	        } 
		}
		if (!flag) {
			return false;
		}
    }
    return true;    
}
