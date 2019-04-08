main()
{
	int i,j,k,m=0,n,l1,l2,l3,t;
	char aa[100]={0},b[100],c[100];
	char pp[100][100]={0};
	gets(aa);
	gets(b);
	gets(c);
	l1=strlen(aa);
	l2=strlen(b);
	l3=strlen(c);
	for (i=0;m<l1;i++)
	{
         for (j=0;;j++)
		 {
			 pp[i][j]=aa[m+j];
			 if (aa[m+j]==' '||aa[m+j]==NULL)
				 break;
		 }
		 m+=j+1;
	}
	for (k=0;k<=i;k++)
	{
		for (t=0;t<l2;t++)
		{
			if (pp[k][t]!=b[t])
				break;
		}
		if (t==l2)
		{
			for (t=0;t<=l2;t++)
			     pp[k][t]=0;
			strcpy(pp[k],c);
			if (k!=i-1)
				pp[k][l3]=' ';
		}
	}
	for (k=0;k<=i;k++)
		printf("%s",pp[k]);
}