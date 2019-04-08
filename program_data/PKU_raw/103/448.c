/*
 * 1.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main()
{
	char a[1010],b,c;int i,j,k,n=0,length;
	cin>>a;
	length=strlen(a);
	for(i=0;i<length;i++)
	{
		b=a[i];
		while(a[i]==b||(a[i]-('a'-'A'))==b||(a[i]+('a'-'A'))==b)
		{n=n+1;i++;}
		if(a[i-1]>='a')
		{
			b=a[i-1]-('a'-'A');
			cout<<"("<<b<<","<<n<<")";}
		if(a[i-1]<'a')
		{cout<<"("<<a[i-1]<<","<<n<<")";}
		i=i-1;
		n=0;
	}
	return 0;
}
