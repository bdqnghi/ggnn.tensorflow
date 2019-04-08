main()
{
	int m,n,i,j,k,l;
	char a[100][200];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) gets(a[i]);
	for (i=0;i<n;i++)
	{
		if (a[i][0]<58&&a[i][0]>47) 
		{
			printf("no\n");
		}
		else 
		{for (j=0;a[i][j]!='\0';j++)
		{
			if (a[i][j]!='_')
			{
				if (a[i][j]<48||a[i][j]>122)
				{
					printf("no\n");
					break;
				}
				if (a[i][j]<65&&a[i][j]>57)
				{
					printf("no\n");
					break;
				}
				if (a[i][j]<97&&a[i][j]>90)
				{
					printf("no\n");
					break;
				}
			}
		}
		if (a[i][j]=='\0') printf("yes\n");
		}
	}
}