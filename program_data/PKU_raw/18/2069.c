/*
 * test5.cpp
 *
 *  Created on: 2013-12-19
 *      Author: ???
 */
int a[100][100],sum;
int del(int m)
{
	if(m==1)
		return sum;
	int min;
	for(int i=0;i<m;i++)
	{
		min=a[i][0];
		for(int j=1;j<m;j++)
		{
			if(min>a[i][j])
				min=a[i][j];
		}
		for(int j=0;j<m;j++)
			a[i][j]-=min;
	}
	for(int j=0;j<m;j++)
	{
		min=a[0][j];
		for(int i=1;i<m;i++)
		{
			if(min>a[i][j])
				min=a[i][j];
		}
		for(int i=0;i<m;i++)
			a[i][j]-=min;
	}
	sum+=a[1][1];
	for(int j=1;j<m-1;j++)
		a[0][j]=a[0][j+1];
	for(int i=1;i<m-1;i++)
		a[i][0]=a[i+1][0];
	for(int i=1;i<m-1;i++)
		for(int j=1;j<m-1;j++)
			a[i][j]=a[i+1][j+1];
	return del(m-1);
}
int main()
{
	int n,i,j,k;
	cin>>n;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		sum=0;
		cout<<del(n)<<endl;
	}
	return 0;
}
