int main()
{
	int n,i,j,m=0,good,count=0;
	int b[100];
	scanf("%d",&n);
	for(i=3;i<n;i++)
	{
		good=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				good=1;
			}
		}
		if(good==0)
		{
			b[m]=i;
			m++;
			count++;
		}
	}
	for(i=0;i<count;i++)
	{
		for(j=0;j<count;j++)
		{
			if(b[i]+b[j]==n&&b[i]<=b[j])
			{
				printf("%d %d\n",b[i],b[j]);
			}
		}
	}
	return 0;
}

		
