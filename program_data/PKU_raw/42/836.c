/*
 * ???????.cpp
 *
 *  Created on: 2011-10-19
 *      Author: Administrator
 */
int main()
{
	int i,n,s,j,k=0;
	cin>>n;
	int a[n];
	for(i=0;i<(n-1);i++)
	{
		cin>>a[i];
	}
	cin>>a[n-1];
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			for(j=i;j<(n-k+1);j++){
				a[j]=a[j+1];
			}
			i=i-1;
			k=k+1;
		}
	}
	for(i=0;i<(n-k-1);i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n-k-1]<<endl;
	return 0;
}
