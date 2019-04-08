void main()
{
	char a[110];
	int i,j,n,m=0;
	while(scanf("%s",a)!=EOF)
	{
	n=strlen(a);
	for(i=0;i<n;i++) printf("%c",a[i]);
	printf("\n");
	for(i=n-1;i>=0;i--)
	{		
		if(a[i]=='(')
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]==')') {a[i]='a';a[j]='a';break;}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]=='(') a[i]='$';
		else
			if(a[i]==')') a[i]='?';
		else a[i]=' ';
	}
	for(i=0;i<n;i++) printf("%c",a[i]);
	printf("\n");
	}
}