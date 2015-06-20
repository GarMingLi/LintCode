#include "atoi.h"

void Solution::trim(string &str)
{
      str.erase(str.find_last_not_of(' ') + 1, string::npos); 
      str.erase(0, str.find_last_of(' ')+1);
}

int Solution::atoi(string str) 
{
    if (str.empty()) {
        return 0;
    }
    trim(str);
    int str_sign = 1;
   	int i = 0;
    if (str[0] == '-') {
    	str_sign = -1;
    	i = 1;
    } else if (str[0] == '+') {
    	str_sign = 1;
    	i = 1;
    } else if (str[0]>'0' && str[0]<'9') {
		str_sign = 1;
		i = 0;
	}
	
    long long num = 0; 
    for ( ; i < str.length(); i++) {
	    if(str[i]<0x30 || str[i]>0x39) {
	    	break;
	    }
		num = num*10+(str[i]-0x30);
	    if (num > INT_MAX) {
            break;
        }
	} 
	num = num * str_sign;	
	if (str_sign == 1) {
	    if (num > INT_MAX) {
            return INT_MAX;
	    } 
	} else {
	    if (num < INT_MIN) {
	        return INT_MIN;
	    } 
	}
	return (int)num;
}
