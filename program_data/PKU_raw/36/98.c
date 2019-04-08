int  main()
{
	char a[100];
	int i,x;
	gets(a);
	x=strlen(a);
	if (x%2==0)
	printf("NO\n");
	else
	{
		for (i=0;i<x;i++)
		{
			int k=0,j;
			for (j=0;j<x;j++)
			{
				if (a[j]==a[i]&&a[j]!=' ')
				k++;
			}
			if (k%2!=0)
			{
				printf("NO\n");
				return 0;
			}
		}
		printf("YES\n");
	}
}
			
