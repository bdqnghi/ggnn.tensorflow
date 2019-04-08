int main()
{
	int i,j,n;
	char sz[10000][260];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%s",sz[i]);
		for(j=0;sz[i][j]!='\0';j++)
		{
				if(sz[i][j]-'A'==0)
					sz[i][j]='T';
				else if(sz[i][j]-'T'==0)
					sz[i][j]='A';
			    else if(sz[i][j]-'C'==0)
					sz[i][j]='G';
				else if(sz[i][j]-'G'==0)
					sz[i][j]='C';
		}
		printf("%s\n",sz[i]);
	}
	return 0;
}