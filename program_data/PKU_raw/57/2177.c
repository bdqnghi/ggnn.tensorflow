void main()
{
	int n,i,j,l[51];
	char s[51][21];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",s[i]);
		l[i]=strlen(s[i]);
		if(s[i][l[i]-1]=='r' && s[i][l[i]-2]=='e')
		{s[i][l[i]-2]='\0';}
		else if(s[i][l[i]-1]=='y' && s[i][l[i]-2]=='l')
		{s[i][l[i]-2]='\0';}
		else if(s[i][l[i]-1]=='g' && s[i][l[i]-2]=='n' && s[i][l[i]-3]=='i')
		{s[i][l[i]-3]='\0';}
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;s[i][j]!='\0';j++)
		{
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
}


	
