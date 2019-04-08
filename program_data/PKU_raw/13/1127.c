int main()
{
	int n,i,j;
	scanf("%d\n",&n);
	int num[n];
	scanf("%d",&num[0]);
	printf("%d",num[0]);
	for(i=1;i<=n-1;i++)
	{
		scanf(" %d",&num[i]);
		for(j=0;j<=i;j++)
		{
		if(j<i&&num[j]==num[i])
		{break;}
		if(j==i)
		{printf(" %d",num[i]);}
		}
	}
return 0;	
}