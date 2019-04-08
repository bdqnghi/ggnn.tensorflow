/*
 * 11.1.cpp
 *
 *  Created on: 2011-12-10
 *      Author: Administrator
 */
int main()
{
	int *p,a[203],i,n,m;
	p=a;
	cin>>n>>m;
	for(i=1;i<=n;i++)//??????
	{
		cin>>a[i];
	}
	for(i=n;i>=1;i--)//???????m???
	{
		p[i+m]=p[i];
	}
	for(i=1;i<=m;i++)//?????????
	{
		p[i]=p[i+n];
	}
	for(i=1;i<=n-1;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<p[n];
	return 0;
}
