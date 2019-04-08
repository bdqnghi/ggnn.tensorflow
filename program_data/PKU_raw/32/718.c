/*
 * dazhengshujianfa.cpp
 *
 *  Created on: 2010-11-17
 *      Author: Administrator
 */
int main(){
	int n,i,j,lenth1,lenth2,carry;
	carry=0;
	cin>>n;
	char a[101],b[101],c[101];
	for(i=1;i<=n;i++){
		carry=0;
		cin>>a;
		cin>>b;
		lenth1=strlen(a);
		lenth2=strlen(b);
		for(j=lenth2;j<lenth1;j++){
			b[j]='0';
		}
		strcpy(c,a);
		for(j=1;j<=lenth2;j++){
            c[lenth1-j]=a[lenth1-j]-b[lenth2-j]-carry+'0';
			if(c[lenth1-j]-'0'<0){
				carry=1;
				c[lenth1-j]+=10;
			}
			else  carry=0;
		}
		if(lenth1>lenth2){
			if(carry==1){
				c[lenth1-lenth2-1]-=1;
			}
		}
		if(c[0]=='0')  c[0]='\0';
		for(j=0;j<lenth1;j++){
			cout<<c[j];
		}
		cout<<endl;
	}
	return 0;
}

