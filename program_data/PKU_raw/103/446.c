/*
 * 02.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main()
{
	char a[1000];
	cin>>a;
	int k=0,j,number=0;
	int len=strlen(a);
	int i=0;
	for(i=0;i<len;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
	}
	for(i=0;i<len;i=i+k)
	{
		for(j=i;j<len;j++)
		{
			if(a[j]==a[j+1])
			{
				number++;
			}
			else break;
		}
		number++;
		cout<<"("<<a[i]<<","<<number<<")";
		k=number;
		number=0;
	}
}