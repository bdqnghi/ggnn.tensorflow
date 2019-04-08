/*
 * 04.cpp
 *
 *  Created on: 2014-1-4
 *      Author: Administrator
 */
int main()
{
	int i,k=0,s;
	char a[100];
	gets(a);
	s=strlen(a);
	for(i=0;i<s;i++)
	{
		if(a[i]-'0'>=0&&'9'-a[i]>=0)
		{
			cout<<a[i];
			k=1;
		}
		else
			if(k==1)
			{
				cout<<endl;
				k=0;
			}
	}
	return 0;
}
