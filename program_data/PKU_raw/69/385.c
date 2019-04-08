/*
 * 14.cpp
 *
 *  Created on: 2011-12-2
 *      Author: 11294
 */
int max(int s1,int s2){
	if(s1>s2)return s1;
	else return s2;
}
int main(){
	char a[251]="";
	char b[251]="";
	cin>>a;
	cin>>b;
	int s1=strlen(a);
	int s2=strlen(b);
	int i;
	char c[251]="",d[251]="";
	for(i=0;i<s1;i++){
		c[i]=a[s1-1-i];
	}
	for(i=0;i<s2;i++){
		d[i]=b[s2-1-i];
	}
	char result[252]="";
	int carry=0;
	int smax=max(s1,s2);
	for(i=0;i<=smax;i++){
		if(c[i]==0)c[i]='0';
		if(d[i]==0)d[i]='0';
		result[i]=c[i]+d[i]-48+carry;
		if(result[i]>=58){
			result[i]=result[i]-10;
			carry=1;
		}
		else carry=0;
	}
	for(i=smax;i>=0;i--){
		if(result[i]!='0')break;
	}
	if(i==-1)cout<<0<<endl;
	else {for(;i>=0;i--){
		cout<<result[i];
	}}
	return 0;
}
