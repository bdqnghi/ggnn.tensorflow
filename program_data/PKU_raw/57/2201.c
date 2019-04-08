void main()
{
	int n,i,j,m;
	char a[50][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}	
	for(i=0;i<n;i++)
	{
		for(j=(int)strlen(a[i])-1;j>=0;j--)
		{
		m=(int)strlen(a[i]);
		if(a[i][m-1]=='r'&&a[i][m-2]=='e')a[i][m-2]='\0';
		if(a[i][m-1]=='y'&&a[i][m-2]=='l')a[i][m-2]='\0';
		if(a[i][m-1]=='g'&&a[i][m-2]=='n'&&a[i][m-3]=='i')a[i][m-3]='\0';
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
}
	
