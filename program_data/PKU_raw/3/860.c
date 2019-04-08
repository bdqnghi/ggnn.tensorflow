int main()
{
	int n,k,i,j,a[1000],m=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]+a[j]==k&&i!=j)
			{
				printf("yes");
				m++;
				break;
			}
			if(i==n-2&&j==n-1)
			{
				printf("no");
				m++;
				break;
			}
		}
		if(m==1)
		{
			break;
		}
	}
		
	return 0;
}
	