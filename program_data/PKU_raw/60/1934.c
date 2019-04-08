main()
{
	int n,i,j,t,u,a[100000];
	scanf("%d",&n);
	if(n<5)
	printf("empty");
	else if(n>=5)
	{
		u=0;
		for(i=3;i<n+1;i++)
		{
			t=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
				t=1;
				break;
				}
			}
			if(t==0)
			{
				a[u]=i;
				u++;
			}
		}
		for(i=1;i<u;i++)
		{
			if(a[i]-a[i-1]==2)
			printf("%d %d\n",a[i-1],a[i]);
		}
	}
}