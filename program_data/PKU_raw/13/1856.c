/*
 * unseennum.cpp
 *
 *  Created on: 2013-11-5
 *      Author: ???
 */

int main()
{int a[20000];
int n,i,j,l,k;
cin>>n;
l=n;
for(i=0;i<n;i++)
	cin>>a[i];

for(i=0;i<l-1;i++)
{
	for(j=i+1;j<l;j++)
	{
		if(a[i]==a[j])
		{for(k=j;k<l-1;k++)
			a[k]=a[k+1];
		j--;
		l--;
		}
	}

}
cout<<a[0];

for(i=1;i<l;i++)
	cout<<' '<<a[i];
return 0;

}
