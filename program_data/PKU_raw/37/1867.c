main()
{
	int n,i,j,k;
	scanf("%d",&n);
	char a[233333];
	for(k=0;k<n;k++)
	{
		int b[233333]={0};
		scanf("%s",a);
		for(i=0;a[i]!='\0';i++)
		{
			for(j=0;a[j]!='\0';j++)
			{
				if(a[i]==a[j])
				b[i]++;
			}
		}
		j=0;
		for(i=0;a[i]!='\0';i++)
		{
			if(b[i]==1)
			{
				j=1;
				break;
			}
		}
		if(j==0)
		{
			printf("no\n");
		}
		else
		printf("%c\n",a[i]);
	}
}