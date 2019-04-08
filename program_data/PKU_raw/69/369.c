/*
 * 12.10.cpp
 *
 *  Created on: 2011-12-2
 *      Author: wuch
 */

int main(){
	char a[250],b[250];   //??????a?b
	int c[251],i,aa,bb,len1,len2;
	cin.getline(a,250);  //??a?b
	cin.getline(b,250);
	len1=strlen(a);      //??a?b???
	len2=strlen(b);
	for (i=0;i<=250;i++) c[i]=0;
	if (len1>len2) {     //?????????0??????????
		for (i=len1-1;i>=len1-len2;i--) b[i]=b[i-len1+len2];
		for (i=0;i<len1-len2;i++) b[i]='0';
		len2=len1;
	}
	if (len1<len2) {
			for (i=len2-1;i>=len2-len1;i--) a[i]=a[i-len2+len1];
			for (i=0;i<len2-len1;i++) a[i]='0';
			len1=len2;
		}
	for (i=0;i<len1;i++){ //?????i???????
		switch (a[len1-i-1]) //??a?????i?
		{
		case'0':aa=0;break;
		case'1':aa=1;break;
		case'2':aa=2;break;
		case'3':aa=3;break;
		case'4':aa=4;break;
		case'5':aa=5;break;
		case'6':aa=6;break;
		case'7':aa=7;break;
		case'8':aa=8;break;
		case'9':aa=9;break;
		default:break;
		}
		switch (b[len1-i-1])  //??b?????i?
		{
		case'0':bb=0;break;
		case'1':bb=1;break;
		case'2':bb=2;break;
		case'3':bb=3;break;
		case'4':bb=4;break;
		case'5':bb=5;break;
		case'6':bb=6;break;
		case'7':bb=7;break;
		case'8':bb=8;break;
		case'9':bb=9;break;
		default:break;
		}
		c[i]=c[i]+aa+bb;  //????
		if (c[i]>9) {  //???9???
			c[i+1]=1;
			c[i]=c[i]-10;
		}
	}
	for (i=250;i>0;i--) if (c[i]!=0) break; //???????0?
	len2=i;
	for (i=len2;i>=0;i--) cout<<c[i];  //??????0????????
	return 0;
}