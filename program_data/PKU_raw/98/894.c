main()
{
	char a[1000][40];
	int i,n,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	m=strlen(a[0]);
	printf("%s",a[0]);
	for(i=1;i<n;i++)
	{	
		m=m+strlen(a[i])+1;
		if(m<=80)
			printf(" %s",a[i]);
		else
		{
			m=strlen(a[i]);
            printf("\n%s",a[i]);
		}
	}
}