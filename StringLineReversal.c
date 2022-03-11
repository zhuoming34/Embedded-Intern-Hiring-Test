/* Author: Zhuoming Huang
*  Date: 03/10/2022
*  File: StringLineReversal.c
*/

/* String Line Reversal
*   1. reverse a line if it ends with '\n'
*   2. do not reverse a line if it starts with '#'
*   3. append to the next line if a line ends with '\'
*   4. maximum number of character in a line is 1024
*/

#include <stdio.h>
#include <string.h>
#define MAXLEN 1024

int my_getline(char s[],int lim);

int main(void){

	int len, i, flag=0;
	char line[MAXLEN], line2[MAXLEN-1], c;
	char * ptr;
	
/* pseudo code for reverse function

	find length of the string to reverse
	for each character from the beginning of the string to half way
		copy the character here to a holding variable
		copy the character the same distance from end to here
		copy the holding variable to the same distance from end

end of pseudo code
*/

	while ((len=my_getline(line,MAXLEN))>0){
		if (line[0] == '#') {
		    for (int j=0; j<MAXLEN-1; j++) {
		        line2[j] = line[j+1];
		    }
		    printf("%s",line2);
		    continue;
		}
		for (i=0;i<(len/2);i++){
			c=line[i];
			line[i]=line[len-2-i];
			line[len-2-i]=c;
		}
		if (line[0] == '\\') {
		    for (int j=0; j<MAXLEN-1; j++) {
		        line2[j] = line[j+1];
		    }
		    flag = 1;
		    continue;
		}
		if (flag == 0) {
		    printf("%s",line);
		} else {
		    line[len-1] = '\0';
		    printf("%s%s",line,line2);
	        flag = 0;
		}
	}
	return 0;
}

int my_getline(char s[],int lim){
	int c,i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

