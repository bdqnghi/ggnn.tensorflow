int main()
{
	int n,i,j,k;
	cin>>n;
	int num[50]={0};
	num[1]=2;
	for(i=1;i<n;i++)
	{
		k=49;
		while(num[k]==0)
			k--;
		for(j=1;j<=k+1;j++)
		{
			num[j]*=2;
			if(num[j-1]>=10)
			{
				num[j-1]-=10;
				num[j]++;
			}
		}
	}
	if(n==0)
		cout<<1<<endl;
	else
	{
		k=49;
		while(num[k]==0)
			k--;
		for(i=k;i>0;i--)
			cout<<num[i];
		cout<<endl;
	}
	return 0;
}
