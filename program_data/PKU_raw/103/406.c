/*
 * 2.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main(){
	char a[1005]={0};
	int b[1005]={0},c[1005]={0},d[1005]={0};
	int i,j=0,temp,lenA;
	cin.getline(a,1000);
	lenA=strlen(a);
	for(i=0;i<lenA;i++){
		if((a[i]-'A')>=0&&(a[i]-'A')<=26)
			b[i]=a[i]-'A';
		if((a[i]-'a')>=0&&(a[i]-'a')<=26)
			b[i]=a[i]-'a';
	}
	temp=b[0];
	c[0]=b[0];
	d[0]=1;
	for(i=1;i<lenA;i++){
		if(b[i]==temp)
			d[j]++;
		else{
			temp=b[i];
			j++;
			c[j]=b[i];
			d[j]=1;
		}
	}
	for(i=0;i<=j;i++)
		cout<<'('<<(char)(c[i]+'A')<<','<<d[i]<<')';
	return 0;
}
