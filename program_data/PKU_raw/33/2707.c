
int main()
{
	int n,i,j;
	//char lian[100][256],hubu[100][256];
	char **lian, **hubu;
	scanf("%d",&n);
	lian = (char**)malloc(n*sizeof(char*));
	hubu = (char**)malloc(n*sizeof(char*));
	for(i=0; i<n; i++)
	{
		lian[i] = (char*)malloc(256*sizeof(char));
		hubu[i] = (char*)malloc(256*sizeof(char));
	}
	for(i=0;i<n;i++)
	{
		scanf("%s",lian[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;lian[i][j]!='\0';j++)
			
		{
			if(lian[i][j]=='A')
			{
				hubu[i][j]='T';
			}
			if(lian[i][j]=='T')
			{
				hubu[i][j]='A';
			}
            if(lian[i][j]=='G')
			{
				hubu[i][j]='C';
			}
			if(lian[i][j]=='C')
			{
				hubu[i][j]='G';
			}         
		}
		hubu[i][j]='\0';
	}
	for(i=0; i<n; i++)
		printf("%s\n",hubu[i]);
	return 0;
}