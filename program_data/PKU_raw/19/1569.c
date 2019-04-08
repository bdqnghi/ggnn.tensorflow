/*
 * 1000012761_303.cpp
 *
 *  Created on: 2010-11-5
 *      Author: 378073652
 */

int main(){
	char a[100],b[100],c[100],d[10000];
	int i=0,j=0,k,la,lb,lc,s=0;
	gets(a);
	gets(b);
	gets(c);
	la=strlen(a);
	lb=strlen(b);
	lc=strlen(c);
	for(i=0;i<la;i++){
		for(k=0,s=0;k<lb;k++){
			if(a[i]==b[k])s=s+1;
			i=i+1;}


		   if((a[i-k-1]==' ')&&(s==lb)||((i-k==0)&&(s==lb)))   {i=i-1;for(k=0;k<lc;k=k+1) {d[j]=c[k]  ;j=j+1;} }
		    else {i=i-k; d[j]=a[i];j=j+1;}



		}
	cout<<d;
	}


