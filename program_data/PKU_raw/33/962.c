void main()
{
	int i,l,k,j;
	char b[3],c[1000][1000];
	scanf("%d",&k);
	gets(b);
	for(i=0;i<k;i++)
	{
		gets(c[i]);
		l=strlen(c[i]);
		for(j=0;j<l;j++)
		{
			if(c[i][j]=='C')
				printf("G");
			if(c[i][j]=='A')
				printf("T");
			if(c[i][j]=='T')
				printf("A");
			if(c[i][j]=='G')
				printf("C");
		}
         printf("\n");
	}
}