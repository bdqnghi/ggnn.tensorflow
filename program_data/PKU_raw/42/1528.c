/*
 * wwj.cpp
 *  Created on: 2012-11-4
 *      Author: ???  1200012899
 */
int main ()
{
	int n,a[100001],k;
	int i,l,j,s=0,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(i=0;i<n;i++)
		{
			if(a[i]==k)
				s=s+1;
		}
   for(i=0;i<n;i++)
	{
	    l=0;
	    m=i;
		while(a[m]==k)
		{
			l=l+1;
			m=m+1;
		}
		if(l!=0)
		{
			for(j=i;j+l<n;j++)
			{
				a[j]=a[j+l];
			}
		}
		else continue;
	}
		for(i=0;i<n-s;i++)
		{
			if(i!=0)
				cout<<" ";
			cout<<a[i];
		}

	return 0;
}
