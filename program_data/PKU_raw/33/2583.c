int main()
{
	char zifu[256],trans[10000][256];
	int a,b,c,d,n;
	scanf("%d",&n);
	for(a=0;a<n;a++)
	{
		scanf("%s",&zifu);
		for(b=0;zifu[b]!='\0';b++)
		{
			if(zifu[b]=='A')
				trans[a][b]='T';
			if(zifu[b]=='T')
				trans[a][b]='A';
			if(zifu[b]=='C')
				trans[a][b]='G';
			if(zifu[b]=='G')
				trans[a][b]='C';
		}
	}
	for(a=0;a<n;a++)
	{
		printf("%s\n",trans[a]);
	}
	return 0;
}