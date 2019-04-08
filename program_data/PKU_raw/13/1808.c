int main()
{
	int n,i,j,k,l=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		for(j=n-1;j>i;j--)
		{if (a[i]==0)
			break;
			if(a[j]==a[i])
			{for(k=j;k<n;k++)
				a[k]=a[k+1];
			a[k]=0;
			l=l+1;
			}
		}
	for(i=0;i<n-l;i++)
		{if(i==0)
			cout<<a[i];
		else
			cout<<" "<<a[i];}
	return 0;
}