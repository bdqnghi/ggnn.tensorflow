int main()
{
	int n,a[501],i,b[501]={'0'},j=0,t,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			b[j]=a[i];
			j++;
		}
	}
	k=j;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	cout<<b[0];
	for(i=1;b[i]!=0;i++)
	{
		cout<<","<<b[i];
	}
	return 0;
}