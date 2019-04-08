int len[10000];
char str[10000][10000];
int main()

{
	int n,i,j;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",&str[i]);
	len[i]=strlen(str[i]);}
	for(i=0;i<n;i++)
	{
		for(j=0;j<len[i];j++)
		{
			if(str[i][j]=='A')
			{str[i][j]='T';
			continue;}
			if(str[i][j]=='T')
			{str[i][j]='A';
			continue;}
			if(str[i][j]=='C')
			{str[i][j]='G';
			continue;}
			if(str[i][j]=='G')
			{str[i][j]='C';
			continue;}
		}
	}
	for(i=0;i<n;i++)
	{printf("%s\n",str[i]);}

	return 0;
}
