/*
 * qinpengzifuchuan.cpp
 *
 *  Created on: 2012-12-14
 *      Author: Justin
 */

int main(){
	char a[101],*p,*q,*r;
	cin.getline(a,101);
	int len;
	len=strlen(a);
	for(p=a;p<a+len-1;p++){
		int b;
		b=*p+*(p+1);
		char c;
		c=b;
		cout<<c;
	}
	q=a;r=a+len-1;
	int d=*q+*r;
	char e=d;
	cout<<e;

}