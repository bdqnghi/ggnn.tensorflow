
main()
{
	int prime[10010]={0};
	int m;
	int i,j;

	scanf("%d",&m);
	prime[1]=1;
	for(i=2;i<=100;i++)
		for(j=i+1;j<=m;j++)
		{if(j%i==0) prime[j]=1;}

	for(j=3;j<=m/2;j=j+2)
		if(prime[j]==0&&prime[m-j]==0)
			printf("%d %d\n\n",j,m-j);
}
