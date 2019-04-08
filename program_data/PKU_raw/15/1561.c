int a[1000][1000];
int main()
{
	int n,i,j,s=0,t=0,q,mianji;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		q=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				s++;
				q=1;
			}
		}
		if(q==1)
			break;
	}
	for(j=0;j<n;j++)
	{
		q=0;
		for(i=0;i<n;i++)
		{
			if(a[i][j]==0)
			{
				t++;
				q=1;
			}
		}
		if(q==1)
			break;
	}
	mianji=(t-2)*(s-2);
	printf("%d",mianji);
	return 0;
}
