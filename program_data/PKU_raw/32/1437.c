void main()
{
	int n,i,c,j,k,m;
    char a[100][100],b[100][100],d[100][100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%s %s",a[i],b[i]);
    for(i=1;i<=n;i++)
	{
		c=strlen(a[i])-strlen(b[i]);
		for(j=strlen(b[i]);j>=0;j--)
			b[i][j+c]=b[i][j];
    		for(k=0;k<c;k++)
			b[i][k]='0';

    }
    for(i=1;i<=n;i++)
	{
        for(m=(strlen(a[i])-1);m>=0;m--)
		{
			if(a[i][m]>=b[i][m])
				d[i][m]=a[i][m]-b[i][m]+48;
            if(a[i][m]<b[i][m])
			{
				d[i][m]=a[i][m]-b[i][m]+58;
			    a[i][m-1]=a[i][m-1]-1;
			}
		}
		d[i][strlen(a[i])]='\0';
	}


    for(i=1;i<=n;i++)
		printf("%s\n",d[i]);
}