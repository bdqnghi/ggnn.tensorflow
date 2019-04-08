void main()
{
	int i,j,t;
	char a[100][100]={'t'};
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{scanf("%c",&a[i][j]);
		 if(a[i][j]==' '||a[i][j]=='\n') break;
		}
		if(a[i][j]=='\n') break;
	}
        for(t=0;t<j;t++)
	       printf("%c",a[i][t]);
	   if(i>0) { printf(" ");
	    for(i-=1;i>0;i--)
		printf("%s",a[i]);
	    for(t=0;;t++)
		if(a[0][t]!=' ')
	    printf("%c",a[0][t]);
		else break;}
}