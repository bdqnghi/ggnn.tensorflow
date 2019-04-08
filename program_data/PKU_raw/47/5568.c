
void main()
{
	int a[100],n,i,flag=0;
	int *pt;

	scanf("%d",&n);

	pt=a;

	for(i=0;i<=n-1;i++)
	{
		scanf("%d",pt+i);
	}

	for(i=n-1;i>=0;i--)
	{
		if(flag==0)
		{	printf("%d",*(pt+i));
		flag=1;}
		else
			printf(" %d",*(pt+i));
	}
}


