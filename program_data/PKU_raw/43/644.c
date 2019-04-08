
int main()
{
	int m;
	int i,j,t,k,r;
	int n;
	int flag=1;
	int a[10000];
	scanf("%d",&m);
	t=1;
	for (i=3;i<=m;i=i+2)
	{
		flag=1;
		for (j=3;j<=(int)floor(sqrt((double)i));j++)
		{
			if (i%j==0)
			{
				flag=0;
				break;
			}
		}
		if (flag==1)
		{
			a[t]=i;
			t++;
		}
	}
	n=t-1;
	for (k=1;k<=n;k++)
	{
		for(r=k;r<=n;r++)
		{
			if (a[k]+a[r]==m)
			{
				printf("%d %d\n",a[k],a[r]);
			}
		}
	}

	return 0;
}