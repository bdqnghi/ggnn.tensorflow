/*
 * 1000012858_26.cpp
 *
 *  Created on: 2010-11-3
 *      Author: Administrator
 */
int main()
{
	int f[20001];
	int i,n;
	cin>>n;
	for (i=1;i<=n;i++)
		f[i]=0;
	for (i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		if (f[a]==0)
		{
			f[a]=1;
			if (i!=1) cout<<' ';
			cout<<a;
		}
	}
	return 0;
}


