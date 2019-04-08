main()
{
	int m,i,j,k;
	char p[51][100]={0};
	scanf("%d",&m);
	for (i=0;i<m;i++)
	{
		scanf("%s",p[i]);
		j=strlen(p[i]);
		if (p[i][j-1]=='g')
		{
			p[i][j-1]=0;
			p[i][j-2]=0;
			p[i][j-3]=0;
		}
		if (p[i][j-1]=='r')
		{
			p[i][j-1]=0;
			p[i][j-2]=0;
		}
		if (p[i][j-1]=='y')
		{
			p[i][j-1]=0;
			p[i][j-2]=0;
		}
	}
	for (i=0;i<m;i++)
	     printf("%s\n",p[i]);
}