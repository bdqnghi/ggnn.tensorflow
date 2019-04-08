void main()
{
	int n,i,j,l;
	char a[100][100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a[i]);
		l=strlen(a[i]);
		if(a[i][l-2]=='e'&&a[i][l-1]=='r')
		{
			for(j=0;j<=l-3;j++)
				printf("%c",a[i][j]);
				printf("\n");
		}
		else if(a[i][l-3]=='i'&&a[i][l-2]=='n'&&a[i][l-1]=='g')
		{
			for(j=0;j<=l-4;j++)
				printf("%c",a[i][j]);
				printf("\n");
		}
		else if(a[i][l-2]=='l'&&a[i][l-1]=='y')
		{
			for(j=0;j<=l-3;j++)
	         	printf("%c",a[i][j]);
				printf("\n");
		}
		else printf("%s",a[i]);
	}
}