void main()
{
	int n,i,j,a[50];
	char str[50][100];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		gets(str[i]);//??????
	for(i=0;i<=n;i++)
	{
		a[i]=strlen(str[i]);
		if((str[i][a[i]-1]=='r'&& str[i][a[i]-2]=='e')||(str[i][a[i]-1]=='y' && str[i][a[i]-2]=='l'))
		{
			for(j=0;j<a[i]-2;j++)
				printf("%c",str[i][j]);
			printf("\n");
		}
		else if(str[i][a[i]-1]=='g'&&str[i][a[i]-2]=='n'&&str[i][a[i]-3]=='i')
		{
			for(j=0;j<a[i]-3;j++)
				printf("%c",str[i][j]);
			printf("\n");
		}
		else
			puts(str[i]);
	}


	
}