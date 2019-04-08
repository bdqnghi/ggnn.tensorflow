int main()
{
	char str[1000][11]={{0}},substr[1000][4]={{0}},a[11]={0},b[4]={0};
	int i=0,j,k,maxpos;
	while(scanf("%s %s",a,b)!=EOF)
	{
		for(j=0;j<=strlen(a);j++)
		{
			str[i][j]=a[j];
		}
		for(j=0;j<=strlen(b);j++)
		{
			substr[i][j]=b[j];
		}
		i++;
	}
	for(j=0;j<=i-1;j++)
	{
		maxpos=strlen(str[j])-1;
		for(k=strlen(str[j])-1;k>=0;k--)
		{
			if(str[j][k]>=str[j][maxpos])maxpos=k;
		}
		for(k=0;k<=maxpos;k++)
		{
			putchar(str[j][k]);
		}
		for(k=0;k<=2;k++)
		{
			putchar(substr[j][k]);
		}
		for(k=maxpos+1;k<=strlen(str[j])-1;k++)
		{
			putchar(str[j][k]);
		}
		putchar('\n');
	}

	return 0;
}