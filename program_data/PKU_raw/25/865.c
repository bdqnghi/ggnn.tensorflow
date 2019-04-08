int main()
{
	int n;cin>>n;
	int num[1001]={0};
	num[1000]=1;
	int i,j;
	while(n--)
	{
		for(i=1000;i>0;i--)
			num[i]=num[i]*2;
		for(i=1000;i>0;i--)
		{
			if(num[i]>=10)
			{
				num[i]=num[i]-10;
				num[i-1]=num[i-1]+1;
			}
		}
	}
	for(i=0;i<=1000;i++)
	{
		if(num[i]!=0)
		{
			for(j=i;j<=1000;j++)
				cout<<num[j];
			break;
		}
	}
	
	return 0;
}