int main()
{
	int i,n,j,k,m=0,h=0;
	scanf("%d",&n);
	int *sushu=(int *)malloc(sizeof(int) * n);
	for(i=3;i<=n;i++)
	{
		k=0;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==1)
		{continue;}
		sushu[m]=i;
		m++;
	}
	for(i=0;i<m-1;i++)
	{
		if(sushu[i+1]-sushu[i]==2)
		{
			printf("%d %d\n",sushu[i],sushu[i+1]);h=1;
		}
	}
	if(h==0)
{
printf("empty\n");
}

	return 0;
}