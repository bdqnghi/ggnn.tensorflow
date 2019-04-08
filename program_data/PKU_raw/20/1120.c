main()
{
	char c1[50][100]={{'\0'}},c2[50][100]={{'\0'}},ch1[50][200]={{'\0'}},ch2[50][100]={{'\0'}};
	int i,j,m,n=0,a[50]={0};
	while(scanf("%s%s",c1[n],c2[n])!=EOF)
	{
		m=c1[n][0];
		for(j=1;c1[n][j]!='\0';j++)
		{
			if(m<c1[n][j])
			{
				a[n]=j;
				m=c1[n][j];
			}
		}
		n++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=a[i];j++)
			ch1[i][j]=c1[i][j];
		for(;j<strlen(c1[i]);j++)
			ch2[i][j-a[i]-1]=c1[i][j];
		strcat(ch1[i],c2[i]);
		strcat(ch1[i],ch2[i]);
	}
	for(i=0;i<n;i++)
		puts(ch1[i]);
	return 0;
}
