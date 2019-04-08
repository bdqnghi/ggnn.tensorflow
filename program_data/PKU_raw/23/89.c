void bo(char c[100])
{
	int i,j,k;
	char d[100][100];
	for(j=0;j<100;j++)
	    for(i=0;i<100;i++)
		    d[j][i]='\0';
	for(i=0,j=0,k=0;c[k]!='\0';k++)
	{
		if(c[k]!=' ')
		{
			d[i][j]=c[k];
			j++;
		}
		if(c[k]==' ')
		{
			if(i!=0)
			    d[i][j]=' ';
			i++;
			j=0;
		}
	}
	if(i!=0)
	{
	printf("%s ",d[i]);
	for(i=i-1;i>=0;i--)
		printf("%s",d[i]);
	}
	else
	puts(c);
}
main()
{
	char c[100],d[100][100];
	int i,j,m,l;
	gets(c);
    bo(c);
}

