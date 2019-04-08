void main()
{
	char h,c[100][20];
	int i=0,j,n,d=0,e=20,f,g,a[100];
	for (j=0;;j++)
	{
		c[i][j]=getchar();
		if (c[i][j]==' ')
		{
			c[i][j]='\0';
			i=i+1;
			j=-1;
		}
		else if (c[i][j]=='\n')
		{
			c[i][j]='\0';
			break;
		}
	}
	n=i;
	for (i=0;i<=n;i++)
	{
	    a[i]=strlen(c[i]);
	}
	for (i=0;i<=n;i++)
	{
		if (a[i]>d)
		{
			d=a[i];
			f=i;
		}
		if (a[i]<e)
		{
			e=a[i];
			g=i;
		}
	}
	printf("%s\n",c[f]);
	printf("%s\n",c[g]);
}