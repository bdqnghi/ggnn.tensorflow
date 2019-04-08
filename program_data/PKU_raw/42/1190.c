/*
 * 11055.cpp
 *
 *  Created on: 2011-11-5
 *      Author: Administrator
 */
int main ()
{
	int n,k,i,j,num=0,dnum=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(j=i;j<n;j++)
				a[j]=a[j+1];
			i=i-1;
			dnum=dnum+1;
		}
		num=num+1;
		if(num==n) break;
	}
	cout<<a[0];
	for(i=1;i<n-dnum;i++)
		cout<<" "<<a[i];
	return 0;
}
