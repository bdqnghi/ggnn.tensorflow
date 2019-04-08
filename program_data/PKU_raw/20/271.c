void main()
{
	int i,j,k,m=0,n,w;
	char a[10][15],b[10][15],d[10][15];
	for (i=0;i<10;i++)
		for(j=0;j<15;j++)
		{a[i][j]='\0';b[i][j]='\0';d[i][j]='\0';}
	for(i=0;scanf("%s %s",a[i],b[i])!=EOF;i++)
	{n=strlen(a[i]);
	for (k=0,m=0;k<n-1;k++)
	{if (a[i][m]<a[i][k+1])
	m=k+1;}
	for (k=n-1;k>m;k--)
		a[i][k+3]=a[i][k];
	for (k=m+1,w=0;k!=m+4;k++,w++)
         a[i][k]=b[i][w];
    puts(a[i]);printf("\n");}
}

