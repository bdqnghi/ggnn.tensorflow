int main()
{
	int n,m,i=1,j=1,k=1,sum=0,a[200000]={0};
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for(i=1;i<=n;i++)
	{
		if(a[i]==m)
		{
			sum++;
		}
	}
	for(i=1;i<=n;i++)
	{
			if(a[i]==m)
			{
				for(k=1;k<1000;k++)
				{					                                        if(a[i+k]!=m)
						break;
				}
				for(j=i;j<=n-k;j++)
                                     a[j]=a[j+k];
			}
	}
	for(i=1;i<=n-sum-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-sum];
	return 0;
}

