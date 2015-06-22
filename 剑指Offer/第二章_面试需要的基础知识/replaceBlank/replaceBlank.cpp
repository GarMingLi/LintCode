#include "replaceBlank.h"

void Solution::trim_char(string &str,char dat)
{
      str.erase(str.find_first_of(dat),1);
}

int Solution::replaceBlank(char string[], int length)  
{
	if (length == 0) {
    	    return 0;
	}
	int space_count = 0;
	int i;
	for (i = 0; i < length; i++) {
	    if (string[i] == ' ') {
	        space_count++;
	    }
	}
	int new_length = length + 2 * space_count;

	string[new_length]='\0';
	int point1 = length - 1; 
	int point2 = new_length-1;
	for (; point1 >= 0 && point2 > point1; point1--) {
	    if (string[point1] == ' ') {
	        string[point2--] = '0';
	        string[point2--] = '2';
	        string[point2--] = '%';
	    } else {
	        string[point2--] = string[point1];    		
    	}
    }
    return new_length; 
}


 