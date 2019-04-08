void main()
{
	char a[500][41];
	int n,i,j,k,r,b[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	for(i=0,k=b[0]+1;i<n-1;i++)
	{
		k=k+b[i+1];
		printf("%s",a[i]);
		if(k>80)
		{
			printf("\n");
			k=b[i+1]+1;
		}
		else 
		{
			printf(" ");
			k=k+1;
		}
	}
	printf("%s",a[n-1]);
}