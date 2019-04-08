/*
 * c.cpp
 * ???1100012870;
 * ???????
 *  Created on: 2011-10-19
 *      Author: Li Wenpeng
 */
int main()
{
	int i,j;
	long int a[100001],n,k,m;
	memset(a,0,sizeof(a));
	cin>>n;
	m=n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for (i=0;i<m;i++)
	{
		while (a[i]-k==0)
		{
			if (m-i==1)
			{
				m=m-1;
				break;
			}
			for (j=i;j<m-1;j++) a[j]=a[j+1];
			m=m-1;
		}
	}
	cout<<a[0];
	for (i=1;i<m;i++) cout<<' '<<a[i];
	return 0;
}