/*
 * guolvduoyudekongge.cpp
 *
 *  Created on: 2011-1-8
 *      Author: dyj
 */


int main(){
	char str[100];
	int n=0,i,j;
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			for(j=i;str[j]==' ';j++)
				n++;
			for(;str[j-1]!='\0';j++)
				str[j-n+1]=str[j];
			n=0;
		}
	}
	cout<<str<<endl;
	return 0;
}
