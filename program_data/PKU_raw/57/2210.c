void main()
{
	int n,i,l,j;
	char c[50][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",c[i]);
	for(i=0;i<n;i++)
	{
		l=strlen(c[i]);
		if(c[i][l-1]==114||c[i][l-1]==121)
		{
			for(j=0;j<l-3;j++)
				printf("%c",c[i][j]);
			printf("%c\n",c[i][l-3]);
		}
		else
		{
			for(j=0;j<l-4;j++)
				printf("%c",c[i][j]);
			printf("%c\n",c[i][l-4]);
		}

	}
}