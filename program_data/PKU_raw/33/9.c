void main()
{
	int n,i,l,j;
	char a[1000][300],b[1000][300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		l=strlen(a[i]);
		for(j=0;j<l;j++)
		{
			if(a[i][j]=='A')
				b[i][j]='T';
			if(a[i][j]=='T')
				b[i][j]='A';

			if(a[i][j]=='C')
				b[i][j]='G';

			if(a[i][j]=='G')
				b[i][j]='C';
		}
		for(j=0;j<l-1;j++)
			printf("%c",b[i][j]);
		printf("%c\n",b[i][l-1]);
	}
}



