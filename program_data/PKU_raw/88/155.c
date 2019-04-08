/*
 * 12-4.cpp
 *
 *  Created on: 2011-12-25
 *      Author: wuch
 */

int main(){
	char s[30];
	int i,j;
	gets(s);
	i=0;
	j=1;
	for (i=0;i<30;i++) if ('0'<=s[i]&&'9'>=s[i]) break;
	while (*(s+i)){
		if ('0'<=*(s+i)&&'9'>=*(s+i)){
			if (j==1) cout<<*(s+i);
			else {
				
				 cout<<endl<<*(s+i);
				
			}
			j=1;
		}
		else j=0;
		i++;
	}
	return 0;
}
