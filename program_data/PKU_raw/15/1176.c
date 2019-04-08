int s[10000][10000];
void main()
{
	int n,i,j,a1,b1,a2,b2,sum,flag;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&s[i][j]);

	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(s[i][j]==0)
			{
				a1=i;
				b1=j;
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}

	for(i=n-1;i>0;i--)
	{
		flag=0;
		for(j=n-1;j>0;j--)
		{
			if(s[i][j]==0)
			{
				a2=i;
				b2=j;
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}

	sum=(a2-a1-1)*(b2-b1-1);
	printf("%d",sum);

}