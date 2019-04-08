int main()
{
	int n=0,m=0,i=0,j=0,k=0,sum=0,s=0;
	int a[1000000]={0};
	cin>>n;
	for(i=1;i<=n;i++)cin>>a[i];
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
		s=0;
			if(a[i]==m)
			{
				for(k=1;k<1000;k++)
				{
					s++;if(a[i+k]!=m)break;
				}
				for(j=i;j<=n-k;j++)a[j]=a[j+k];
			}
	}
	
	for(i=1;i<=n-sum-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-sum];
	cin.get();cin.get();
	return 0;
}
