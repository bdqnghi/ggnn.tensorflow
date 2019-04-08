void main()
{
	char a[60][20];
	int n,i,b[60];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i][b[i]-1]=='g'&&a[i][b[i]-2]=='n'&&a[i][b[i]-3]=='i')
		{
			a[i][b[i]-1]='\0';
			a[i][b[i]-2]='\0';
			a[i][b[i]-3]='\0';
			continue;
		}
		if(a[i][b[i]-1]=='y'&&a[i][b[i]-2]=='l' || a[i][b[i]-1]=='r'&&a[i][b[i]-2]=='e')
		{
			a[i][b[i]-1]='\0';
			a[i][b[i]-2]='\0';
			continue;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
}