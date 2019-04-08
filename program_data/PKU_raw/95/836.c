/*
 * 1016.cpp
 *
 *  Created on: 2010-11-12
 *      Author: dell
 */
int main(){
	int s,i;
	char str1[80],str2[80];
	cin.getline(str1,80);
	cin.getline(str2,80);
	for(i=0;i<80;i++){
		if(str1[i]<91&&str1[i]>63){
			str1[i]=str1[i]+32;
		}
		if(str2[i]<91&&str2[i]>63){
					str2[i]=str2[i]+32;
				}
	}
	s=strcmp(str1,str2);

	if(s==0){
	     cout<<'=';}
	     if(s>0){
	     cout<<(char)62;}
	     if(s<0){
	     cout<<(char)60;}
	     return 0;
	}




