/*
 * 15.cpp
 *
 *  Created on: 2013-12-8
 *      Author: Administrator
 */

int main()
{
	int s;
	char *p=NULL,*q=NULL;
	char a[200],b[200];
	cin.getline(a,200);//?????
	s=strlen(a);
	for(p=a,q=b;p<a+s;p++,q++)
	{
		if(p==a+s-1)
		  *q=*p+*a;
		else
		  *q=*p+*(p+1);//????
      cout<<*q;
	}
return 0;
}
