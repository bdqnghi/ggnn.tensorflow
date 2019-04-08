void main()
{
	int n;
	scanf("%d",&n);
    int i;
	int a[20000];
	for (i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
	int j,tag=0;
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
	{tag=0;
		for(j=0;j<=i-1;j++)
		{if (a[j]==a[i]) tag++;}
	if (tag==0)  printf(" %d",a[i]);
	}

		

}
