char a[10000][256];
void main()
{
	int n;
	int i,j;
	
	char p[256];
	p['A']='T';
	p['T']='A';
	p['C']='G';
	p['G']='C';
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(a[i]);
		for(j=0;a[i][j]!='\0';j++)
		{
			printf("%c",p[a[i][j]]);
			if(a[i][j+1]=='\0')printf("\n");
		}
	}

	
}