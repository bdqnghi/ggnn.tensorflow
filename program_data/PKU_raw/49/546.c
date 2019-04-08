/*
 * fuxi001_huiwen_zichuan.cpp
 * name:????
 *  Created on: 2011-12-21
 *      Author: zhujile
 */
void check(char *p,char *q)
{
	int flag=1;                   //??
	char *st=p,*en=q;
	for (;st<en;st++,en--)        //??????
	{
		if (*st==*en) continue;
		else {flag=0;break;}      //???????
	}
	if (flag==1)                  //?????????
	{
		while(p<=q)               //??
		{
			cout<<*p;
			p++;
		}
		cout<<endl;
	}
}
int main(){
	char a[501];
	cin.getline(a,501);            //??
	char *p,*q;
	int length,k;
	length=strlen(a);              //????
	for (k=1;k<length;k++)         //??????
	{
		p=a;
		q=a+k;
		for (;q<a+length;p++,q++)
		{
			if (*p==*q)            //???????
				check(p,q);        //??
		}
	}
	return 0;
}
