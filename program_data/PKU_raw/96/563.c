/*
 * 0.cpp
 *
 *  Created on: 2011-12-30
 *      Author: Alfalfa
 */
int main() {
	char a[101], out[100];
	memset(out,100,'/');
	cin>>a;
	int len=strlen(a), temp, mod;
	temp=10*(a[0]-'0') + a[1]-'0';
	if(temp<13&&len<=2) len=1;
	for(int i=0; i<len-1; i++){
		out[i]=temp/13+'0';
		mod=temp%13;
		temp=temp%13*10+(a[i+2]-'0');
	}
	int flag=0;
	if(len==1)
		cout<<0<<endl<<a;
	else {
		for(int i=0; i<len-1; i++){
			if(out[i]!='0') flag=1;
			if(flag) cout<<out[i];
		}
		cout<<endl<<mod;
	}
}
